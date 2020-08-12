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
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = -1;
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
	struct<592> Local_116 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 32;
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
	struct<9> Local_158[32];
	struct<855> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_160 = 3;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	struct<23> Local_168 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_169 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	bool bLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = 0;
	bool bLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184[4] = { 0, 0, 0, 0 };
	int iLocal_185[4] = { 0, 0, 0, 0 };
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	bool bLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
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
	sLocal_20 = "NULL";
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
	iLocal_172 = 1;
	func_435();
	while (true)
	{
		wait(0);
		if (func_424())
		{
			func_420();
		}
		if (Global_1696039)
		{
			Global_1696039 = 0;
			func_420();
		}
		if (Global_2405072.f_2672 && Global_2409287 != 0)
		{
			if (Global_2409287 != 6)
			{
				func_420();
			}
		}
		if (func_419() && unk_0x757EF87A33649210())
		{
			func_420();
		}
		if ((!func_418(unk_0xD803B885F5E47A62()) && !func_417(unk_0xD803B885F5E47A62())) && !func_416(unk_0xD803B885F5E47A62()))
		{
			func_420();
		}
		if (unk_0xA14BB9332558B949() && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_34, 6))
		{
			func_420();
		}
		if (func_417(unk_0xD803B885F5E47A62()) && func_412() != func_411())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[func_412() /*421*/].f_310.f_4, 0) && unk_0x757EF87A33649210())
			{
				func_420();
			}
		}
		if (func_417(unk_0xD803B885F5E47A62()) && func_409() != 0)
		{
			func_420();
		}
		iVar0 = 0;
		while (iVar0 < Local_159.f_26)
		{
			if ((!func_408() && unk_0xE9F78D191AD5EDBA(Local_116.f_50[iVar0])) && unk_0x526BC32A660C89E6(Local_116.f_50[iVar0]))
			{
				unk_0x866EE3B81CEF363A(Local_116.f_50[iVar0], true);
			}
			iVar0++;
		}
		func_91();
		if (func_408())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_159.f_26)
	{
		switch (Local_116.f_586[iVar0])
		{
			case 0:
				if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(unk_0xD803B885F5E47A62())))
				{
					Local_116.f_25[iVar0] = 1;
					func_80(&(Local_116.f_168[iVar0 /*55*/]));
					func_79(1, iVar0);
				}
				break;
			
			case 1:
				if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iVar0])))
				{
					if (unk_0x526BC32A660C89E6(Local_116.f_50[iVar0]))
					{
						Local_116.f_45[iVar0] = unk_0xF958843510932FF6(Local_116.f_35[iVar0]);
						if (Local_116.f_45[iVar0] != -1)
						{
							if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), func_78(), func_77(iVar0), 3))
							{
								if (unk_0xA45992A6CE82FB43(Local_116.f_45[iVar0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), -1424880317))
								{
									Local_116.f_35[iVar0] = unk_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_74(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_35[iVar0]);
								}
							}
							else if (unk_0xA45992A6CE82FB43(Local_116.f_45[iVar0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), -1424880317))
							{
								Local_116.f_35[iVar0] = unk_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_77(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_35[iVar0]);
							}
						}
					}
					else
					{
						unk_0x8D30F6387EE75385(Local_116.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_116.f_117[(iVar0 * 4 + iVar1)] != func_411() && Global_2514396 != iVar0) && (Global_2514396 != -1 || func_417(unk_0xD803B885F5E47A62())))
					{
						func_79(2, iVar0);
						Local_116.f_40[iVar0] = iVar1;
						func_73(&(Local_116.f_159[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if (func_72(&(Local_116.f_159[iVar0 /*2*/])) && func_71(&(Local_116.f_159[iVar0 /*2*/]), 2000, 0))
				{
					Local_116.f_35[iVar0] = unk_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_70(iVar0, Local_116.f_40[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_116.f_35[iVar0]);
					func_69(&(Local_116.f_159[iVar0 /*2*/]));
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	vector3 vVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	struct<5> Var23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	
	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_116.f_576[iParam0] > 7 && Local_116.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2514396 == iParam0) || Local_116[iParam0])
	{
		Local_116[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (unk_0xE9F78D191AD5EDBA(Local_116.f_50[iParam0]))
	{
		if (!unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
		{
			Local_116.f_10[iParam0] = 0;
			unk_0x8D30F6387EE75385(Local_116.f_50[iParam0]);
		}
		else if (!Local_116.f_10[iParam0])
		{
			unk_0x866EE3B81CEF363A(Local_116.f_50[iParam0], false);
			Local_116.f_10[iParam0] = 1;
		}
	}
	Local_116.f_45[iParam0] = unk_0xF958843510932FF6(Local_116.f_35[iParam0]);
	switch (Local_116.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_158[iVar1 /*9*/] != 0 || Local_158[iVar1 /*9*/].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_116.f_168[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/].f_6, 0))
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(3, iParam0);
			}
			break;
		
		case 3:
			if (!func_63(iParam0, 18))
			{
				if (func_53(12, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
				{
					if (Local_116.f_45[iParam0] != -1)
					{
						if (Local_116.f_30[iParam0] == 1)
						{
							if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
							{
								Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
							}
						}
						else if (((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
						{
							Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_50(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
						}
						else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
						{
							if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
							{
								Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_74(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
							}
						}
						else if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
						{
							Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
						}
					}
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_116.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!func_72(&(Local_116.f_150[iParam0 /*2*/])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0)
						{
							func_73(&(Local_116.f_150[iParam0 /*2*/]), 0, 0);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!func_72(&(Local_116.f_591[iParam0 /*2*/])))
					{
						func_73(&(Local_116.f_591[iParam0 /*2*/]), 0, 0);
					}
					else if (func_71(&(Local_116.f_591[iParam0 /*2*/]), 60000, 0))
					{
						func_64(iParam0);
						func_69(&(Local_116.f_591[iParam0 /*2*/]));
					}
					else if (func_71(&(Local_116.f_591[iParam0 /*2*/]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_116.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_591[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0)
						{
							iVar8++;
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 30000, 0) || bVar0)
					{
						func_69(&(Local_116.f_150[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_116.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_64(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if ((unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 0)]) && unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 1)])) && unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 2)]))
				{
					if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 0)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 1)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 2)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
						{
							Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
							unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 8))
						{
							if (Local_116.f_45[iParam0] != -1)
							{
								if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
								{
									Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_43(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_116.f_45[iParam0] != -1)
						{
							if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
							{
								Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
								unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
								unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 8);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), true, 0);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), true, 0);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), true, 0);
								func_66(6, iParam0);
							}
							else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1813854677))
							{
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), true, 0);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), true, 0);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), true, 0);
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_116.f_168[iParam0 /*55*/] = 0;
				func_66(7, iParam0);
			}
			break;
		
		case 7:
			vVar11 = { func_76(iParam0) };
			vVar11.z = (vVar11.z + 0.914f);
			switch (Local_116.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_116.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 0)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 0)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 0)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 0)]);
										bVar12 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 0)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 0)]);
										bVar12 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 0)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 0)]);
										bVar12 = true;
									}
									if (bVar12)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_38(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_116.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 1)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 1)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 1)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 1)]);
										bVar13 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 1)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 1)]);
										bVar13 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 1)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 1)]);
										bVar13 = true;
									}
									if (bVar13)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_35(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_116.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 2)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 2)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 2)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 2)]);
										bVar14 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 2)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 2)]);
										bVar14 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 2)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 2)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_34(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_116.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/];
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 3)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 3)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 3)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 3)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 3)]);
										bVar15 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 3)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 3)]);
										bVar15 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 3)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 3)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_33(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
													Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_116.f_410[iVar1 /*5*/] = 3;
												}
												unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
												Local_116.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_116.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				
				case 4:
					if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
					{
						if (!unk_0xE9F78D191AD5EDBA(Local_116.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/];
							unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
							if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 0)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!unk_0xE9F78D191AD5EDBA(Local_116.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/] + 1;
							unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
							if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 1)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!unk_0xE9F78D191AD5EDBA(Local_116.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_116.f_168[iParam0 /*55*/] + 2;
							unk_0x523BCC9DC80CD82F(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
							if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 2)]), func_40(Local_116.f_168[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if ((unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 0)]) && unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 1)])) && unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 0)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 0)]);
								bVar16 = true;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 1)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 1)]);
								bVar16 = true;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 2)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 2)]);
								bVar16 = true;
							}
							if (bVar16)
							{
								return;
							}
							if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
								{
									Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_32(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
								}
								else if (Local_116.f_45[iParam0] != -1)
								{
									if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
									{
										bVar7 = true;
										Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
										if (Local_116.f_389[iParam0 /*5*/] == 0)
										{
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[0] = uVar5;
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[1] = uVar5;
											func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
											Local_116.f_389[iParam0 /*5*/].f_1[2] = uVar5;
											Local_116.f_389[iParam0 /*5*/] = 3;
										}
										unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
									if (Local_116.f_389[iParam0 /*5*/] == 0)
									{
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[0] = uVar5;
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[1] = uVar5;
										func_37(&(Local_116.f_168[iParam0 /*55*/]), &uVar5);
										Local_116.f_389[iParam0 /*5*/].f_1[2] = uVar5;
										Local_116.f_389[iParam0 /*5*/] = 3;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		
		case 8:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]) && Local_116.f_45[iParam0] != -1)
				{
					if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
					{
						Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		
		case 9:
			bVar0 = true;
			if (!func_72(&(Local_116.f_150[iParam0 /*2*/])))
			{
				func_73(&(Local_116.f_150[iParam0 /*2*/]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1) && !unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3)) && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_116.f_50[iParam0]), 0, -1))
								{
									func_52(iParam0, 18);
								}
							}
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
					func_66(10, iParam0);
				}
				else if (func_71(&(Local_116.f_150[iParam0 /*2*/]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_116.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		
		case 10:
			switch (Local_116.f_581[iParam0])
			{
				case 0:
					if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
					{
						if ((unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 0)]) && unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 1)])) && unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 0)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 0)]);
								bVar17 = true;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 1)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 1)]);
								bVar17 = true;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 2)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 2)]);
								bVar17 = true;
							}
							if (bVar17)
							{
								return;
							}
							if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
								{
									Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_30(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 13);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 13);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 13);
									unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
								}
								else if (Local_116.f_45[iParam0] != -1)
								{
									if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
									{
										bVar7 = true;
										Local_116.f_5[iParam0] = 1;
										unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_116.f_5[iParam0] = 1;
									unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						bVar7 = false;
						func_29(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_116.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 0)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 0)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 0)])) && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1) || unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3)))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 0)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 0)]);
										bVar18 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 0)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 0)]);
										bVar18 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 0)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 0)]);
										bVar18 = true;
									}
									if (bVar18)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 4))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_28(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_27(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_26(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											}
											else if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.5f)
											{
												unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_116.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 1)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 1)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 1)])) && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1) || unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3)))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 1)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 1)]);
										bVar19 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 1)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 1)]);
										bVar19 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 1)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 1)]);
										bVar19 = true;
									}
									if (bVar19)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 4))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_20(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_19(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_18(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											}
											else if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.5f)
											{
												unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_116.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 2)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 2)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 2)])) && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1) || unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3)))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 2)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 2)]);
										bVar20 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 2)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 2)]);
										bVar20 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 2)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 2)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 4))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_17(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_16(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_15(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											}
											else if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.5f)
											{
												unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				
				case 4:
					iVar1 = Local_116.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0 || Local_158[iVar1 /*9*/].f_5 > 0))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
							{
								if (((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 3)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 3)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 3)])) && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1) || unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3)))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 3)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 3)]);
										bVar21 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 3)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 3)]);
										bVar21 = true;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 3)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 3)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 4))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_14(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 1))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_13(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 3))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_12(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											}
											else if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.5f)
											{
												unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		
		case 11:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
					{
						Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 2))
					{
						if (Local_116.f_45[iParam0] != -1)
						{
							if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
							{
								Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 9);
								unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 2);
							}
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 9))
					{
						if (Local_116.f_45[iParam0] != -1)
						{
							if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
							{
								Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
								unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
								unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 9);
								func_64(iParam0);
								func_66(12, iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_63(iParam0, 21))
			{
				if (func_53(1, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var23.f_1 = 3;
			if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					iVar22 = Local_116.f_117[iVar2];
					if (iVar22 != func_411() && iVar22 > -1)
					{
						if (Local_116.f_410[iVar22 /*5*/] > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
						{
							if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 0)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 0)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 0)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 0)]);
									bVar24 = true;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 0)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 0)]);
									bVar24 = true;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 0)]);
									bVar24 = true;
								}
								if (bVar24)
								{
									return;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
										{
											unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
											Local_116.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
										{
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
										}
									}
									else
									{
										unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
										Local_116.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
								unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
							unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 3);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar22 = Local_116.f_117[iVar2];
					if (iVar22 != func_411() && iVar22 > -1)
					{
						if (Local_116.f_410[iVar22 /*5*/] > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
						{
							if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 1)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 1)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 1)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 1)]);
									bVar25 = true;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 1)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 1)]);
									bVar25 = true;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 1)]);
									bVar25 = true;
								}
								if (bVar25)
								{
									return;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
										{
											unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
											Local_116.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
										{
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
										}
									}
									else
									{
										unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
										Local_116.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
								unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
							unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 4);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar22 = Local_116.f_117[iVar2];
					if (iVar22 != func_411() && iVar22 > -1)
					{
						if (Local_116.f_410[iVar22 /*5*/] > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
						{
							if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 2)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 2)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 2)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 2)]);
									bVar26 = true;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 2)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 2)]);
									bVar26 = true;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 2)]);
									bVar26 = true;
								}
								if (bVar26)
								{
									return;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
										{
											unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
											Local_116.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
										{
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
										}
									}
									else
									{
										unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
										Local_116.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
								unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
							unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 5);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar22 = Local_116.f_117[iVar2];
					if (iVar22 != func_411() && iVar22 > -1)
					{
						if (Local_116.f_410[iVar22 /*5*/] > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
						{
							if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, 3)]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, 3)])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, 3)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, 3)]);
									bVar27 = true;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, 3)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, 3)]);
									bVar27 = true;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, 3)]);
									bVar27 = true;
								}
								if (bVar27)
								{
									return;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), 2116425869))
										{
											unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
											unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
											Local_116.f_410[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
										{
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
										}
									}
									else
									{
										unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
										Local_116.f_410[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
								unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
							unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 6);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 7))
				{
					if (Local_116.f_389[iParam0 /*5*/] > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
					{
						if ((unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 0)]) && unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 1)])) && unk_0xE5DBF9B6126856CA(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 0)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 0)]);
								bVar28 = true;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 1)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 1)]);
								bVar28 = true;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_55[func_46(iParam0, 2)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_55[func_46(iParam0, 2)]);
								bVar28 = true;
							}
							if (bVar28)
							{
								return;
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 0))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
								{
									Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 0);
								}
							}
							else if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
							{
								if (Local_116.f_45[iParam0] != -1)
								{
									if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
									{
										Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
										unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
										unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 7);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
										Local_116.f_389[iParam0 /*5*/] = { Var23 };
									}
									else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1406739296))
									{
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
									}
								}
								else
								{
									Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
									unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
									unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 7);
									unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
									unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
									unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
									Local_116.f_389[iParam0 /*5*/] = { Var23 };
								}
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
							unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 7);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 0);
						unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 7);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], 10))
				{
					if (Local_116.f_45[iParam0] != -1)
					{
						if (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317))
						{
							if (Local_116.f_30[iParam0] == 1)
							{
								Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
							}
							else
							{
								Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
							}
							unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_116.f_5[iParam0] = 0;
					Local_116.f_20[iParam0] = 0;
					Local_116.f_25[iParam0]++;
					func_69(&(Local_116.f_150[iParam0 /*2*/]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_116.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_411())
		{
			iVar4 = func_9(&(Local_116.f_410[iVar2 /*5*/].f_1), 0, 0);
			if (iVar4 > iVar1 && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar2 /*9*/], 1) || Local_158[iVar2 /*9*/].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		if (iVar1 < 12)
		{
			switch (unk_0x09AC81E49EA267F7(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				
				default:
			}
		}
		else if (bVar0)
		{
			switch (unk_0x09AC81E49EA267F7(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				}
			
			default:
		}
	}
	else if (iVar1 < 12)
	{
		switch (unk_0x09AC81E49EA267F7(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			default:
		}
	}
	else if (bVar0)
	{
		switch (unk_0x09AC81E49EA267F7(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if ((func_11((*uParam0)[0]) != func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2])) && func_11((*uParam0)[1]) != func_11((*uParam0)[2]))
	{
		bVar0 = false;
		iVar1 = ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2]));
		if (iVar1 == 19)
		{
			if ((((func_11((*uParam0)[0]) == 14 || func_11((*uParam0)[0]) == 2) || func_11((*uParam0)[0]) == 3) && ((func_11((*uParam0)[1]) == 14 || func_11((*uParam0)[1]) == 2) || func_11((*uParam0)[1]) == 3)) && ((func_11((*uParam0)[2]) == 14 || func_11((*uParam0)[2]) == 2) || func_11((*uParam0)[2]) == 3))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 9)
		{
			if ((((func_11((*uParam0)[0]) == 2 || func_11((*uParam0)[0]) == 3) || func_11((*uParam0)[0]) == 4) && ((func_11((*uParam0)[1]) == 2 || func_11((*uParam0)[1]) == 3) || func_11((*uParam0)[1]) == 4)) && ((func_11((*uParam0)[2]) == 2 || func_11((*uParam0)[2]) == 3) || func_11((*uParam0)[2]) == 4))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 12)
		{
			if ((((func_11((*uParam0)[0]) == 3 || func_11((*uParam0)[0]) == 4) || func_11((*uParam0)[0]) == 5) && ((func_11((*uParam0)[1]) == 3 || func_11((*uParam0)[1]) == 4) || func_11((*uParam0)[1]) == 5)) && ((func_11((*uParam0)[2]) == 3 || func_11((*uParam0)[2]) == 4) || func_11((*uParam0)[2]) == 5))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 15)
		{
			if ((((func_11((*uParam0)[0]) == 4 || func_11((*uParam0)[0]) == 5) || func_11((*uParam0)[0]) == 6) && ((func_11((*uParam0)[1]) == 4 || func_11((*uParam0)[1]) == 5) || func_11((*uParam0)[1]) == 6)) && ((func_11((*uParam0)[2]) == 4 || func_11((*uParam0)[2]) == 5) || func_11((*uParam0)[2]) == 6))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 18)
		{
			if ((((func_11((*uParam0)[0]) == 5 || func_11((*uParam0)[0]) == 6) || func_11((*uParam0)[0]) == 7) && ((func_11((*uParam0)[1]) == 5 || func_11((*uParam0)[1]) == 6) || func_11((*uParam0)[1]) == 7)) && ((func_11((*uParam0)[2]) == 5 || func_11((*uParam0)[2]) == 6) || func_11((*uParam0)[2]) == 7))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 21)
		{
			if ((((func_11((*uParam0)[0]) == 6 || func_11((*uParam0)[0]) == 7) || func_11((*uParam0)[0]) == 8) && ((func_11((*uParam0)[1]) == 6 || func_11((*uParam0)[1]) == 7) || func_11((*uParam0)[1]) == 8)) && ((func_11((*uParam0)[2]) == 6 || func_11((*uParam0)[2]) == 7) || func_11((*uParam0)[2]) == 8))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 24)
		{
			if ((((func_11((*uParam0)[0]) == 7 || func_11((*uParam0)[0]) == 8) || func_11((*uParam0)[0]) == 9) && ((func_11((*uParam0)[1]) == 7 || func_11((*uParam0)[1]) == 8) || func_11((*uParam0)[1]) == 9)) && ((func_11((*uParam0)[2]) == 7 || func_11((*uParam0)[2]) == 8) || func_11((*uParam0)[2]) == 9))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 27)
		{
			if ((((func_11((*uParam0)[0]) == 8 || func_11((*uParam0)[0]) == 9) || func_11((*uParam0)[0]) == 10) && ((func_11((*uParam0)[1]) == 8 || func_11((*uParam0)[1]) == 9) || func_11((*uParam0)[1]) == 10)) && ((func_11((*uParam0)[2]) == 8 || func_11((*uParam0)[2]) == 9) || func_11((*uParam0)[2]) == 10))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 30)
		{
			if ((((func_11((*uParam0)[0]) == 9 || func_11((*uParam0)[0]) == 10) || func_11((*uParam0)[0]) == 11) && ((func_11((*uParam0)[1]) == 9 || func_11((*uParam0)[1]) == 10) || func_11((*uParam0)[1]) == 11)) && ((func_11((*uParam0)[2]) == 9 || func_11((*uParam0)[2]) == 10) || func_11((*uParam0)[2]) == 11))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 33)
		{
			if ((((func_11((*uParam0)[0]) == 10 || func_11((*uParam0)[0]) == 11) || func_11((*uParam0)[0]) == 12) && ((func_11((*uParam0)[1]) == 10 || func_11((*uParam0)[1]) == 11) || func_11((*uParam0)[1]) == 12)) && ((func_11((*uParam0)[2]) == 10 || func_11((*uParam0)[2]) == 11) || func_11((*uParam0)[2]) == 12))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 36)
		{
			if ((((func_11((*uParam0)[0]) == 11 || func_11((*uParam0)[0]) == 12) || func_11((*uParam0)[0]) == 13) && ((func_11((*uParam0)[1]) == 11 || func_11((*uParam0)[1]) == 12) || func_11((*uParam0)[1]) == 13)) && ((func_11((*uParam0)[2]) == 11 || func_11((*uParam0)[2]) == 12) || func_11((*uParam0)[2]) == 13))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 39)
		{
			if ((((func_11((*uParam0)[0]) == 12 || func_11((*uParam0)[0]) == 13) || func_11((*uParam0)[0]) == 14) && ((func_11((*uParam0)[1]) == 12 || func_11((*uParam0)[1]) == 13) || func_11((*uParam0)[1]) == 14)) && ((func_11((*uParam0)[2]) == 12 || func_11((*uParam0)[2]) == 13) || func_11((*uParam0)[2]) == 14))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 19)
			{
				iVar1 = 6;
			}
			if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0;
	if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + 100;
		}
		else
		{
			return func_11((*uParam0)[2]);
		}
	}
	else if (func_11((*uParam0)[1]) == func_11((*uParam0)[2]) && func_11((*uParam0)[1]) != func_11((*uParam0)[0]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[1]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0]);
		}
	}
	else if (func_11((*uParam0)[2]) == func_11((*uParam0)[0]) && func_11((*uParam0)[2]) != func_11((*uParam0)[1]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[1]);
		}
	}
	else if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) == func_11((*uParam0)[2]))
	{
		return ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2])) + 400;
	}
	else if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
	{
		iVar2 = 200;
	}
	if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]) && func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0]) + iVar2);
	}
	else if (func_11((*uParam0)[1]) > func_11((*uParam0)[0]) && func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[1]) + iVar2);
	}
	else if (func_11((*uParam0)[2]) > func_11((*uParam0)[0]) && func_11((*uParam0)[2]) > func_11((*uParam0)[1]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[2]) + iVar2);
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 0;
		
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 1;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return 2;
		
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			return 3;
		
		default:
	}
	return 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
			return 10;
		
		case 11:
		case 24:
		case 37:
		case 50:
			return 11;
		
		case 12:
		case 25:
		case 38:
		case 51:
			return 12;
		
		case 13:
		case 26:
		case 39:
		case 52:
			return 13;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 14;
		
		default:
	}
	return 0;
}

char* func_12(int iParam0)
{
	if (Local_116.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 1;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(11, &(Local_116.f_50[iParam0]), 0, -1);
	}
	return 1;
}

int func_22(int iParam0)
{
	int iVar0;
	
	if (Local_158[iParam0 /*9*/].f_5 > 0)
	{
		iVar0 = func_9(&(Local_116.f_410[iParam0 /*5*/].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 > 500)
	{
		return 40;
	}
	else if (iParam0 > 400)
	{
		return 30;
	}
	else if (iParam0 > 300)
	{
		return 6;
	}
	else if (iParam0 > 200)
	{
		return 4;
	}
	else if (iParam0 > 100)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_158[iParam1 /*9*/].f_3 > 0 && unk_0xEAE0D21A50E6C7F4(Local_158[iParam1 /*9*/], 1))
	{
		iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 0, 0);
		iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 0);
		if (!func_25(iVar1))
		{
			return 1;
		}
		if (iVar0 > iVar1)
		{
			return 1;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 1, 0);
			iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return 1;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_116.f_410[iParam1 /*5*/].f_1), 0, 1);
				iVar1 = func_9(&(Local_116.f_389[iParam0 /*5*/].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 >= 12)
	{
		return 1;
	}
	return 0;
}

char* func_26(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)
{
	Local_116.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)
{
	Local_116.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_39(var uParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x081C8BC5094A7B76(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0xB0BE3DFBBB59A620(iParam1, vParam2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0x7707E48765093646(iParam1, vParam2, bParam4, bParam3, bParam5));
	}
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(*uParam0), bParam6);
		if (bParam8)
		{
			unk_0x271603AF9C0C7EB3(unk_0x09AD4CE7DA179533(*uParam0), true);
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

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_a_a");
			
			case 2:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_02a");
			
			case 3:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_03a");
			
			case 4:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_04a");
			
			case 5:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_05a");
			
			case 6:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_06a");
			
			case 7:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_07a");
			
			case 8:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_08a");
			
			case 9:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_09a");
			
			case 10:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_10a");
			
			case 11:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_j_a");
			
			case 12:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_q_a");
			
			case 13:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_k_a");
			
			case 14:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_02a");
			
			case 16:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_03a");
			
			case 17:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_04a");
			
			case 18:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_05a");
			
			case 19:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_06a");
			
			case 20:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_07a");
			
			case 21:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_08a");
			
			case 22:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_09a");
			
			case 23:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_10a");
			
			case 24:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_02a");
			
			case 42:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_03a");
			
			case 43:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_04a");
			
			case 44:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_05a");
			
			case 45:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_06a");
			
			case 46:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_07a");
			
			case 47:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_08a");
			
			case 48:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_09a");
			
			case 49:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_10a");
			
			case 50:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_ace");
			
			case 2:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_02");
			
			case 3:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_03");
			
			case 4:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_04");
			
			case 5:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_05");
			
			case 6:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_06");
			
			case 7:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_07");
			
			case 8:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_08");
			
			case 9:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_09");
			
			case 10:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_10");
			
			case 11:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_jack");
			
			case 12:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_queen");
			
			case 13:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_king");
			
			case 14:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_ace");
			
			case 15:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_02");
			
			case 16:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_03");
			
			case 17:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_04");
			
			case 18:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_05");
			
			case 19:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_06");
			
			case 20:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_07");
			
			case 21:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_08");
			
			case 22:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_09");
			
			case 23:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_10");
			
			case 24:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_jack");
			
			case 25:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_queen");
			
			case 26:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_king");
			
			case 27:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_02");
			
			case 29:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_03");
			
			case 30:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_04");
			
			case 31:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_05");
			
			case 32:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_06");
			
			case 33:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_07");
			
			case 34:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_08");
			
			case 35:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_09");
			
			case 36:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_10");
			
			case 37:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_king");
			
			case 40:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_ace");
			
			case 41:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_02");
			
			case 42:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_03");
			
			case 43:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_04");
			
			case 44:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_05");
			
			case 45:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_06");
			
			case 46:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_07");
			
			case 47:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_08");
			
			case 48:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_09");
			
			case 49:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_10");
			
			case 50:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_jack");
			
			case 51:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_queen");
			
			case 52:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	vVar3 = { func_76(iParam0) };
	vVar3.z = (vVar3.z + 0.914f);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar0 = func_46(iParam0, iVar4);
		iVar2 = unk_0x09AC81E49EA267F7(1, 53);
		iVar1 = func_40(iVar2, Local_159.f_5);
		if (!unk_0xE9F78D191AD5EDBA(Local_116.f_55[iVar0]))
		{
			unk_0x523BCC9DC80CD82F(iVar1);
			if (!unk_0xB87F6CF6E5628C67(iVar1) || !func_39(&(Local_116.f_55[iVar0]), iVar1, vVar3, 1, 1, 1, 1, 1, 1, 1))
			{
				return 0;
			}
		}
		iVar4++;
	}
	return 1;
}

int func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (unk_0xE9F78D191AD5EDBA(Local_116.f_68[iVar1]))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_68[iVar1]))
				{
					func_49(&(Local_116.f_68[iVar1]));
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_116.f_68[iVar1]);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (unk_0xE9F78D191AD5EDBA(Local_116.f_55[iVar1]))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_55[iVar1]))
			{
				func_49(&(Local_116.f_55[iVar1]));
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_55[iVar1]);
				bVar0 = true;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_49(var uParam0)
{
	int iVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_116.f_117[(iParam0 * 4 + iVar2)] != func_411())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

void func_52(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_116.f_20[iParam0]), iParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		return 0;
	}
	iVar1 = unk_0x1B50683925F00106(*uParam1);
	if (unk_0x437347B10A200C4B(iVar1, 0))
	{
		return 0;
	}
	if (!unk_0xE5DBF9B6126856CA(*uParam1))
	{
		return 0;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar1))
	{
		return 0;
	}
	if (unk_0x65636D4556D82155(iVar1))
	{
		return 0;
	}
	sVar2 = func_54(7);
	unk_0xC8B576D6F470FFC6(iVar1, &cVar0, sVar2, 1);
	return 1;
}

int func_54(int iParam0)
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

char* func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 1:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 3:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 2:
			return func_56(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 5:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 6:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 7:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 9:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 21:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 8:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 10:
			return "MINIGAME_DEALER_BUSTS";
		
		case 11:
			return "MINIGAME_DEALER_WINS";
		
		case 12:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 13:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 15:
			return "";
		
		case 16:
			return "";
		
		case 17:
			return "";
		
		case 18:
			return "";
		
		case 19:
			return "";
		
		case 20:
			return "";
		
		default:
	}
	return "";
}

char* func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xF4FB3A22FC4991C8(iParam0);
	if (!unk_0x81A93C8315C28F58(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x9539D44F3E4492F6(iVar1);
	if (func_60(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_57(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_57(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_158[*iParam0 /*9*/].f_2;
	return func_59(iVar0, Local_159.f_26);
}

int func_59(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_61(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
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

bool func_63(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_116.f_20[iParam0], iParam1);
}

void func_64(int iParam0)
{
	unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 16);
	unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 17);
	unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 18);
	unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 19);
	unk_0x0674E58A79778E99(&(Local_116.f_20[iParam0]), 21);
}

void func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = 0;
	uParam0->f_1 = 52;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = unk_0xA0A5F9CC633A6814(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Local_116.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)
{
	struct<5> Var0;
	
	Local_116[iParam0] = 1;
	if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iParam0])))
	{
		if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_50[iParam0]))
			{
				Local_116.f_45[iParam0] = unk_0xF958843510932FF6(Local_116.f_35[iParam0]);
				if (Local_116.f_45[iParam0] == -1 || (unk_0xA45992A6CE82FB43(Local_116.f_45[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), -1424880317)))
				{
					Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
				}
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_116.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_116.f_389[iParam0 /*5*/] = { Var0 };
		Local_116.f_5[iParam0] = 0;
		func_69(&(Local_116.f_150[iParam0 /*2*/]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_116.f_25[iParam0]++;
		Local_116[iParam0] = 0;
	}
}

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411() && Local_116.f_410[Local_116.f_117[(iParam0 * 4 + iVar1)] /*5*/] > 0)
			{
				iVar0++;
			}
			else
			{
				if (unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411())
		{
			iVar0++;
		}
		else
		{
			if (unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_116.f_30[iParam0] != iVar0)
	{
		Local_116.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_70(int iParam0, int iParam1)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_71(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_73(uParam0, bParam2, 0);
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

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
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

char* func_74(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (unk_0x09AC81E49EA267F7(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_75(int iParam0)
{
	if (Local_159.f_26 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -135f;
			
			case 1:
				return 45f;
			
			case 2:
				return -45f;
			
			case 3:
				return -45f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_76(int iParam0)
{
	if (Local_159.f_26 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.338f, 264.2453f, -52.8409f;
			
			case 1:
				return 1146.329f, 261.2543f, -52.8409f;
			
			case 2:
				return 1133.74f, 266.6947f, -52.0409f;
			
			case 3:
				return 1148.74f, 251.6947f, -52.0409f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)
{
	Local_116.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 52;
	iVar3 = 0;
	while (iVar3 < 52)
	{
		iVar1 = unk_0xA0A5F9CC633A6814(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 52)
		{
			iVar6 = (iVar4 / 32);
			iVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !unk_0xEAE0D21A50E6C7F4(uVar0[iVar6], iVar7))
			{
				unk_0x5D96D8530B3D0904(&(uVar0[iVar6]), iVar7);
				uParam0->f_2[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!unk_0xEAE0D21A50E6C7F4(uVar0[iVar6], iVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0;
		iVar2 = (iVar2 - 1);
		iVar3++;
	}
	uParam0->f_1 = 52;
}

void func_81()
{
	int iVar0;
	
	if (!func_85(unk_0xD803B885F5E47A62()))
	{
		iVar0 = iLocal_193;
		if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(unk_0xD803B885F5E47A62())))
		{
			if (!unk_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_50[iVar0]))
			{
				func_49(&(Local_116.f_50[iVar0]));
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_50[iVar0]);
			}
		}
	}
	iLocal_193++;
	if (iLocal_193 >= Local_159.f_26)
	{
		iLocal_193 = 0;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 337826907;
	if (Local_116.f_15[iParam0] >= 7)
	{
		iVar0 = -1131233579;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	if (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		return;
	}
	unk_0x3F423BF5B8125A50(func_78());
	if (!unk_0xB4AE0788C1587752(func_78()))
	{
		return;
	}
	if (!unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]))
	{
		if (unk_0xA3FA8B6D2780D661(1))
		{
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0x3C762650AC7F7C2E(1);
			}
			iVar1 = unk_0x36F2404464202779(26, iVar0, func_76(iParam0), func_75(iParam0), 1, true);
			unk_0x71199B01895C6202(iVar0);
			unk_0x98868AF51859FC75(iVar1, false);
			unk_0x20EC6650986ACDC7(iVar1, 0);
			unk_0x11AD11297DC58CC7(iVar1, true);
			unk_0x9DD8618CA5BF832D(iVar1, 249, true);
			unk_0x4E885A246A9D983A(iVar1, 185, true);
			unk_0x4E885A246A9D983A(iVar1, 108, true);
			unk_0x271603AF9C0C7EB3(iVar1, true);
			unk_0xC3BED1CE092AB15D(iVar1, 1);
			unk_0xC978532B427F303B(iVar1, 0);
			unk_0x004A9F3F2E1E4B43(iVar1, 1);
			unk_0xF4CB0B98F8F79D8D(iVar1, 0);
			unk_0x4E885A246A9D983A(iVar1, 208, true);
			unk_0x46CB381A452EF99D(iVar1, 0);
			func_84(Local_116.f_15[iParam0], &iVar1);
			func_83(Local_116.f_15[iParam0], &iVar1);
			unk_0x08841CDB215AE18F(iVar1, func_76(iParam0), 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(iVar1, func_75(iParam0));
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				Local_116.f_50[iParam0] = unk_0xE8C9CB886096272A(iVar1);
				if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iParam0]))
				{
					unk_0x866EE3B81CEF363A(Local_116.f_50[iParam0], false);
					Local_116.f_10[iParam0] = 1;
					Local_116.f_35[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_116.f_35[iParam0]);
					unk_0x8D17794CE3273D70(func_78());
				}
			}
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0x3C762650AC7F7C2E(0);
			}
		}
	}
}

void func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 2, 2, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 4, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 0, 3, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 2, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 0, 3, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 1, 3, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 4, 2, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 4, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 4, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 4, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 1, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 0, 3, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 1, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 1, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 1, 3, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 2, 3, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 2, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 2, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 3, 3, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 3, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 0, 0, 0);
			unk_0x9A28E8CB86CD4694(*iParam1, 1, 0, 0, false);
			break;
		
		case 12:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 3, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 3, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 1, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0, 4, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 1, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 2, 4, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 3, 2, 1, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 4, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 6, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 7, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 8, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 10, 0, 0, 0);
			unk_0x64F9F278AB9DCA2C(*iParam1, 11, 0, 0, 0);
			unk_0x9A28E8CB86CD4694(*iParam1, 1, 0, 0, false);
			break;
	}
}

int func_85(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 1, 1))
	{
		if (func_86(iParam0) && !func_416(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return 0;
}

void func_87()
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	
	Var0.f_1 = 3;
	bVar1 = false;
	iVar2 = iLocal_192;
	if (Local_158[iVar2 /*9*/].f_2 == -1)
	{
		Local_116.f_410[iVar2 /*5*/] = { Var0 };
	}
	if (Local_158[iVar2 /*9*/].f_7 == 0)
	{
		if (Local_116.f_600[iVar2] != 0)
		{
			Local_116.f_600[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_88(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_192++;
	if (iLocal_192 >= 32)
	{
		iLocal_192 = 0;
	}
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_408())
	{
		return 0;
	}
	iVar0 = unk_0xF4FB3A22FC4991C8(iParam0);
	if (!unk_0x81A93C8315C28F58(iVar0))
	{
		return 0;
	}
	iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_158[iParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 1)
	{
		if (func_53(2, &(Local_116.f_50[iVar2]), 0, iParam0))
		{
			func_89(iParam0, 1);
		}
		return 1;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 2)
	{
		if (func_53(3, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 2);
		}
		return 1;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 4)
	{
		if (func_53(4, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 4);
		}
		return 1;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 5)
	{
		if (func_53(5, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 5);
		}
		return 1;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 6)
	{
		if (func_53(6, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 6);
		}
		return 1;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 7)
	{
		if (func_53(7, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_116.f_600[iParam0]), iVar0);
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_191;
	if (Local_116.f_117[iVar0] != func_411())
	{
		iVar1 = Local_116.f_117[iVar0];
		if (((!func_62(Local_116.f_117[iVar0], 1, 1) || Local_158[iVar1 /*9*/].f_1 == -1) || Local_158[iVar1 /*9*/].f_1 != iVar0) || !unk_0xFB75B0F82CA525F6(Local_116.f_117[iVar0]))
		{
			Local_116.f_117[iVar0] = func_411();
			if (Local_116.f_600[iVar0] != 0)
			{
				Local_116.f_600[iVar0] = 0;
			}
		}
	}
	if (func_62(iVar0, 1, 1) && unk_0xFB75B0F82CA525F6(iVar0))
	{
		if (Local_158[iVar0 /*9*/].f_1 > -1 && Local_158[iVar0 /*9*/].f_1 < 32)
		{
			if (Local_116.f_117[Local_158[iVar0 /*9*/].f_1] == func_411())
			{
				if (func_62(unk_0x117658E336116132(iVar0), 1, 1))
				{
					Local_116.f_117[Local_158[iVar0 /*9*/].f_1] = unk_0x117658E336116132(iVar0);
				}
			}
		}
	}
	iLocal_191++;
	if (iLocal_191 >= 32)
	{
		iLocal_191 = 0;
	}
}

void func_91()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	vector3 vVar7;
	
	if (!Local_159.f_5)
	{
		if (func_417(unk_0xD803B885F5E47A62()) && func_412() != func_411())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[func_412() /*421*/].f_310.f_4, 4))
			{
				Local_159.f_5 = 1;
				func_407();
				iLocal_186 = 1;
			}
		}
	}
	else if (iLocal_186)
	{
		if (func_406())
		{
			iLocal_186 = 0;
		}
	}
	func_401();
	Local_159.f_19 = func_398();
	func_388();
	func_384();
	func_381();
	if (Local_159.f_798 > 2)
	{
		unk_0x38C3A68D7861DCFD(2, 210, 1);
		unk_0x558EC149EB2BC0A2(2, 210);
		unk_0x38C3A68D7861DCFD(2, 26, 1);
		if (unk_0x9A01369A10646AFE(2, 210))
		{
		}
		if (func_380(Local_159.f_18) >= 0 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), func_76(func_380(Local_159.f_18)), true) > 5f)
		{
			func_375(0);
		}
	}
	if (Local_159.f_798 > 5)
	{
		unk_0x3FC8DBCC154CA56B();
		unk_0xB8E3919889462ACD();
		unk_0x5024DE80A08E9E70(19);
		func_373(1);
		func_372(1, 0);
	}
	if (Local_159.f_798 > 6)
	{
		unk_0x38C3A68D7861DCFD(2, 0, 1);
		if (unk_0x9A01369A10646AFE(2, 0))
		{
			if (unk_0xA4FD7964FEE91ED8(0) == 0)
			{
				unk_0x398B6B43792F03FE(0, 4);
			}
			else if (unk_0xA4FD7964FEE91ED8(0) == 4)
			{
				unk_0x398B6B43792F03FE(0, 0);
			}
		}
		unk_0x2DA67FDB9E5F446F();
	}
	if (Local_159.f_798 > 7)
	{
		func_368(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]));
	}
	if (func_367())
	{
		bLocal_188 = true;
	}
	else if (bLocal_188)
	{
		func_366(&uLocal_189, 0, 0);
		bLocal_188 = false;
	}
	else if (func_72(&uLocal_189) && func_71(&uLocal_189, 500, 0))
	{
		func_69(&uLocal_189);
	}
	switch (Local_159.f_798)
	{
		case 0:
			if (func_365())
			{
				Local_159.f_796 = "idle_cardgames";
				Local_159.f_22 = 0;
				Local_158[unk_0xD803B885F5E47A62() /*9*/] = 0;
				Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6 = 0;
				Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 = -1;
				Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 = -1;
				func_364(unk_0xD803B885F5E47A62());
				func_363(1);
			}
			break;
		
		case 1:
			switch (func_380(Local_159.f_18))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_159.f_16 = 5000;
					Local_159.f_17 = 10;
					Local_159.f_27 = 500;
					Local_159.f_28 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_159.f_16 = 50000;
					Local_159.f_17 = 1000;
					Local_159.f_27 = 5000;
					Local_159.f_28 = 1000;
					break;
			}
			if (Local_159.f_26 == 1)
			{
				bVar0 = true;
				Local_159.f_16 = 50000;
				Local_159.f_17 = 1000;
				Local_159.f_27 = 5000;
				Local_159.f_28 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26165 && !(Global_262145.f_26167 && !bVar0)) && !(Global_262145.f_26166 && bVar0)) && ((func_362(1581559923) || func_362(272405600)) || func_417(unk_0xD803B885F5E47A62()))) && func_360(unk_0x16F2683693E537C9(), func_361(Local_159.f_18), 1.5f)) && func_355(unk_0x16F2683693E537C9(), func_359(Local_159.f_18), 40f)) && Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] == 0) && !unk_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 2)) && !Global_2405072.f_2672) && Global_2514396 != func_380(Local_159.f_18)) && (Global_2514396 != -1 || func_417(unk_0xD803B885F5E47A62()))) && func_354()) && !func_348()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && func_345(unk_0x16F2683693E537C9()) <= 9) && !Global_2405072.f_2672) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_344()) && !func_343()) && !func_341()) && !Global_2460715.f_12) && Global_1676371 != 31) && !func_340())
			{
				func_363(2);
			}
			else
			{
				Local_159.f_18++;
				if (Local_159.f_18 >= Local_159.f_26 * 4)
				{
					Local_159.f_18 = 0;
				}
			}
			break;
		
		case 2:
			func_339();
			func_364(unk_0xD803B885F5E47A62());
			if (((((((((((((((((((((func_362(1581559923) || func_362(272405600)) || func_417(unk_0xD803B885F5E47A62())) && func_360(unk_0x16F2683693E537C9(), func_361(Local_159.f_18), 1.5f)) && func_355(unk_0x16F2683693E537C9(), func_359(Local_159.f_18), 40f)) && Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] == 0) && Global_2514396 != func_380(Local_159.f_18)) && (Global_2514396 != -1 || func_417(unk_0xD803B885F5E47A62()))) && func_354()) && !func_348()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && func_345(unk_0x16F2683693E537C9()) <= 9) && !Global_2405072.f_2672) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_344()) && !func_343()) && !func_341()) && !Global_2460715.f_12) && Global_1676371 != 31) && !Local_116[func_380(Local_159.f_18)]) && !func_340())
			{
				if ((((((func_62(unk_0xD803B885F5E47A62(), 1, 1) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_338()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !bLocal_188) && !func_72(&uLocal_189))
				{
					if (func_336(2, &uVar1))
					{
						if (!func_335("TCP_NA"))
						{
							func_334("TCP_NA");
						}
					}
					else if (Local_116.f_117[Local_159.f_18] != func_411())
					{
						if (!func_335("TCP_USED"))
						{
							func_334("TCP_USED");
						}
					}
					else if (func_333())
					{
						if (func_329() == 2)
						{
							if (!func_335("CAS_MG_CTIME"))
							{
								func_334("CAS_MG_CTIME");
							}
						}
						else if (!func_335("CAS_MG_CBAN"))
						{
							func_334("CAS_MG_CBAN");
						}
					}
					else if ((!func_328(unk_0xD803B885F5E47A62()) && (func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3)) && !(func_327(1) && func_328(func_326())))
					{
						if (!func_335("CAS_MG_SUITE2"))
						{
							func_334("CAS_MG_SUITE2");
						}
					}
					else if (!func_325() && !(func_327(1) && func_324(func_326())))
					{
						if (!func_322("CAS_MG_MEMB2", func_323(1)))
						{
							func_321("CAS_MG_MEMB2", func_323(1));
						}
						else if (unk_0xBFC0798A6E3417F9(2, 52))
						{
							unk_0xA37A90C62806D848(1);
							func_320();
							func_363(3);
						}
					}
					else if (Local_159.f_19 <= 0)
					{
						if (func_417(unk_0xD803B885F5E47A62()))
						{
							if (!func_335("CAS_MG_NOCHIPS7"))
							{
								func_334("CAS_MG_NOCHIPS7");
							}
						}
						else if (!func_335("CAS_MG_NOCHIPS3"))
						{
							func_334("CAS_MG_NOCHIPS3");
						}
					}
					else if (Local_159.f_19 < Local_159.f_28)
					{
						if (func_417(unk_0xD803B885F5E47A62()))
						{
							if (!func_335("CAS_MG_LOWCHIPS7"))
							{
								func_334("CAS_MG_LOWCHIPS7");
							}
						}
						else if (!func_335("CAS_MG_LOWCHIPS3"))
						{
							func_334("CAS_MG_LOWCHIPS3");
						}
					}
					else if (Local_159.f_31 == -1)
					{
						if (func_319())
						{
							unk_0xA37A90C62806D848(1);
						}
						if (((!func_328(unk_0xD803B885F5E47A62()) && (func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3)) && !(func_327(1) && func_328(func_326()))) || (!func_325() && (func_327(1) && func_324(func_326()))))
						{
							if (func_316(func_326()) == 1)
							{
								Local_159.f_25 = 1;
								func_315(&(Local_159.f_31), 4, "TCP_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_314(func_326()))
							{
								Local_159.f_25 = 2;
								func_315(&(Local_159.f_31), 4, "TCP_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_159.f_25 = 3;
								func_315(&(Local_159.f_31), 4, "TCP_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_159.f_25 = 0;
							func_315(&(Local_159.f_31), 4, "TCP_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_313(Local_159.f_31, 1))
					{
						func_311(&(Local_159.f_31));
						Local_159.f_31 = -1;
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, true);
						func_310();
						func_300(unk_0xD803B885F5E47A62(), 0, 1048832, 0);
						if (unk_0xA4FD7964FEE91ED8(0) == 4 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
						}
						func_363(4);
					}
				}
				else
				{
					if (func_319())
					{
						unk_0xA37A90C62806D848(1);
					}
					if (Local_159.f_31 != -1)
					{
						func_311(&(Local_159.f_31));
						Local_159.f_31 = -1;
					}
					Local_159.f_18 = 0;
					func_363(1);
				}
			}
			else
			{
				if (func_319())
				{
					unk_0xA37A90C62806D848(1);
				}
				if (Local_159.f_31 != -1)
				{
					func_311(&(Local_159.f_31));
					Local_159.f_31 = -1;
				}
				Local_159.f_18 = 0;
				func_363(1);
			}
			break;
		
		case 3:
			if (!func_299())
			{
				func_363(2);
			}
			break;
		
		case 4:
			func_373(1);
			sVar2 = "CasinoUI_Cards_Three";
			if ((func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3) || func_417(unk_0xD803B885F5E47A62()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_5, 22))
			{
				func_366(&(Local_159.f_792), 0, 0);
				func_298(Local_159.f_18);
				if (unk_0xA4FD7964FEE91ED8(0) == 4)
				{
					func_300(unk_0xD803B885F5E47A62(), 0, 0, 0);
				}
				else
				{
					func_300(unk_0xD803B885F5E47A62(), 0, 256, 0);
				}
				func_363(5);
			}
			else
			{
				unk_0x0D3BE1DE0262A012(sVar2, false);
				if (func_296(0, -1, 0) && unk_0x27117E2CDD4D67C3(sVar2))
				{
					if (!iLocal_187)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						func_295(0, 0);
						func_293(1, sVar2, sVar2);
						func_292("TCP_TITLE");
						func_291(-1, 1, 1);
						func_290("TCP_DIS", 0, 0);
						func_289("TCP_DIS1");
						func_289("TCP_DIS2");
						func_289("TCP_DIS3");
						func_288(202, "TCP_EXIT", -1);
						func_288(201, "TCP_CONT", -1);
						iLocal_187 = 1;
					}
					func_261(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (unk_0x9A01369A10646AFE(2, 202))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_258(1, -1);
					unk_0xF5A41F3D3B38EFE3(sVar2);
					iLocal_187 = 0;
					func_249();
				}
				else if (unk_0x9A01369A10646AFE(2, 201))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_258(1, -1);
					unk_0xF5A41F3D3B38EFE3(sVar2);
					iLocal_187 = 0;
					unk_0x5D96D8530B3D0904(&(Global_1676377.f_5), 22);
					func_366(&(Local_159.f_792), 0, 0);
					func_298(Local_159.f_18);
					if (unk_0xA4FD7964FEE91ED8(0) == 4)
					{
						func_300(unk_0xD803B885F5E47A62(), 0, 0, 0);
					}
					else
					{
						func_300(unk_0xD803B885F5E47A62(), 0, 256, 0);
					}
					func_363(5);
				}
			}
			break;
		
		case 5:
			if ((((func_248(Local_159.f_18) && !func_337()) && !func_367()) && func_354()) && !func_348())
			{
				func_69(&(Local_159.f_792));
				unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
				func_239(2);
				func_363(6);
			}
			else
			{
				if (func_337())
				{
					func_249();
				}
				if (func_367())
				{
					func_249();
				}
				if (func_238(Local_159.f_18))
				{
					func_249();
				}
				if (func_237())
				{
					func_249();
				}
				if (!func_354())
				{
					func_249();
				}
				if (func_348())
				{
					func_249();
				}
			}
			break;
		
		case 6:
			if (!func_337() && !func_367())
			{
				if (func_236())
				{
					if (unk_0xA4FD7964FEE91ED8(0) == 1 || unk_0xA4FD7964FEE91ED8(0) == 2)
					{
						unk_0x398B6B43792F03FE(0, 0);
					}
					fVar3 = func_234(unk_0x16F2683693E537C9(), func_235(Local_159.f_18, 0), 1);
					fVar4 = func_234(unk_0x16F2683693E537C9(), func_235(Local_159.f_18, 1), 1);
					fVar5 = func_234(unk_0x16F2683693E537C9(), func_235(Local_159.f_18, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_159.f_21 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_159.f_21 = 2;
					}
					else
					{
						Local_159.f_21 = 0;
					}
					unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), func_235(Local_159.f_18, Local_159.f_21), 1f, 5000, func_233(Local_159.f_18, Local_159.f_21), 0.01f);
					func_363(7);
				}
			}
			else
			{
				func_249();
			}
			break;
		
		case 7:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 0)
			{
				Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_159.f_18), func_232(Local_159.f_18), 2, true, false, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_231(), func_230(Local_159.f_21), 2f, -2f, 13, 16, 2f, 0);
				unk_0x914E6894744915F8(Local_159.f_24);
				Local_158[unk_0xD803B885F5E47A62() /*9*/].f_7.f_1 = Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2;
				func_363(8);
			}
			break;
		
		case 8:
			unk_0xA78CDFD1AE3130A9(-1938411241);
			Local_159.f_30 = unk_0xF958843510932FF6(Local_159.f_24);
			if (func_229())
			{
				func_228(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 2);
			}
			else
			{
				func_228(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 1);
			}
			if (Local_159.f_30 != -1)
			{
				if ((unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 2038294702)) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317))
				{
					func_300(unk_0xD803B885F5E47A62(), 0, 256, 0);
					Local_169 = { Var6 };
					if (func_417(unk_0xD803B885F5E47A62()))
					{
						Local_169 = 1695074466;
					}
					else if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 2 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 3)
					{
						Local_169 = 1952785842;
					}
					else
					{
						Local_169 = -1125105727;
					}
					Local_169.f_1 = Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2;
					Local_169.f_6 = 1;
					if (func_328(unk_0xD803B885F5E47A62()))
					{
						Local_169.f_15 = 1983458449;
					}
					else if (func_325())
					{
						Local_169.f_15 = 1334658487;
					}
					else if (func_327(1) && (func_328(func_326()) || func_226(unk_0xD803B885F5E47A62())))
					{
						Local_169.f_15 = 980726932;
					}
					else
					{
						Local_169.f_15 = 939907746;
					}
					func_366(&uLocal_166, 0, 0);
					func_225();
					Local_159.f_32 = func_398();
					func_363(9);
				}
			}
			break;
		
		case 9:
			if (!unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				unk_0x8BC9595FD2792B5D("DLC_VW_Casino_Table_Games");
			}
			unk_0xA78CDFD1AE3130A9(-1938411241);
			func_95();
			break;
		
		case 10:
			if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				unk_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
			}
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 1785177548) == 1)
			{
				func_228(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), func_94());
				vVar7 = { unk_0x4F3973434662D795(2, 218), unk_0x4F3973434662D795(2, 219), 0f };
				Local_159.f_30 = unk_0xF958843510932FF6(Local_159.f_24);
				if (Local_159.f_7)
				{
					if (Local_159.f_30 != -1 && (unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)))
					{
						Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_159.f_18), func_232(Local_159.f_18), 2, false, false, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_231(), func_93(Local_159.f_18), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_159.f_24);
						Local_159.f_7 = 0;
					}
				}
				else if (Local_159.f_30 != -1 && ((unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)) || (vmag(vVar7) >= 0.24f && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 2116425869))))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_300(unk_0xD803B885F5E47A62(), 1, 0, 0);
					unk_0x8D17794CE3273D70(func_45());
					unk_0x8D17794CE3273D70(func_78());
					unk_0x8D17794CE3273D70(func_92());
					unk_0x8D17794CE3273D70(func_231());
					func_407();
					unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
					func_339();
					func_363(2);
				}
			}
			else
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_300(unk_0xD803B885F5E47A62(), 1, 0, 0);
				unk_0x8D17794CE3273D70(func_45());
				unk_0x8D17794CE3273D70(func_78());
				unk_0x8D17794CE3273D70(func_92());
				unk_0x8D17794CE3273D70(func_231());
				unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
				func_339();
				func_363(2);
			}
			break;
	}
}

char* func_92()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_398();
	iVar1 = (iVar0 - Local_159.f_32);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_95()
{
	int iVar0;
	struct<9> Var1;
	struct<5> Var2;
	struct<23> Var3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	bool bVar30;
	bool bVar31;
	
	if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0)
	{
		if (func_224(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2))
		{
			func_223("TCP_ERROR", -1);
			return;
		}
	}
	func_210();
	if (func_408())
	{
		Local_169.f_10 = 1;
	}
	Local_169.f_11 = func_208();
	if ((((((((unk_0xBFC0798A6E3417F9(2, 202) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_92(), "cards_pickup", 3)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3)) && !Local_159.f_1) && !func_207())
	{
		Local_168.f_4 = 847129329;
		Local_169.f_2 = 847129329;
		Local_168.f_22 = 847129329;
		Local_168.f_7 = func_398();
		Local_168.f_17 = func_206(&uLocal_164, 0, 0);
		Local_168.f_18 = func_408();
		Local_168.f_19 = func_208();
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > -1)
		{
			Local_168.f_9 = Local_116.f_30[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
		}
		if ((Local_159.f_797 > 1 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 != 0) || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 != 0)
		{
			if (Global_262145.f_26036)
			{
				unk_0x1787A8354D584871(&Local_168);
			}
		}
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0 && !Local_159.f_2)
		{
			func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
		}
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 > 0 && !Local_159.f_6)
		{
			func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5);
		}
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 > 0 && !Local_159.f_3)
		{
			func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
		}
		func_375(1);
		unk_0xA37A90C62806D848(1);
		return;
	}
	if (((Global_2514396 == Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 || Global_2460715.f_12) || Global_1676371 == 31) || !func_203())
	{
		Local_168.f_7 = func_398();
		Local_168.f_17 = func_206(&uLocal_164, 0, 0);
		Local_168.f_18 = func_408();
		Local_168.f_19 = func_208();
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > -1)
		{
			Local_168.f_9 = Local_116.f_30[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
		}
		if (Global_262145.f_26036)
		{
			unk_0x1787A8354D584871(&Local_168);
		}
		func_375(1);
		unk_0xA37A90C62806D848(1);
		return;
	}
	if (Local_159.f_24 > -1)
	{
		Local_159.f_30 = unk_0xF958843510932FF6(Local_159.f_24);
		if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_92(), "cards_idle", 3)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0)) && !Local_159.f_1)
		{
			if (!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_231(), "idle_cardgames", 3))
			{
				if (Local_159.f_30 != -1 && (unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)))
				{
					Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_231(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_159.f_24);
					Local_159.f_796 = "idle_cardgames";
				}
			}
			else if (Local_159.f_30 != -1 && (unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)))
			{
				Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_231(), func_202(0), 2f, -2f, 13, 16, 1148846080, 0);
				unk_0x914E6894744915F8(Local_159.f_24);
			}
		}
	}
	if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0)
	{
		func_200(&(Local_159.f_90));
		if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
		{
			func_199(unk_0xF59058FCB716F903(0, 202, true), "TCP_EXIT", &(Local_159.f_90), 0);
			if (((((Local_159.f_797 == 3 && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 2)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 1)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 1)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 3))
			{
				func_199(unk_0xF59058FCB716F903(0, 201, true), "TCP_PLAY_HAND", &(Local_159.f_90), 0);
				func_199(unk_0xF59058FCB716F903(0, 203, true), "TCP_FOLD_HAND", &(Local_159.f_90), 0);
			}
			if (Local_116.f_576[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] == 3 && ((Local_159.f_19 >= Local_159.f_28 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 != 0) || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 != 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0))
				{
					if (Local_159.f_19 >= Local_159.f_17 * 2)
					{
						func_199(unk_0xF59058FCB716F903(0, 201, true), "TCP_PLACE", &(Local_159.f_90), 0);
					}
					func_199(unk_0xF59058FCB716F903(0, 203, true), "TCP_DECLINEA", &(Local_159.f_90), 0);
					if (Local_159.f_19 >= Local_159.f_17 * 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 8))
						{
							func_199(unk_0xF59058FCB716F903(0, 204, true), "TCP_BET_MAX", &(Local_159.f_90), 0);
						}
						func_198(2, 7, "TCP_BET_NUM", &(Local_159.f_90));
					}
				}
				else if ((!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 2) && Local_159.f_19 >= (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 + Local_159.f_28)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0))
				{
					func_199(unk_0xF59058FCB716F903(0, 201, true), "TCP_PLACE_PP", &(Local_159.f_90), 0);
					func_199(unk_0xF59058FCB716F903(0, 203, true), "TCP_DECLINE", &(Local_159.f_90), 0);
					if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 8))
					{
						func_199(unk_0xF59058FCB716F903(0, 204, true), "TCP_BET_MAX", &(Local_159.f_90), 0);
					}
					func_198(2, 7, "TCP_BET_NUM", &(Local_159.f_90));
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0))
		{
			func_199(unk_0xF59058FCB716F903(0, 202, true), "IB_BACK", &(Local_159.f_90), 0);
			func_198(2, 8, "IB_TAB", &(Local_159.f_90));
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
		{
			func_199(unk_0xF59058FCB716F903(0, 202, true), "IB_BACK", &(Local_159.f_90), 0);
		}
		if (Local_116.f_576[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] < 12)
		{
			if (Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] > 0)
			{
				func_199(unk_0xF59058FCB716F903(0, 208, true), "TCP_DLR", &(Local_159.f_90), 0);
			}
			if (Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] > 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4) || unk_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1)))
				{
					func_199(unk_0xF59058FCB716F903(0, 207, true), "TCP_CARDS", &(Local_159.f_90), 0);
				}
				else if (((((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0 && Local_159.f_797 == 3) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 2)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 1)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 1)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 3))
				{
					func_199(unk_0xF59058FCB716F903(0, 207, true), "TCP_PICK_UP", &(Local_159.f_90), 0);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
		{
			func_199(unk_0xF59058FCB716F903(2, 210, true), "TCP_RULESb", &(Local_159.f_90), 0);
			func_199(unk_0xF59058FCB716F903(2, 209, true), "TCP_HANDSb", &(Local_159.f_90), 0);
		}
		Var1 = { func_196() };
		func_195(&(Local_159.f_90), 1f);
		func_187(&(Local_159.f_89), &Var1, &(Local_159.f_90), func_194(&(Local_159.f_90)));
		func_186(1);
	}
	func_181();
	func_162();
	switch (Local_159.f_797)
	{
		case 0:
			if (Local_116.f_576[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] == 3)
			{
				if ((Local_159.f_15 > (Local_159.f_19 / 2) || Local_159.f_15 < Local_159.f_17) || Local_159.f_15 > Local_159.f_16)
				{
					Local_159.f_15 = Local_159.f_17;
				}
				if ((((Local_159.f_23 > Local_159.f_19 || Local_159.f_23 > Local_159.f_27) || Local_159.f_23 < Local_159.f_28) || Local_159.f_23 > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3)) || Local_159.f_23 > Local_159.f_19)
				{
					Local_159.f_23 = Local_159.f_28;
				}
				Var2.f_1 = 3;
				Local_159.f_854 = { Var2 };
				Local_168 = { Var3 };
				Local_168.f_10 = 1;
				Local_168 = -941885798;
				Local_168.f_11 = func_328(unk_0xD803B885F5E47A62());
				if (func_328(unk_0xD803B885F5E47A62()))
				{
					Local_168.f_20 = 1983458449;
				}
				else if (func_325())
				{
					Local_168.f_20 = 1334658487;
				}
				else if (func_327(1) && (func_328(func_326()) || func_226(unk_0xD803B885F5E47A62())))
				{
					Local_168.f_20 = 980726932;
				}
				else
				{
					Local_168.f_20 = 939907746;
				}
				if (func_417(unk_0xD803B885F5E47A62()))
				{
					Local_168.f_1 = 1695074466;
				}
				else if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 2 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 3)
				{
					Local_168.f_1 = 1952785842;
				}
				else
				{
					Local_168.f_1 = -1125105727;
				}
				func_366(&uLocal_164, 0, 0);
				Local_168.f_3 = Local_116.f_25[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				Local_168.f_2 = Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2;
				func_161(1);
			}
			break;
		
		case 1:
			if ((!func_325() && !(func_327(1) && func_324(func_326()))) || ((!func_328(unk_0xD803B885F5E47A62()) && (func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3)) && !(func_327(1) && func_328(func_326()))))
			{
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > -1)
				{
					Local_168.f_9 = Local_116.f_30[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				}
				Local_169.f_2 = 939907746;
				Local_168.f_4 = 939907746;
				Local_168.f_7 = func_398();
				Local_168.f_17 = func_206(&uLocal_164, 0, 0);
				Local_168.f_18 = func_408();
				Local_168.f_19 = func_208();
				if (Global_262145.f_26036)
				{
					unk_0x1787A8354D584871(&Local_168);
				}
				func_375(1);
				unk_0xA37A90C62806D848(1);
				if (Local_159.f_25 == 1)
				{
					func_223("IT_MEMBOc", -1);
				}
				else if (Local_159.f_25 == 2)
				{
					func_223("IT_MEMBOa", -1);
				}
				else if (Local_159.f_25 == 3)
				{
					func_223("IT_MEMBOb", -1);
				}
				return;
			}
			if ((((Local_159.f_19 < Local_159.f_28 && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 == 0) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 == 0) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 == 0) && !Local_159.f_1)
			{
				Local_168.f_4 = -1275559872;
				Local_169.f_2 = -1275559872;
				Local_168.f_7 = func_398();
				Local_168.f_17 = func_206(&uLocal_164, 0, 0);
				Local_168.f_18 = func_408();
				Local_168.f_19 = func_208();
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > -1)
				{
					Local_168.f_9 = Local_116.f_30[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_262145.f_26036)
				{
					unk_0x1787A8354D584871(&Local_168);
				}
				func_375(1);
				unk_0xA37A90C62806D848(1);
				if (func_417(unk_0xD803B885F5E47A62()))
				{
					if (Local_159.f_19 <= 0)
					{
						func_223("CAS_MG_NOCHIPS7", -1);
					}
					else
					{
						func_223("CAS_MG_LOWCHIPS7", -1);
					}
				}
				else if (Local_159.f_19 <= 0)
				{
					func_223("CAS_MG_NOCHIPS3", -1);
				}
				else
				{
					func_223("CAS_MG_LOWCHIPS3", -1);
				}
				return;
			}
			if (func_333())
			{
				switch (func_329())
				{
					case 0:
						Local_168.f_4 = 1982714739;
						break;
					
					case 1:
						Local_168.f_4 = -633175758;
						break;
					
					case 2:
						Local_168.f_4 = -1625999354;
						break;
				}
				switch (func_329())
				{
					case 0:
						Local_169.f_2 = 1982714739;
						break;
					
					case 1:
						Local_169.f_2 = -633175758;
						break;
					
					case 2:
						Local_169.f_2 = -1625999354;
						break;
				}
				Local_168.f_7 = func_398();
				Local_168.f_17 = func_206(&uLocal_164, 0, 0);
				Local_168.f_18 = func_408();
				Local_168.f_19 = func_208();
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > -1)
				{
					Local_168.f_9 = Local_116.f_30[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_262145.f_26036)
				{
					unk_0x1787A8354D584871(&Local_168);
				}
				func_375(1);
				unk_0xA37A90C62806D848(1);
				if (func_329() == 2)
				{
					func_223("CAS_MG_CTIME", -1);
				}
				else
				{
					func_223("CAS_MG_CBAN", -1);
				}
				return;
			}
			if (((!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 2)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0)) && (!func_354() || func_348()))
			{
				Local_168.f_7 = func_398();
				Local_168.f_17 = func_206(&uLocal_164, 0, 0);
				Local_168.f_18 = func_408();
				Local_168.f_19 = func_208();
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > -1)
				{
					Local_168.f_9 = Local_116.f_30[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_262145.f_26036)
				{
					unk_0x1787A8354D584871(&Local_168);
				}
				func_375(1);
				unk_0xA37A90C62806D848(1);
				return;
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0))
				{
					if ((((((!unk_0xEAE0D21A50E6C7F4(Local_159.f_29, 1) && !unk_0x4FD68D5821EE3E19()) && !unk_0xBFC0798A6E3417F9(2, 204)) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
					{
						bVar5 = unk_0x06F8112AA79C53D9(2, 188);
						bVar6 = unk_0x06F8112AA79C53D9(2, 187);
						if (bVar6 || ((((((bVar5 && !unk_0xBFC0798A6E3417F9(2, 204)) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3)))
						{
							func_73(&(Local_159.f_790), 0, 0);
							unk_0x5D96D8530B3D0904(&(Local_159.f_29), 1);
						}
					}
					else if (func_71(&(Local_159.f_790), 100, 0))
					{
						func_69(&(Local_159.f_790));
						unk_0x0674E58A79778E99(&(Local_159.f_29), 1);
					}
					if ((((((((unk_0xBFC0798A6E3417F9(2, 204) && !bVar6) && !bVar5) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 8))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_159.f_15 >= 10000)
							{
								iVar7 = 5000;
							}
							else if (Local_159.f_15 >= 5000)
							{
								iVar7 = 1000;
							}
							else if (Local_159.f_15 >= 500)
							{
								iVar7 = 500;
							}
							else if (Local_159.f_15 >= 100)
							{
								iVar7 = 50;
							}
							else
							{
								iVar7 = 10;
							}
							if (Local_159.f_15 > (Local_159.f_19 / 2))
							{
								Local_159.f_15 = (Local_159.f_15 - iVar7);
							}
							if (Local_159.f_15 < Local_159.f_17)
							{
								Local_159.f_15 = Local_159.f_17;
							}
							if (Local_159.f_15 > Local_159.f_16)
							{
								Local_159.f_15 = Local_159.f_16;
							}
							Local_159.f_15 = (Local_159.f_15 + iVar7);
							if (Local_159.f_15 > (Local_159.f_19 / 2))
							{
								bVar4 = false;
								Local_159.f_15 = (Local_159.f_15 - iVar7);
							}
							if (Local_159.f_15 < Local_159.f_17)
							{
								Local_159.f_15 = Local_159.f_17;
							}
							if (Local_159.f_15 > Local_159.f_16)
							{
								bVar4 = false;
								Local_159.f_15 = Local_159.f_16;
							}
						}
					}
					else
					{
						if (Local_159.f_15 >= 10000)
						{
							iVar7 = 5000;
						}
						else if (Local_159.f_15 >= 5000)
						{
							iVar7 = 1000;
						}
						else if (Local_159.f_15 >= 500)
						{
							iVar7 = 500;
						}
						else if (Local_159.f_15 >= 100)
						{
							iVar7 = 50;
						}
						else
						{
							iVar7 = 10;
						}
						if (Local_159.f_15 > (Local_159.f_19 / 2))
						{
							Local_159.f_15 = (Local_159.f_15 - iVar7);
						}
						if (Local_159.f_15 < Local_159.f_17)
						{
							Local_159.f_15 = Local_159.f_17;
						}
						if (Local_159.f_15 > Local_159.f_16)
						{
							Local_159.f_15 = Local_159.f_16;
						}
						iVar8 = Local_159.f_15;
						if (bVar5)
						{
							Local_159.f_15 = (Local_159.f_15 + iVar7);
							if (Local_159.f_15 > (Local_159.f_19 / 2))
							{
								Local_159.f_15 = (Local_159.f_15 - iVar7);
							}
							if (Local_159.f_15 < Local_159.f_17)
							{
								Local_159.f_15 = Local_159.f_17;
							}
							if (Local_159.f_15 > Local_159.f_16)
							{
								Local_159.f_15 = Local_159.f_16;
							}
							if (Local_159.f_15 == iVar8)
							{
								if (unk_0xBFC0798A6E3417F9(2, 188) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 10))
								{
									unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 10);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_159.f_22), 10);
								unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar6)
						{
							if (Local_159.f_15 <= 100)
							{
								iVar7 = 10;
							}
							else if (Local_159.f_15 <= 500)
							{
								iVar7 = 50;
							}
							else if (Local_159.f_15 <= 5000)
							{
								iVar7 = 500;
							}
							else if (Local_159.f_15 <= 10000)
							{
								iVar7 = 1000;
							}
							else
							{
								iVar7 = 5000;
							}
							Local_159.f_15 = (Local_159.f_15 - iVar7);
							if (Local_159.f_15 < Local_159.f_17)
							{
								Local_159.f_15 = Local_159.f_17;
							}
							if (Local_159.f_15 == iVar8)
							{
								if (unk_0xBFC0798A6E3417F9(2, 187) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 10))
								{
									unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 10);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_159.f_22), 10);
								unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_159.f_15 == Local_159.f_16 || (Local_159.f_15 + iVar7) > Local_159.f_16) || (Local_159.f_15 + iVar7) > (Local_159.f_19 / 2))
					{
						unk_0x5D96D8530B3D0904(&(Local_159.f_22), 8);
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_159.f_22), 8);
					}
					unk_0x5D96D8530B3D0904(&(Local_159.f_29), 0);
					iVar0 = (30 - (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
					{
						if ((((!unk_0x4FD68D5821EE3E19() && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
						{
							if (((unk_0xBFC0798A6E3417F9(2, 201) && !unk_0x06F8112AA79C53D9(2, 203)) && Local_159.f_15 >= Local_159.f_17) && Local_159.f_19 >= Local_159.f_17 * 2)
							{
								unk_0x5D96D8530B3D0904(&(Local_159.f_22), 0);
								Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
								if (func_160(Local_159.f_15))
								{
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "bet_ante", 2f, -2f, 13, 16, 1148846080, 0);
								}
								unk_0x914E6894744915F8(Local_159.f_24);
							}
							else if ((unk_0xBFC0798A6E3417F9(2, 203) && !unk_0x06F8112AA79C53D9(2, 201)) || Local_159.f_19 < Local_159.f_28)
							{
								Local_159.f_19 = func_398();
								if ((((Local_159.f_23 > Local_159.f_19 || Local_159.f_23 > Local_159.f_27) || Local_159.f_23 < Local_159.f_28) || Local_159.f_23 > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3)) || Local_159.f_23 > Local_159.f_19)
								{
									Local_159.f_23 = Local_159.f_28;
								}
								unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0);
							}
						}
						if (func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_159.f_19 < Local_159.f_17 * 2)
						{
							if (((!func_335("TCP_LOW") && !bLocal_177) && !bLocal_178) && !bLocal_173)
							{
								func_158("TCP_LOW");
							}
						}
						else if (((!func_335("TCP_PLACE_ANTE") && !bLocal_177) && !bLocal_178) && !bLocal_173)
						{
							func_158("TCP_PLACE_ANTE");
						}
					}
				}
				else
				{
					if (((!func_335("TCP_PLACE_ANTE") && !bLocal_177) && !bLocal_178) && !bLocal_173)
					{
						func_158("TCP_PLACE_ANTE");
					}
					if (func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_159.f_30 != -1 && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0))
					{
						if ((unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0)
						{
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0);
							unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 1503712844) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0)
						{
							Local_159.f_1 = 1;
						}
						if (Local_159.f_1)
						{
							if (func_155(Local_159.f_15, &(Local_159.f_14), 2, Local_159))
							{
								if (Local_159.f_14 == 3)
								{
									Local_159.f_1 = 0;
									unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
									Local_159.f_14 = 0;
								}
								else
								{
									Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 = Local_159.f_15;
									if (Local_159.f_15 >= 10000)
									{
										iVar9 = 5000;
									}
									else if (Local_159.f_15 >= 5000)
									{
										iVar9 = 1000;
									}
									else if (Local_159.f_15 >= 500)
									{
										iVar9 = 500;
									}
									else if (Local_159.f_15 >= 100)
									{
										iVar9 = 50;
									}
									else
									{
										iVar9 = 10;
									}
									if ((Local_159.f_15 == Local_159.f_16 || (Local_159.f_15 + iVar9) > Local_159.f_16) || (Local_159.f_15 + iVar9) > (Local_159.f_19 / 2))
									{
										Local_168.f_5 = 1;
									}
									Local_168.f_6 = (Local_168.f_6 - Local_159.f_15);
									Local_169.f_3 = (Local_169.f_3 - Local_159.f_15);
									Local_169.f_7 = (Local_169.f_7 + Local_159.f_15);
									Local_168.f_12 = (Local_168.f_12 + Local_159.f_15);
									Local_159.f_19 = func_398();
									if ((((Local_159.f_23 > Local_159.f_19 || Local_159.f_23 > Local_159.f_27) || Local_159.f_23 < Local_159.f_28) || Local_159.f_23 > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3)) || Local_159.f_23 > Local_159.f_19)
									{
										Local_159.f_23 = Local_159.f_28;
									}
									Local_159.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_159.f_15, "TCP_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0))
				{
					if ((((((!unk_0xEAE0D21A50E6C7F4(Local_159.f_29, 1) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3)) && !unk_0xBFC0798A6E3417F9(2, 204))
					{
						bVar10 = unk_0x06F8112AA79C53D9(2, 188);
						bVar11 = unk_0x06F8112AA79C53D9(2, 187);
						if (bVar11 || ((((((bVar10 && !unk_0xBFC0798A6E3417F9(2, 204)) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3)))
						{
							func_73(&(Local_159.f_790), 0, 0);
							unk_0x5D96D8530B3D0904(&(Local_159.f_29), 1);
						}
					}
					else if (func_71(&(Local_159.f_790), 100, 0))
					{
						func_69(&(Local_159.f_790));
						unk_0x0674E58A79778E99(&(Local_159.f_29), 1);
					}
					if ((((((((unk_0xBFC0798A6E3417F9(2, 204) && !bVar11) && !bVar10) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 8))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar4 = true;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_159.f_23 >= 10000)
							{
								iVar12 = 5000;
							}
							else if (Local_159.f_23 >= 5000)
							{
								iVar12 = 1000;
							}
							else if (Local_159.f_23 >= 500)
							{
								iVar12 = 500;
							}
							else if (Local_159.f_23 >= 100)
							{
								iVar12 = 50;
							}
							else
							{
								iVar12 = 10;
							}
							if (Local_159.f_23 > Local_159.f_19)
							{
								Local_159.f_23 = (Local_159.f_23 - iVar12);
							}
							if (Local_159.f_23 > Local_159.f_27)
							{
								Local_159.f_23 = Local_159.f_27;
							}
							if (Local_159.f_23 < Local_159.f_28)
							{
								Local_159.f_23 = Local_159.f_28;
							}
							if (Local_159.f_23 > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
							{
								Local_159.f_23 = (Local_159.f_23 - iVar12);
							}
							Local_159.f_23 = (Local_159.f_23 + iVar12);
							if (Local_159.f_23 > Local_159.f_19)
							{
								bVar4 = false;
								Local_159.f_23 = (Local_159.f_23 - iVar12);
							}
							if (Local_159.f_23 > Local_159.f_27)
							{
								bVar4 = false;
								Local_159.f_23 = Local_159.f_27;
							}
							if (Local_159.f_23 < Local_159.f_28)
							{
								Local_159.f_23 = Local_159.f_28;
							}
							if (Local_159.f_23 > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
							{
								bVar4 = false;
								Local_159.f_23 = (Local_159.f_23 - iVar12);
							}
						}
					}
					else
					{
						if (Local_159.f_23 >= 10000)
						{
							iVar12 = 5000;
						}
						else if (Local_159.f_23 >= 5000)
						{
							iVar12 = 1000;
						}
						else if (Local_159.f_23 >= 500)
						{
							iVar12 = 500;
						}
						else if (Local_159.f_23 >= 100)
						{
							iVar12 = 50;
						}
						else
						{
							iVar12 = 10;
						}
						if (Local_159.f_23 > Local_159.f_19)
						{
							Local_159.f_23 = (Local_159.f_23 - iVar12);
						}
						if (Local_159.f_23 > Local_159.f_27)
						{
							Local_159.f_23 = Local_159.f_27;
						}
						if (Local_159.f_23 < Local_159.f_28)
						{
							Local_159.f_23 = Local_159.f_28;
						}
						if (Local_159.f_23 > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
						{
							Local_159.f_23 = (Local_159.f_23 - iVar12);
						}
						iVar13 = Local_159.f_23;
						if (bVar10)
						{
							Local_159.f_23 = (Local_159.f_23 + iVar12);
							if (Local_159.f_23 > Local_159.f_19)
							{
								Local_159.f_23 = (Local_159.f_23 - iVar12);
							}
							if (Local_159.f_23 > Local_159.f_27)
							{
								Local_159.f_23 = Local_159.f_27;
							}
							if (Local_159.f_23 < Local_159.f_28)
							{
								Local_159.f_23 = Local_159.f_28;
							}
							if (Local_159.f_23 > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
							{
								Local_159.f_23 = (Local_159.f_23 - iVar12);
							}
							if (Local_159.f_23 == iVar13)
							{
								if (unk_0xBFC0798A6E3417F9(2, 188) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 10))
								{
									unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 10);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_159.f_22), 10);
								unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar11)
						{
							if (Local_159.f_23 <= 100)
							{
								iVar12 = 10;
							}
							else if (Local_159.f_23 <= 500)
							{
								iVar12 = 50;
							}
							else if (Local_159.f_23 <= 5000)
							{
								iVar12 = 500;
							}
							else if (Local_159.f_23 <= 10000)
							{
								iVar12 = 1000;
							}
							else
							{
								iVar12 = 5000;
							}
							Local_159.f_23 = (Local_159.f_23 - iVar12);
							if (Local_159.f_23 < Local_159.f_28)
							{
								Local_159.f_23 = Local_159.f_28;
							}
							if (Local_159.f_23 == iVar13)
							{
								if (unk_0xBFC0798A6E3417F9(2, 187) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 10))
								{
									unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 10);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_159.f_22), 10);
								unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_159.f_23 == Local_159.f_27 || (Local_159.f_23 + iVar12) > Local_159.f_27) || (Local_159.f_23 + iVar12) > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
					{
						unk_0x5D96D8530B3D0904(&(Local_159.f_22), 8);
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_159.f_22), 8);
					}
					unk_0x5D96D8530B3D0904(&(Local_159.f_29), 0);
					iVar0 = (30 - (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
					{
						if ((((!unk_0x4FD68D5821EE3E19() && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
						{
							if (((((unk_0xBFC0798A6E3417F9(2, 201) && !unk_0x06F8112AA79C53D9(2, 203)) && !unk_0x06F8112AA79C53D9(2, 204)) && Local_159.f_23 >= Local_159.f_28) && Local_159.f_23 <= Local_159.f_19) && Local_159.f_19 >= (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 + Local_159.f_28))
							{
								unk_0x5D96D8530B3D0904(&(Local_159.f_22), 0);
								Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
								if (func_160(Local_159.f_23))
								{
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "bet_plus", 2f, -2f, 13, 16, 1148846080, 0);
								}
								unk_0x914E6894744915F8(Local_159.f_24);
							}
							else if (((unk_0xBFC0798A6E3417F9(2, 203) && !unk_0x06F8112AA79C53D9(2, 201)) && !unk_0x06F8112AA79C53D9(2, 204)) || Local_159.f_19 < (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 + Local_159.f_28))
							{
								if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0)
								{
									unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 2);
								}
								else
								{
									Local_168.f_4 = 847129329;
									Local_169.f_2 = 847129329;
									Local_168.f_7 = func_398();
									Local_168.f_17 = func_206(&uLocal_164, 0, 0);
									Local_168.f_18 = func_408();
									Local_168.f_19 = func_208();
									if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > -1)
									{
										Local_168.f_9 = Local_116.f_30[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
									}
									if (Global_262145.f_26036)
									{
										unk_0x1787A8354D584871(&Local_168);
									}
									func_375(1);
									unk_0xA37A90C62806D848(1);
									return;
								}
							}
						}
						if (func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!func_335("TCP_PLACE_PAIR") && !bLocal_177) && !bLocal_178) && !bLocal_173)
						{
							func_158("TCP_PLACE_PAIR");
						}
					}
				}
				else
				{
					if (((!func_335("TCP_PLACE_PAIR") && !bLocal_177) && !bLocal_178) && !bLocal_173)
					{
						func_158("TCP_PLACE_PAIR");
					}
					if (func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_159.f_30 != -1 && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 2))
					{
						if ((unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 > 0)
						{
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 2);
							unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 1503712844) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 <= 0)
						{
							Local_159.f_1 = 1;
						}
						if (Local_159.f_1)
						{
							if (func_155(Local_159.f_23, &(Local_159.f_14), 2, Local_159))
							{
								if (Local_159.f_14 == 3)
								{
									Local_159.f_1 = 0;
									unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
									Local_159.f_14 = 0;
								}
								else
								{
									Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 = Local_159.f_23;
									if (Local_159.f_23 >= 10000)
									{
										iVar14 = 5000;
									}
									else if (Local_159.f_23 >= 5000)
									{
										iVar14 = 1000;
									}
									else if (Local_159.f_23 >= 500)
									{
										iVar14 = 500;
									}
									else if (Local_159.f_23 >= 100)
									{
										iVar14 = 50;
									}
									else
									{
										iVar14 = 10;
									}
									if ((Local_159.f_23 == Local_159.f_27 || (Local_159.f_23 + iVar14) > Local_159.f_27) || (Local_159.f_23 + iVar14) > (Local_159.f_19 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
									{
										Local_168.f_5 = 1;
									}
									Local_168.f_6 = (Local_168.f_6 - Local_159.f_23);
									Local_169.f_3 = (Local_169.f_3 - Local_159.f_23);
									Local_169.f_8 = (Local_169.f_8 + Local_159.f_23);
									Local_168.f_13 = (Local_168.f_13 + Local_159.f_23);
									Local_159.f_19 = func_398();
									Local_159.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_159.f_23, "TCP_BET3", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				bVar15 = true;
				iVar16 = 0;
				while (iVar16 < 4)
				{
					iVar17 = Local_116.f_117[(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar16)];
					if (iVar17 != -1)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_158[iVar17 /*9*/], 2))
						{
							bVar15 = false;
						}
					}
					iVar16++;
				}
				if ((((!func_335("TCP_WAIT") && !bVar15) && !bLocal_177) && !bLocal_178) && !bLocal_173)
				{
					func_158("TCP_WAIT");
				}
				if (func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
				{
					if (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
					{
						func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_116.f_576[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] > 3 && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0)) && !Local_159.f_1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_159.f_29, 0))
				{
					unk_0xA37A90C62806D848(1);
					Local_169.f_12++;
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0 && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 <= 0)
					{
						unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 5);
					}
					func_161(2);
				}
				else
				{
					bVar18 = true;
					iVar19 = 0;
					while (iVar19 < 4)
					{
						iVar20 = Local_116.f_117[(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar19)];
						if (iVar20 != -1)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_158[iVar20 /*9*/], 2))
							{
								bVar18 = false;
							}
						}
						iVar19++;
					}
					if ((((!func_335("TCP_WAIT") && !bVar18) && !bLocal_177) && !bLocal_178) && !bLocal_173)
					{
						func_158("TCP_WAIT");
					}
					if (func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0)
			{
				if (Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] == 3)
				{
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0)
					{
						unk_0x5D96D8530B3D0904(&(Local_159.f_22), 6);
					}
					unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
					func_161(3);
				}
			}
			break;
		
		case 3:
			if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0 && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 <= 0)
			{
				unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 3);
				if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
				{
					unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 4);
				}
				func_161(4);
				return;
			}
			if ((unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))])) && unk_0xE5DBF9B6126856CA(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
			{
				if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (!unk_0x526BC32A660C89E6(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar21 = true;
				}
				if (bVar21)
				{
					return;
				}
				if ((((((!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 2)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 1)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 1)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 3)) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0)
				{
					if ((!unk_0x4FD68D5821EE3E19() && !func_337()) && !unk_0xE57E602827E07C9D())
					{
						if ((unk_0xBFC0798A6E3417F9(2, 207) && !unk_0x06F8112AA79C53D9(2, 203)) && !unk_0x06F8112AA79C53D9(2, 201))
						{
							Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							unk_0x914E6894744915F8(Local_159.f_24);
							unk_0x5D96D8530B3D0904(&(Local_159.f_22), 7);
							unk_0x5D96D8530B3D0904(&(Local_159.f_22), 0);
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 0))
				{
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0)
					{
						iVar0 = (30 - (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
							{
								if (func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
								{
									func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									func_159((30000 - func_206(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!func_335("TCP_PLACE_PLAY") && !bLocal_177) && !bLocal_178) && !bLocal_173)
							{
								func_158("TCP_PLACE_PLAY");
							}
							if ((((!unk_0x4FD68D5821EE3E19() && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
							{
								if ((unk_0xBFC0798A6E3417F9(2, 201) && !unk_0x06F8112AA79C53D9(2, 203)) && (!unk_0x06F8112AA79C53D9(2, 207) || unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4)))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
									{
										Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_play", 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										unk_0x914E6894744915F8(Local_159.f_24);
									}
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 0);
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 2);
								}
								else if ((unk_0xBFC0798A6E3417F9(2, 203) && !unk_0x06F8112AA79C53D9(2, 201)) && (!unk_0x06F8112AA79C53D9(2, 207) || unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4)))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
									{
										Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										unk_0x914E6894744915F8(Local_159.f_24);
									}
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 0);
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 1);
								}
							}
						}
						else if (func_72(&(Local_116.f_150[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
							{
								Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								unk_0x914E6894744915F8(Local_159.f_24);
							}
							unk_0x5D96D8530B3D0904(&(Local_159.f_22), 0);
							unk_0x5D96D8530B3D0904(&(Local_159.f_22), 1);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 3);
						if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
						{
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 4);
						}
						func_161(4);
						return;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 2))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 3))
					{
						if ((Local_159.f_30 != -1 && (unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317))) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
						{
							Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
							if (func_160(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
							{
								unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1148846080, 0);
							}
							else
							{
								unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_bet", 2f, -2f, 13, 16, 1148846080, 0);
							}
							unk_0x914E6894744915F8(Local_159.f_24);
							unk_0x5D96D8530B3D0904(&(Local_159.f_22), 3);
						}
					}
					else if (Local_159.f_30 != -1)
					{
						if ((unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 > 0)
						{
							Local_159.f_796 = "idle_cardgames";
							Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_231(), Local_159.f_796, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_159.f_24);
							unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
							unk_0x0674E58A79778E99(&(Local_159.f_22), 1);
							unk_0x0674E58A79778E99(&(Local_159.f_22), 2);
							unk_0x0674E58A79778E99(&(Local_159.f_22), 3);
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 1);
							if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
							{
								unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 4);
							}
							func_161(4);
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 1503712844) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 <= 0)
						{
							Local_159.f_1 = 1;
						}
						if (Local_159.f_1)
						{
							if (func_155(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3, &(Local_159.f_14), 2, Local_159))
							{
								if (Local_159.f_14 == 3)
								{
									Local_159.f_1 = 0;
									unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
									unk_0x0674E58A79778E99(&(Local_159.f_22), 1);
									unk_0x0674E58A79778E99(&(Local_159.f_22), 2);
									unk_0x0674E58A79778E99(&(Local_159.f_22), 3);
									if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
									{
										Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, false, true, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1148846080, 0);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										unk_0x914E6894744915F8(Local_159.f_24);
									}
									Local_159.f_14 = 0;
								}
								else
								{
									Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 = Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3;
									Local_168.f_6 = (Local_168.f_6 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
									Local_169.f_3 = (Local_169.f_3 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
									Local_159.f_19 = func_398();
									Local_159.f_1 = 0;
								}
							}
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 1))
				{
					if ((Local_159.f_30 != -1 && (unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317))) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
					{
						Local_159.f_796 = "idle_cardgames";
						Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_231(), Local_159.f_796, 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_159.f_24);
						unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
						unk_0x0674E58A79778E99(&(Local_159.f_22), 1);
						unk_0x0674E58A79778E99(&(Local_159.f_22), 2);
						unk_0x0674E58A79778E99(&(Local_159.f_22), 3);
						unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 3);
						if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4))
						{
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 4);
						}
						func_161(4);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 7) && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_92(), "cards_pickup", 3))
				{
					if (Local_159.f_30 != -1 && (unk_0xA45992A6CE82FB43(Local_159.f_30) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)))
					{
						Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, false, true, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_idle", 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						unk_0x914E6894744915F8(Local_159.f_24);
						unk_0x0674E58A79778E99(&(Local_159.f_22), 0);
						unk_0x0674E58A79778E99(&(Local_159.f_22), 7);
						unk_0x5D96D8530B3D0904(&(Local_159.f_22), 4);
					}
				}
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0)
				{
					func_151(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3, "TCP_BET4", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 4:
			if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0)
			{
				bVar22 = true;
				iVar23 = 0;
				while (iVar23 < 4)
				{
					iVar24 = Local_116.f_117[(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar23)];
					if (iVar24 != -1)
					{
						if ((!unk_0xEAE0D21A50E6C7F4(Local_158[iVar24 /*9*/], 1) && !unk_0xEAE0D21A50E6C7F4(Local_158[iVar24 /*9*/], 3)) && (Local_158[iVar24 /*9*/].f_3 > 0 || Local_158[iVar24 /*9*/].f_5 > 0))
						{
							bVar22 = false;
						}
					}
					iVar23++;
				}
				if (Local_116.f_576[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] == 9 && !bVar22)
				{
					if (((!func_335("TCP_WAIT") && !bLocal_177) && !bLocal_178) && !bLocal_173)
					{
						func_158("TCP_WAIT");
					}
				}
				else if (func_335("TCP_WAIT") || func_335("TCP_PLACE_PLAY"))
				{
					unk_0xA37A90C62806D848(1);
				}
				if (Local_116.f_576[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] == 1)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 5))
					{
						bVar25 = true;
					}
					if (Local_159.f_31 != -1)
					{
						func_311(&(Local_159.f_31));
						Local_159.f_31 = -1;
					}
					Local_159.f_2 = 0;
					Local_159.f_3 = 0;
					Local_159.f_4 = 0;
					Local_159.f_6 = 0;
					Local_159.f_22 = 0;
					Local_158[unk_0xD803B885F5E47A62() /*9*/] = 0;
					Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6 = 0;
					Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 = 0;
					Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 = 0;
					Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 = 0;
					func_161(0);
					Local_168.f_7 = func_398();
					Local_168.f_17 = func_206(&uLocal_164, 0, 0);
					Local_168.f_18 = func_408();
					Local_168.f_19 = func_208();
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > -1)
					{
						Local_168.f_9 = Local_116.f_30[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
					}
					if (!func_354() || func_348())
					{
						if (Global_262145.f_26036 && !bVar25)
						{
							unk_0x1787A8354D584871(&Local_168);
						}
						func_375(1);
						unk_0xA37A90C62806D848(1);
						return;
					}
					if (func_333())
					{
						switch (func_329())
						{
							case 0:
								Local_168.f_4 = 1982714739;
								break;
							
							case 1:
								Local_168.f_4 = -633175758;
								break;
							
							case 2:
								Local_168.f_4 = -1625999354;
								break;
						}
						switch (func_329())
						{
							case 0:
								Local_169.f_2 = 1982714739;
								break;
							
							case 1:
								Local_169.f_2 = -633175758;
								break;
							
							case 2:
								Local_169.f_2 = -1625999354;
								break;
						}
						if (Global_262145.f_26036 && !bVar25)
						{
							unk_0x1787A8354D584871(&Local_168);
						}
						func_375(1);
						unk_0xA37A90C62806D848(1);
						if (func_329() == 2)
						{
							func_223("CAS_MG_CTIME", -1);
						}
						else
						{
							func_223("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26036 && !bVar25)
					{
						unk_0x1787A8354D584871(&Local_168);
					}
					return;
				}
				if ((Local_116.f_5[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] && Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] > 0) && unk_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1)))
				{
					iVar27 = func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0);
					iVar28 = func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0);
					if (func_25(iVar27))
					{
						bVar26 = true;
					}
					if (iVar28 > 500)
					{
						Local_168.f_22 = 745220304;
					}
					else if (iVar28 > 400)
					{
						Local_168.f_22 = 588481795;
					}
					else if (iVar28 > 300)
					{
						Local_168.f_22 = 313822186;
					}
					else if (iVar28 > 200)
					{
						Local_168.f_22 = -310009958;
					}
					else if (iVar28 > 100)
					{
						Local_168.f_22 = 378531009;
					}
					else
					{
						Local_168.f_22 = 201584577;
					}
					if (((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 5))
						{
							Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
							sVar29 = func_150(Local_168.f_6);
							if ((Local_159.f_26 == 1 || func_380(Local_159.f_18) == 2) || func_380(Local_159.f_18) == 3)
							{
								if (((Local_159.f_15 >= 35000 && iVar28 > iVar27) && iVar28 > 300) || (Local_159.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = func_149();
								}
								else if (((Local_159.f_15 >= 35000 && iVar28 > 300) && iVar28 < iVar27) && !(Local_159.f_23 >= 3500 && iVar28 > 300))
								{
									sVar29 = func_147();
								}
							}
							else if (((Local_159.f_15 >= 4500 && iVar28 > iVar27) && iVar28 > 300) || (Local_159.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = func_149();
							}
							else if (((Local_159.f_15 >= 4500 && iVar28 > 300) && iVar28 < iVar27) && !(Local_159.f_23 >= 450 && iVar28 > 300))
							{
								sVar29 = func_147();
							}
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_231(), sVar29, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_159.f_24);
							unk_0x5D96D8530B3D0904(&(Local_159.f_22), 5);
						}
						if (Local_168.f_14 > 0)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 9))
							{
								if (func_102(Local_168.f_14, &(Local_159.f_14), 2))
								{
									unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
									unk_0x5D96D8530B3D0904(&(Local_159.f_22), 9);
									if (func_418(unk_0xD803B885F5E47A62()) && iVar28 > 500)
									{
										unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_840), 11);
									}
								}
							}
						}
					}
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 3))
						{
							if (!bVar26)
							{
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (!func_100("TCP_WIN_NP", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14))
									{
										func_99("TCP_WIN_NP", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14);
									}
								}
								if (!Local_159.f_2)
								{
									Local_159.f_2 = 1;
									Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
								}
								if (!Local_159.f_3)
								{
									Local_159.f_3 = 1;
									Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
									Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
									Local_169.f_13++;
									Local_168.f_15 = 1;
									Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
									Local_168.f_4 = -562306862;
								}
							}
							else if (iVar28 > iVar27)
							{
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar30 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar30 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar30 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar30 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar30 = true;
									}
									if (bVar30)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14);
										}
									}
									else if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14);
									}
								}
								if (!Local_159.f_2)
								{
									Local_159.f_2 = 1;
									Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
								}
								if (!Local_159.f_3)
								{
									Local_159.f_3 = 1;
									Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_169.f_13++;
									Local_168.f_15 = 1;
									Local_168.f_4 = -562306862;
								}
							}
							else if (iVar28 == iVar27)
							{
								iVar27 = func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 1, 0);
								iVar28 = func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 1, 0);
								if (iVar28 == iVar27)
								{
									iVar27 = func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 1);
									iVar28 = func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 1);
									if (iVar28 > iVar27)
									{
										if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
										{
											if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14))
											{
												func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14);
											}
										}
										if (!Local_159.f_2)
										{
											Local_159.f_2 = 1;
											Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
											Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
											Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										}
										if (!Local_159.f_3)
										{
											Local_159.f_3 = 1;
											Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_169.f_13++;
											Local_168.f_15 = 1;
											Local_168.f_4 = -562306862;
										}
									}
									else if (iVar28 == iVar27)
									{
										if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
										{
											if (!func_335("TCP_LOSE_PUSH"))
											{
												func_158("TCP_LOSE_PUSH");
											}
										}
										if (!Local_159.f_2)
										{
											Local_159.f_2 = 1;
											Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
											Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
											Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
											func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
										}
										if (!Local_159.f_3)
										{
											Local_159.f_3 = 1;
											Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
											Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
											Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
											Local_169.f_13++;
											Local_168.f_15 = 1;
											Local_168.f_4 = -562306862;
										}
										Local_159.f_2 = 1;
									}
									else
									{
										if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
										{
											if (Local_168.f_14 > 0)
											{
												if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14))
												{
													func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
											{
												func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
											}
										}
										Local_168.f_4 = -1851302466;
										if (!Local_159.f_3)
										{
											func_205((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3));
											Local_159.f_3 = 1;
											Local_169.f_14++;
										}
										Local_159.f_2 = 1;
									}
								}
								else if (iVar28 > iVar27)
								{
									if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14);
										}
									}
									if (!Local_159.f_2)
									{
										Local_159.f_2 = 1;
										Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									}
									if (!Local_159.f_3)
									{
										Local_159.f_3 = 1;
										Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_169.f_13++;
										Local_168.f_15 = 1;
										Local_168.f_14 = (Local_168.f_14 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_168.f_4 = -562306862;
									}
								}
								else
								{
									if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
									{
										if (Local_168.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									Local_168.f_4 = -1851302466;
									if (!Local_159.f_3)
									{
										func_205((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3));
										Local_159.f_3 = 1;
										Local_169.f_14++;
									}
									Local_159.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (iVar28 > 500 && iVar27 > 500)
									{
										bVar31 = true;
									}
									if ((iVar28 > 400 && iVar27 > 400) && (iVar28 < 500 && iVar27 < 500))
									{
										bVar31 = true;
									}
									if ((iVar28 > 300 && iVar27 > 300) && (iVar28 < 400 && iVar27 < 400))
									{
										bVar31 = true;
									}
									if ((iVar28 > 200 && iVar27 > 200) && (iVar28 < 300 && iVar27 < 300))
									{
										bVar31 = true;
									}
									if ((iVar28 > 100 && iVar27 > 100) && (iVar28 < 200 && iVar27 < 200))
									{
										bVar31 = true;
									}
									if (bVar31)
									{
										if (Local_168.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 1), Local_168.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									else if (Local_168.f_14 > 0)
									{
										if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14))
										{
											func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PLAY", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
									}
								}
								Local_168.f_4 = -1851302466;
								if (!Local_159.f_3)
								{
									func_205((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3));
									Local_159.f_3 = 1;
									Local_169.f_14++;
								}
								Local_159.f_2 = 1;
							}
							iVar28 = func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0);
							if (!Local_159.f_4)
							{
								if (func_96(iVar28) > 0)
								{
									Local_169.f_3 = (Local_169.f_3 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar28)));
									Local_168.f_6 = (Local_168.f_6 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar28)));
									Local_169.f_13++;
									Local_168.f_15 = 1;
									Local_168.f_14 = (Local_168.f_14 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar28)));
								}
								Local_159.f_4 = 1;
							}
						}
						else
						{
							if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 >= 0)
							{
								Local_168.f_4 = 686661968;
							}
							if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
							{
								if (Local_168.f_14 > 0)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
								{
									func_97("TCP_LOSE_FOLD", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
								}
							}
							if (!Local_159.f_3)
							{
								func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
								Local_159.f_3 = 1;
								Local_169.f_14++;
							}
							Local_159.f_4 = 1;
							Local_159.f_2 = 1;
						}
					}
					else
					{
						Local_159.f_2 = 1;
						Local_159.f_3 = 1;
						Local_159.f_4 = 1;
					}
					iVar28 = func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0);
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 > 0)
					{
						Local_168.f_21 = 1;
						if (func_23(iVar28) > 0)
						{
							if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0)
							{
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0), Local_168.f_14);
									}
								}
							}
							if (!Local_159.f_6)
							{
								Local_159.f_6 = 1;
								Local_169.f_3 = (Local_169.f_3 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar28))));
								Local_168.f_6 = (Local_168.f_6 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar28))));
								Local_169.f_13++;
								Local_168.f_15 = 1;
								Local_168.f_14 = (Local_168.f_14 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar28))));
								Local_168.f_4 = -562306862;
							}
						}
						else
						{
							if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0)
							{
								Local_168.f_4 = -1851302466;
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (!func_98("TCP_LOSE_PP", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PP", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_159.f_6)
							{
								func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5);
								Local_159.f_6 = 1;
								if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0)
								{
									Local_169.f_14++;
								}
							}
						}
					}
					else
					{
						Local_159.f_6 = 1;
					}
				}
				else
				{
					if (!Local_116.f_5[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2])
					{
					}
					if (Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] <= 0)
					{
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1)))
					{
					}
					if (((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6)
					{
						if (Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] <= 0)
						{
							Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 = 0;
							Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 = 0;
							Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 = 0;
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)
{
	if (iParam0 > 500)
	{
		return 5;
	}
	else if (iParam0 > 400)
	{
		return 4;
	}
	else if (iParam0 > 300)
	{
		return 1;
	}
	return 0;
}

void func_97(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_98(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_99(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_100(char* sParam0, int iParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8(0);
}

char* func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F";
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F";
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F";
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F";
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F";
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F";
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F";
		}
		else
		{
			return "TCP_HIGH_A_F";
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF";
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND";
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT";
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH";
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A";
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2";
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3";
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4";
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5";
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6";
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7";
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8";
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9";
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10";
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J";
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q";
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K";
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5";
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6";
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7";
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8";
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9";
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10";
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J";
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q";
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K";
	}
	else
	{
		return "TCP_HIGH_A";
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)
{
	return func_103(iParam0, 3, uParam1, iParam2, -1);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_398();
		iVar1 = (Global_262145.f_26395 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_144();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_124(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_398() - Global_1696044);
			func_123(iVar4, 1);
			func_121();
			func_120();
			Global_1696044 = (Global_1696044 + iVar4);
			if (iParam1 == 0)
			{
				func_114(iVar4);
				Global_2460613 = 1;
			}
			else if (iParam1 == 3)
			{
				func_107(iVar4);
				if (iVar4 >= Global_262145.f_26403)
				{
					Global_2460612 = 1;
				}
				else if (iVar4 >= Global_262145.f_26402)
				{
					Global_2460613 = 1;
				}
			}
			Var5 = func_106(iParam1);
			Var5.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x62F8C2EDB26F57B3(-1) + unk_0x3A6D64D2A1228113());
			Var5.f_6 = Global_1696044;
			unk_0xB1C8602C4408B407(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26399)
	{
		func_108(-1274895349, Global_262145.f_26399);
		func_109();
		Global_2460613 = 1;
	}
	else
	{
		func_108(-1274895349, (iVar2 + iParam0));
	}
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

void func_109()
{
	func_110();
}

void func_110()
{
	func_108(2026157635, unk_0xDD0E7998AE8AD485());
}

int func_111()
{
	return func_112(-1274895349);
}

int func_112(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113()
{
	return func_112(2026157635);
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_119();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_118();
	if (iVar0 == 0)
	{
		func_117();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26396)
	{
		func_116();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(-1127742296, func_115());
		func_116();
	}
	else
	{
		func_108(-1127742296, (iVar2 + iParam0));
	}
}

int func_115()
{
	if (func_328(unk_0xD803B885F5E47A62()))
	{
		return Global_262145.f_26191;
	}
	return Global_262145.f_26190;
}

void func_116()
{
	func_117();
}

void func_117()
{
	func_108(67083818, unk_0xDD0E7998AE8AD485());
}

int func_118()
{
	return func_112(-1127742296);
}

int func_119()
{
	return func_112(67083818);
}

void func_120()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1696079, 6))
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 9);
		func_366(&Global_1696082, 0, 0);
	}
}

void func_121()
{
	if (func_122())
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 1);
	}
}

bool func_122()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_1696079, 6) || unk_0xEAE0D21A50E6C7F4(Global_1696079, 5));
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&Global_1696079, 6);
	Global_1696080 = iParam0;
	Global_1696081 = iParam1;
}

bool func_124(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_104(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_143())
	{
		if (*uParam0 == 0)
		{
			if (func_142() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_106(iParam1);
			iVar5 = -22148635;
			if (func_146(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_138(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_138(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_132())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_131(func_142()))
			{
				if (func_130(func_142()) == 2)
				{
					unk_0x7A87D9FAFCB10ADC(func_129(func_142()));
					if (func_146(iParam1))
					{
						unk_0xBAAADC9CD356B660(iVar0, iParam2);
					}
					else
					{
						unk_0xDB46ED1F703FD834(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_125(func_142());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 0))
	{
		if (func_146(iParam1))
		{
			unk_0xBAAADC9CD356B660(iVar0, iParam2);
		}
		else
		{
			unk_0xDB46ED1F703FD834(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_125(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
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
		func_126(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_126(var uParam0)
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
	func_127(&(uParam0->f_14));
	func_127(&(uParam0->f_14.f_13));
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

void func_127(var uParam0)
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

int func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_130(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_132()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_142();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_137()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_136(Global_4263954[iVar2 /*85*/].f_66.f_6, Global_4263954[iVar2 /*85*/].f_66.f_4, Global_4263954[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_129(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_4263954[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4263954[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar2 /*85*/].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_4263954[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4263954[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4263954[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_133(Global_4263954[iVar2 /*85*/], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_133(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_135(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_134();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_134()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_135(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_137()
{
	return Global_1312745;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_137()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_142();
	if (iVar1 == -1)
	{
		if (!func_140(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_139(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4263954[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x54B75246B42BE23E(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_137()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x9D14F555AB486471())
		{
			unk_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || unk_0xA28E08E034174728(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_141(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_143())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = uParam0;
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
			if (iParam1 == -1135378931 && bParam10)
			{
				func_133(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_129(iVar0) != 2147483647)
		{
			if (func_128(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_143()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_115() - func_118());
	iVar1 = (Global_262145.f_26395 - func_398());
	iVar2 = func_145();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_145()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0xECB8E23DD6EEDD19())
	{
		if (unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x3A6D64D2A1228113() + unk_0x62F8C2EDB26F57B3(-1));
		}
	}
	else if (unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x98DF7171A5F240EC();
	}
	return iVar1;
}

int func_146(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_147()
{
	if (func_148())
	{
		switch (unk_0x09AC81E49EA267F7(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_148()
{
	return func_57(unk_0xD803B885F5E47A62());
}

char* func_149()
{
	if (func_148())
	{
		switch (unk_0x09AC81E49EA267F7(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_150(int iParam0)
{
	if (func_148())
	{
		if ((func_417(unk_0xD803B885F5E47A62()) || func_380(Local_159.f_18) == 2) || func_380(Local_159.f_18) == 3)
		{
			if (iParam0 > 10000)
			{
				switch (unk_0x09AC81E49EA267F7(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000)
			{
				switch (unk_0x09AC81E49EA267F7(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (unk_0x09AC81E49EA267F7(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000)
		{
			switch (unk_0x09AC81E49EA267F7(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000)
		{
			switch (unk_0x09AC81E49EA267F7(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_417(unk_0xD803B885F5E47A62()) || func_380(Local_159.f_18) == 2) || func_380(Local_159.f_18) == 3)
	{
		if (iParam0 > 10000)
		{
			switch (unk_0x09AC81E49EA267F7(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000)
		{
			switch (unk_0x09AC81E49EA267F7(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000)
	{
		switch (unk_0x09AC81E49EA267F7(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000)
	{
		switch (unk_0x09AC81E49EA267F7(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_151(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_154(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_152(3, iVar0);
		Global_1378678.f_2764[iVar0] = uParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_2764.f_183[iVar0] = iParam3;
		Global_1378678.f_2764.f_172[iVar0] = iParam2;
		Global_1378678.f_2764.f_205[iVar0] = iParam4;
		Global_1378678.f_2764.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_2764.f_420[iVar0] = iParam7;
		Global_1378678.f_2764.f_453[iVar0] = iParam8;
		Global_1378678.f_2764.f_431[iVar0] = iParam9;
		Global_1378678.f_2764.f_442[iVar0] = iParam10;
		Global_1378678.f_2764.f_464[iVar0] = iParam11;
		Global_1378678.f_2764.f_475[iVar0] = iParam12;
		Global_1378678.f_2764.f_486[iVar0] = iParam13;
		Global_1378678.f_2764.f_497[iVar0] = iParam14;
	}
}

void func_152(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_153(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

int func_154(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_143() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_157(iParam0))
	{
		return func_156(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_398();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_143() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1696044 - func_398());
			if (iParam1 == 1)
			{
				Global_2460612 = 1;
			}
			else if (iVar2 >= Global_262145.f_26404)
			{
				Global_2460613 = 1;
			}
			func_123(iVar2, 0);
			func_121();
			func_120();
			Global_1696044 = (Global_1696044 - iVar2);
			Var3 = func_106(iParam1);
			Var3.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0x62F8C2EDB26F57B3(-1) + unk_0x3A6D64D2A1228113());
			Var3.f_6 = Global_1696044;
			Var3.f_7 = iParam5;
			unk_0xB1C8602C4408B407(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (func_333())
	{
		return 0;
	}
	iVar0 = func_398();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_158(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_152(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

int func_160(int iParam0)
{
	if ((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 2 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 3) || func_417(unk_0xD803B885F5E47A62()))
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_161(int iParam0)
{
	Local_159.f_797 = iParam0;
}

void func_162()
{
	char* sVar0;
	int iVar1;
	
	unk_0x38C3A68D7861DCFD(2, 209, 1);
	unk_0x558EC149EB2BC0A2(2, 209);
	if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
	{
		if ((unk_0x9A01369A10646AFE(2, 209) && !unk_0x7FEE810EE9E768EB(2, 210)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			unk_0x5D96D8530B3D0904(&(Local_159.f_20), 3);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3) || func_417(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		unk_0x0D3BE1DE0262A012(sVar0, false);
		if (func_296(0, -1, 0) && unk_0x27117E2CDD4D67C3(sVar0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 4))
			{
				func_295(0, 0);
				func_293(1, sVar0, sVar0);
				func_292("TCP_HANDS");
				func_180(1, 2, 2, 2, 1);
				func_179(1, 1, 1, 1, 0);
				iVar1 = 0;
				func_175(iVar1, "TCP_HAND1", 0, 1, 0, 0);
				func_175(iVar1, "TCP_10", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_9", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_8", 1, 1, 0, 0);
				func_163(59, 0);
				iVar1 = 1;
				func_175(iVar1, "TCP_HAND2", 0, 1, 0, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(58, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(56, 0);
				iVar1 = 2;
				func_175(iVar1, "TCP_HAND3", 0, 1, 0, 0);
				func_175(iVar1, "TCP_2", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_3", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_4", 1, 1, 0, 0);
				func_163(57, 0);
				iVar1 = 3;
				func_175(iVar1, "TCP_HAND4", 0, 1, 0, 0);
				func_175(iVar1, "TCP_A", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_Q", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_9", 1, 1, 0, 0);
				func_163(59, 0);
				iVar1 = 4;
				func_175(iVar1, "TCP_HAND5", 0, 1, 0, 0);
				func_175(iVar1, "TCP_K", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_K", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_7", 1, 1, 0, 0);
				func_163(56, 0);
				iVar1 = 5;
				func_175(iVar1, "TCP_HAND6", 0, 1, 0, 0);
				func_175(iVar1, "TCP_A", 1, 1, 0, 0);
				func_163(56, 0);
				func_175(iVar1, "TCP_7", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_3", 1, 1, 0, 0);
				func_163(59, 0);
				func_291(-1, 1, 1);
				unk_0x5D96D8530B3D0904(&(Local_159.f_20), 4);
			}
			func_261(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x9A01369A10646AFE(2, 202))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_258(1, -1);
			unk_0xF5A41F3D3B38EFE3(sVar0);
			iLocal_172 = 1;
			Local_159.f_20 = 0;
			unk_0x5D96D8530B3D0904(&(Local_159.f_20), 2);
		}
	}
}

void func_163(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_22350.f_5224 >= 256)
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
	Global_22350.f_4433[Global_22350.f_5224] = iParam0;
	Global_22350.f_5224++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 4;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_172();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_165(26, 1, 0, &fVar1, &fVar2, 0);
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
			fVar3 = func_164();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_164()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
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
			if (func_165(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
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

int func_165(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_171(iParam0), 64);
	StringCopy(&cVar1, func_168(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0);
			if (func_167())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_167())
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
		vVar7.x = (vVar7.x * (func_166(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_166(iParam0) / fVar4));
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

float func_166(int iParam0)
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

int func_167()
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

var func_168(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_170(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_169(&uVar1);
			}
		}
		else
		{
			return func_169(&(Global_22350.f_7029[iParam0 /*16*/]));
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

var func_169(var uParam0)
{
	return uParam0;
}

struct<13> func_170(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_171(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_170(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_169(&uVar0);
		}
		else
		{
			return func_169(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_172()
{
	float fVar0;
	float fVar1;
	float fVar2;
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
	func_173(0, 1, 0, 0, 0, iVar6 > 0, 0);
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
			func_165(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_174(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_174(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_175(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_178(Global_22350.f_5218, 1);
	}
	else
	{
		func_178(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_177(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_165(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_176(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
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

float func_176(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0);
}

float func_177(char* sParam0)
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
	func_173(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_178(int iParam0, bool bParam1)
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

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_181()
{
	char* sVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 2))
	{
		unk_0x0674E58A79778E99(&(Local_159.f_20), 2);
	}
	unk_0x38C3A68D7861DCFD(2, 210, 1);
	unk_0x558EC149EB2BC0A2(2, 210);
	if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0))
	{
		if ((unk_0x9A01369A10646AFE(2, 210) && !unk_0x7FEE810EE9E768EB(2, 209)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			unk_0x5D96D8530B3D0904(&(Local_159.f_20), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3) || func_417(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		unk_0x0D3BE1DE0262A012(sVar0, false);
		if (func_296(0, -1, 0) && unk_0x27117E2CDD4D67C3(sVar0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 1))
			{
				func_295(0, 0);
				func_293(1, sVar0, sVar0);
				func_292("TCP_RULES");
				func_185(1, iLocal_172, 6);
				func_184(1, 1, 1, 1, 1);
				func_291(-1, 1, 1);
				func_290(func_183(iLocal_172), 0, 0);
				func_289(func_182(iLocal_172));
				unk_0x5D96D8530B3D0904(&(Local_159.f_20), 1);
			}
			func_261(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x9A01369A10646AFE(2, 202))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_258(1, -1);
			unk_0xF5A41F3D3B38EFE3(sVar0);
			iLocal_172 = 1;
			Local_159.f_20 = 0;
			unk_0x5D96D8530B3D0904(&(Local_159.f_20), 2);
		}
		else if (unk_0x9A01369A10646AFE(2, 190))
		{
			iLocal_172++;
			if (iLocal_172 > 6)
			{
				iLocal_172 = 1;
			}
			unk_0x0674E58A79778E99(&(Local_159.f_20), 1);
		}
		else if (unk_0x9A01369A10646AFE(2, 189))
		{
			iLocal_172 = (iLocal_172 - 1);
			if (iLocal_172 < 1)
			{
				iLocal_172 = 6;
			}
			unk_0x0674E58A79778E99(&(Local_159.f_20), 1);
		}
	}
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1";
		
		case 2:
			return "TCP_RULE_2";
		
		case 3:
			return "TCP_RULE_3";
		
		case 4:
			return "TCP_RULE_4";
		
		case 5:
			return "TCP_RULE_5";
		
		case 6:
			if ((func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3) || func_417(unk_0xD803B885F5E47A62()))
			{
				return "TCP_RULE_6b";
			}
			else
			{
				return "TCP_RULE_6a";
			}
			break;
	}
	return "";
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T";
		
		case 2:
			return "TCP_RULE_2T";
		
		case 3:
			return "TCP_RULE_3T";
		
		case 4:
			return "TCP_RULE_4T";
		
		case 5:
			return "TCP_RULE_5T";
		
		case 6:
			if ((func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3) || func_417(unk_0xD803B885F5E47A62()))
			{
				return "TCP_RULE_6Tb";
			}
			else
			{
				return "TCP_RULE_6Ta";
			}
			break;
	}
	return "";
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	Global_22350.f_5735 = iParam0;
	Global_22350.f_5736 = iParam1;
	Global_22350.f_5737 = iParam2;
}

void func_186(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3)
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
		func_193(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_192(1);
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
						func_191(unk_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_191(unk_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_191(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
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
						func_190(&(uParam2->f_1[iVar0 /*57*/].f_32));
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
					func_191(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_191(&(uParam2->f_1[iVar0 /*57*/].f_16));
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
						func_190(&(uParam2->f_1[iVar0 /*57*/].f_32));
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
		func_189(*uParam0, uParam1);
	}
	func_188();
}

void func_188()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_189(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_190(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_191(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_192(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_193(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_194(var uParam0)
{
	return uParam0->f_692;
}

void func_195(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_196()
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

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 12;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 13;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 14;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 15;
		
		default:
	}
	return 0;
}

void func_198(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x5D96D8530B3D0904(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	unk_0x5D96D8530B3D0904(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_199(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_200(var uParam0)
{
	func_201(uParam0);
	uParam0->f_692 = 1;
}

void func_201(var uParam0)
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

var func_202(bool bParam0)
{
	if (func_148())
	{
		if (!bParam0)
		{
			switch (unk_0x09AC81E49EA267F7(0, 8))
			{
				case 0:
					Local_159.f_796 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_159.f_796 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_159.f_796 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_159.f_796 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_159.f_796 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_159.f_796 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_159.f_796 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_159.f_796 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0x09AC81E49EA267F7(0, 13))
		{
			case 0:
				Local_159.f_796 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_159.f_796 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_159.f_796 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_159.f_796 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_159.f_796 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_159.f_796 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_159.f_796 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_159.f_796 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_159.f_796 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_159.f_796 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_159.f_796 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_159.f_796 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_159.f_796 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_159.f_796;
}

int func_203()
{
	if (func_204() == 0)
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	return Global_1312467.f_18;
}

void func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26398)
	{
		func_108(-1274895349, Global_262145.f_26398);
		func_109();
		Global_2460613 = 1;
	}
	else
	{
		func_108(-1274895349, (iVar2 - iParam0));
	}
}

int func_206(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

int func_207()
{
	if ((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && (!unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 9) && Local_168.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if (unk_0x0D03A641486A2001() != func_209())
	{
		return unk_0x3DDF605689C8A861(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()));
	}
	return 0;
}

int func_209()
{
	return -1;
}

void func_210()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	float fVar11;
	
	if (!unk_0x06F8112AA79C53D9(2, 207))
	{
		if (bLocal_178)
		{
			func_300(unk_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_178 = false;
	}
	if (!unk_0x06F8112AA79C53D9(2, 208))
	{
		if (bLocal_177)
		{
			func_300(unk_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_177 = false;
	}
	if ((((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0 && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && Local_116.f_576[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] < 12)
	{
		if (Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] > 0 && (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4) || unk_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1))))
		{
			if ((((unk_0x06F8112AA79C53D9(2, 207) && !unk_0x06F8112AA79C53D9(2, 208)) && !bLocal_177) && !func_72(&uLocal_179)) && !unk_0x9F4FE516EAACCFC5(Local_159.f_13))
			{
				if (!bLocal_178)
				{
					if (unk_0xA4FD7964FEE91ED8(0) == 4)
					{
						bLocal_173 = true;
					}
					func_300(unk_0xD803B885F5E47A62(), 0, 0, 0);
					bLocal_178 = true;
				}
			}
		}
		else
		{
			if (bLocal_178)
			{
				func_300(unk_0xD803B885F5E47A62(), 0, 256, 0);
			}
			bLocal_178 = false;
		}
		if (Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] > 0)
		{
			if ((((unk_0x06F8112AA79C53D9(2, 208) && !unk_0x06F8112AA79C53D9(2, 207)) && !bLocal_178) && !func_72(&uLocal_179)) && !unk_0x9F4FE516EAACCFC5(Local_159.f_13))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					func_300(unk_0xD803B885F5E47A62(), 0, 0, 0);
				}
				bLocal_177 = true;
			}
		}
		else
		{
			if (bLocal_177)
			{
				func_300(unk_0xD803B885F5E47A62(), 0, 256, 0);
			}
			bLocal_177 = false;
		}
	}
	else
	{
		if (bLocal_178 || bLocal_177)
		{
			func_300(unk_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_178 = false;
		bLocal_177 = false;
	}
	if (bLocal_177 || bLocal_178)
	{
		unk_0x01861BC775A34949(1);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 166, true);
		}
		if (!unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x8BC9595FD2792B5D("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x9F4FE516EAACCFC5(Local_159.f_13))
		{
			Local_159.f_13 = unk_0x92B061D59B9B540A(26379945, 1);
			unk_0x86F44313DFA8F00C(Local_159.f_13, func_222(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), func_221(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), func_220(bLocal_177), 0, 1, 1, 2);
			unk_0x91F5B0244AAE6222(Local_159.f_13, "HAND_SHAKE", 0.03f);
			unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		}
		else if (bLocal_177)
		{
			if (Local_116.f_5[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2])
			{
				if (!func_98("TCP_D_HAND", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0)))
				{
					func_97("TCP_D_HAND", func_101(func_9(&(Local_116.f_389[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
				}
			}
			else if (!func_335("TCP_D_HAND_D"))
			{
				func_158("TCP_D_HAND_D");
			}
			fVar0 = unk_0x86CC98177DFF41EC(Local_159.f_13);
			fVar1 = 50f;
			fVar1 = func_219();
			fVar0 = func_217(fVar0, fVar1, 0.2f, 4);
			unk_0x86F44313DFA8F00C(Local_159.f_13, func_222(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), func_221(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_178)
		{
			if (bLocal_173)
			{
				fVar2 = unk_0x86CC98177DFF41EC(Local_159.f_13);
				fVar3 = 50f;
				vVar4 = { unk_0x17D61C69BA58F815(Local_159.f_13, 2) };
				vVar5 = { 0f, 0f, 0f };
				vVar6 = { -38.1166f, -0.0930717f, -102.613f };
				vVar7 = { unk_0xD06724447386BC29(Local_159.f_13) };
				vVar8 = { 0f, 0f, 0f };
				vVar9 = { 966.621f, 32.009f, 116.621f };
				if (vVar4.z < 0f)
				{
					vVar4.z = (vVar4.z + 360f);
				}
				vVar9 = { func_216(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1) };
				vVar6 = { func_215(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1) };
				fVar3 = func_219();
				if (vVar6.z < 0f)
				{
					vVar6.z = (vVar6.z + 360f);
				}
				vVar5 = { func_213(vVar4, vVar6, 0.35f, 4) };
				vVar8 = { func_212(vVar7, vVar9, 0.35f, 4) };
				if (vVar5.z > 180f)
				{
					vVar5.z = (vVar5.z - 360f);
				}
				else if (vVar5.z < -180f)
				{
					vVar5.z = (vVar5.z + 360f);
				}
				if (func_211(vVar4, vVar6, 10f, 0) && func_211(vVar7, vVar9, 0.1f, 0))
				{
					fVar2 = func_217(fVar2, fVar3, 0.35f, 4);
				}
				unk_0x86F44313DFA8F00C(Local_159.f_13, vVar8, vVar5, fVar2, 0, 1, 1, 2);
			}
			else
			{
				fVar10 = unk_0x86CC98177DFF41EC(Local_159.f_13);
				fVar11 = 50f;
				fVar11 = func_219();
				fVar10 = func_217(fVar10, fVar11, 0.35f, 4);
				unk_0x86F44313DFA8F00C(Local_159.f_13, func_222(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), func_221(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), fVar10, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x9F4FE516EAACCFC5(Local_159.f_13))
		{
			unk_0x01861BC775A34949(1);
			if (!func_72(&uLocal_179) && bLocal_173)
			{
				func_73(&uLocal_179, 0, 0);
				unk_0x82A772610883F395("PokerCamTransition", 0, 0);
			}
			else if (func_71(&uLocal_179, 100, 0) || !bLocal_173)
			{
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				unk_0x9A8DDC7C522F5BF5(Local_159.f_13, 0);
				unk_0xA37A90C62806D848(1);
				func_69(&uLocal_179);
				bLocal_173 = false;
			}
		}
	}
	if (bLocal_178 || bLocal_173)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4) || unk_0xEAE0D21A50E6C7F4(Local_116.f_20[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1)))
		{
			if (!func_98("TCP_P_HAND", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0)))
			{
				func_97("TCP_P_HAND", func_101(func_9(&(Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1), 0, 0), 0));
			}
		}
	}
}

int func_211(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

Vector3 func_212(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0.x = func_217(vParam0.x, vParam1.x, fParam2, iParam3);
	vVar0.y = func_217(vParam0.y, vParam1.y, fParam2, iParam3);
	vVar0.z = func_217(vParam0.z, vParam1.z, fParam2, iParam3);
	return vVar0;
}

Vector3 func_213(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0.x = func_214(vParam0.x, vParam1.x, fParam2, iParam3);
	vVar0.y = func_214(vParam0.y, vParam1.y, fParam2, iParam3);
	vVar0.z = func_214(vParam0.z, vParam1.z, fParam2, iParam3);
	return vVar0;
}

float func_214(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x755FF954DAE327E1((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_217(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_215(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_232(iParam0) };
	vVar1 = { -47.16f, 0f, -87.475f };
	return Vector(vVar0.z, 0f, 0f) + vVar1;
}

Vector3 func_216(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_232(iParam0) };
	return unk_0x8A5E176FF719A014(func_361(iParam0), vVar0.z, 0.198f, 0f, 1.388f);
}

float func_217(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-cos(func_218((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_217(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_217(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_218(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_219()
{
	if (bLocal_177)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_220(bool bParam0)
{
	float fVar0;
	
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_173)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_221(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (bParam2)
	{
		vVar0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_173)
	{
		return unk_0x3B276DB863622D2E(2);
	}
	else
	{
		return func_215(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + vVar0;
}

Vector3 func_222(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (bParam2)
	{
		vVar0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_173)
	{
		return unk_0x07DAF5424BC6779A();
	}
	else
	{
		return func_216(iParam0);
	}
	return unk_0x8A5E176FF719A014(func_76(iParam1), func_75(iParam1), vVar0);
}

void func_223(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_224(int iParam0)
{
	if (Local_116.f_576[iParam0] == 2)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6, 0))
		{
			Local_159.f_799 = { Local_116.f_168[iParam0 /*55*/] };
			unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6), 0);
		}
	}
	else if (Local_116.f_576[iParam0] > 2 && unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6, 0))
	{
		if (Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] > 0)
		{
			if (Local_159.f_854 != Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/])
			{
				Local_159.f_854 = { Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/] };
			}
			else
			{
				if (Local_159.f_854.f_1[iLocal_176] != Local_116.f_410[unk_0xD803B885F5E47A62() /*5*/].f_1[iLocal_176])
				{
					iLocal_175 = 0;
					iLocal_176 = 0;
					if (Global_262145.f_26036)
					{
						unk_0x1787A8354D584871(&Local_168);
					}
					func_375(1);
					unk_0xA37A90C62806D848(1);
					return 1;
				}
				iLocal_176++;
				if (iLocal_176 >= Local_159.f_854)
				{
					iLocal_176 = 0;
				}
			}
		}
		if (Local_116.f_168[iParam0 /*55*/].f_2[iLocal_175] != Local_159.f_799.f_2[iLocal_175])
		{
			iLocal_175 = 0;
			iLocal_176 = 0;
			if (Global_262145.f_26036)
			{
				unk_0x1787A8354D584871(&Local_168);
			}
			func_375(1);
			unk_0xA37A90C62806D848(1);
			return 1;
		}
		iLocal_175++;
		if (iLocal_175 >= 52)
		{
			iLocal_175 = 0;
		}
	}
	return 0;
}

void func_225()
{
	int iVar0;
	
	iVar0 = func_380(Local_159.f_18);
	if (iVar0 < 32)
	{
		unk_0x5D96D8530B3D0904(&(Local_159.f_33), iVar0);
	}
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_411())
	{
		return 0;
	}
	iVar0 = func_227(iParam0);
	if (iVar0 != func_411())
	{
		return func_324(iVar0);
	}
	return 0;
}

int func_227(int iParam0)
{
	if (iParam0 != func_411())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_411();
}

void func_228(var uParam0, int iParam1)
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_333())
		{
			func_228(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_159.f_794));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_73(&(Local_159.f_794), 0, 0);
	}
}

int func_229()
{
	int iVar0;
	
	iVar0 = func_380(Local_159.f_18);
	if (iVar0 < 32)
	{
		return unk_0xEAE0D21A50E6C7F4(Local_159.f_33, iVar0);
	}
	return 0;
}

char* func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_231()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_232(int iParam0)
{
	int iVar0;
	
	if (Local_159.f_26 == 1)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 618005505, 0, 0, 0);
	}
	else if (func_380(iParam0) == 0 || func_380(iParam0) == 1)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, -1728077103, 0, 0, 0);
	}
	else
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 618005505, 0, 0, 0);
	}
	if (unk_0xC844350D5D58C99A(iVar0) && unk_0x1A5AE8A9B1D42A10(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_233(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0xEEB20D14BD38615E(func_231(), func_230(iParam1), func_361(iParam0), func_232(iParam0), 0.01f, 2) };
	return vVar0.z;
}

float func_234(int iParam0, vector3 vParam1, bool bParam2)
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

Vector3 func_235(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x1BB04F10296A1C5E(func_231(), func_230(iParam1), func_361(iParam0), func_232(iParam0), 0.01f, 2) };
	return vVar0;
}

int func_236()
{
	unk_0x3F423BF5B8125A50(func_45());
	unk_0x3F423BF5B8125A50(func_78());
	unk_0x3F423BF5B8125A50(func_92());
	unk_0x3F423BF5B8125A50(func_231());
	if (((unk_0xB4AE0788C1587752(func_45()) && unk_0xB4AE0788C1587752(func_78())) && unk_0xB4AE0788C1587752(func_92())) && unk_0xB4AE0788C1587752(func_231()))
	{
		return 1;
	}
	return 0;
}

int func_237()
{
	if (func_71(&(Local_159.f_792), 3500, 0))
	{
		func_69(&(Local_159.f_792));
		return 1;
	}
	return 0;
}

bool func_238(int iParam0)
{
	if (Local_116.f_117[iParam0] == func_411())
	{
		return 0;
	}
	return Local_116.f_117[iParam0] != unk_0xD803B885F5E47A62();
}

void func_239(int iParam0)
{
	Global_1696054 = unk_0xDD0E7998AE8AD485();
	Global_1696071 = iParam0;
	if (!func_247())
	{
		func_244();
	}
	if (!func_243())
	{
		func_240();
	}
}

void func_240()
{
	func_108(-1040706016, unk_0xDD0E7998AE8AD485());
	func_242();
	func_241();
	Global_1696068 = 1;
	Global_1696063 = 0;
}

void func_241()
{
	func_108(1599929969, unk_0xDD0E7998AE8AD485());
}

void func_242()
{
	func_108(-1959489725, 0);
	func_108(-1767815638, 0);
	func_108(-1983697810, 0);
	func_108(2071236561, 0);
	func_108(-569486077, 0);
	func_108(-806012719, 0);
	func_108(-1030054372, 0);
	func_108(611934680, 0);
	func_108(387434261, 0);
	func_108(92143537, 0);
	func_108(1599929969, 0);
}

bool func_243()
{
	return Global_1696068;
}

void func_244()
{
	func_108(937560627, unk_0xDD0E7998AE8AD485());
	func_246();
	func_245((unk_0xDD0E7998AE8AD485() + 86400));
	Global_1696067 = 1;
}

void func_245(int iParam0)
{
	Global_1696062 = iParam0;
}

void func_246()
{
	func_108(575353331, unk_0xDD0E7998AE8AD485());
}

bool func_247()
{
	return func_112(937560627) != 0;
}

bool func_248(int iParam0)
{
	return Local_116.f_117[iParam0] == unk_0xD803B885F5E47A62();
}

void func_249()
{
	func_363(2);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, false);
	func_339();
	func_300(unk_0xD803B885F5E47A62(), 1, 0, 0);
	func_257();
	unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
	func_250();
}

void func_250()
{
	int iVar0;
	int iVar1;
	
	if (Global_1696071 != -1)
	{
		iVar0 = (unk_0xDD0E7998AE8AD485() - Global_1696054);
		iVar1 = (unk_0xDD0E7998AE8AD485() - Global_1696055);
		if (Global_1696055 == -1)
		{
			func_251(iVar0);
		}
		else
		{
			func_251(iVar1);
		}
		func_246();
		func_241();
		Global_1696054 = -1;
		Global_1696055 = -1;
		Global_1696071 = -1;
	}
}

void func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = func_256();
	Global_1696063 = (Global_1696063 + iParam0);
	func_252(iVar0, iParam0);
	func_241();
}

void func_252(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 12);
	iVar3 = 1;
	if ((iVar2 % 32) + 12 > 32)
	{
		iVar3 = 2;
	}
	iVar4 = floor((to_float(iVar2) / 32f));
	if (iVar4 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 9)
		{
			return;
		}
		iVar5 = func_255((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_112(iVar5);
		iVar0++;
	}
	iVar6 = func_254(&uVar1, iParam0, 12);
	iVar6 = (iVar6 + iParam1);
	func_253(&uVar1, iParam0, 12, iVar6);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		uVar7 = func_255((iVar4 + iVar0));
		func_108(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_253(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = floor((to_float(iVar3) / 32f));
	iVar5 = ceil((to_float((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam3, iVar6))
			{
				unk_0x5D96D8530B3D0904(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0x0674E58A79778E99(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_254(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = floor((to_float(iVar4) / 32f));
	iVar6 = ceil((to_float((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				unk_0x5D96D8530B3D0904(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_255(int iParam0)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_256()
{
	return func_112(92143537);
}

void func_257()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_258(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_260(&iVar0, 0, iParam1))
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
		func_259(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_259(int iParam0)
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

int func_260(var uParam0, bool bParam1, int iParam2)
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

void func_261(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_260(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_285(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22350)
	{
		if (func_165(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_167())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_167())
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
			func_175(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar63, func_171(29), 64);
					StringCopy(&cVar64, func_168(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == -1487683087)
					{
						func_284(Global_22347, Global_22348, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
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
				func_284(Global_22347, (Global_22348 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_283();
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
					func_283();
					func_281((((Global_22347 + fParam5) - 0.00390625f) - func_282("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_283();
						func_281((((Global_22347 + fParam5) - 0.00390625f) - func_282("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
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
				func_284(Global_22347, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_165(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_280(fVar40);
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
				func_284(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_280(fVar40);
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
					func_165(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_279(Global_22350.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_171(Global_22350.f_4768), func_168(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_165(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_280(fVar40);
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
				func_284(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_280(fVar40);
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
					func_165(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_279(Global_4268421.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_171(Global_4268421.f_67), func_168(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_274(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_171(26), func_168(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_171(27), func_168(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
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
												if (func_165(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_165(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_279(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar28)]), func_168(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar28)]), func_168(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_272() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_173(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_279(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
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
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_171(26), func_168(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_171(27), func_168(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										func_271((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
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
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
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
										if (func_165(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_171(26), func_168(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_171(27), func_168(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
									func_270((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_165(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_279(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_171(26), func_168(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_279(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_171(27), func_168(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_165(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(Global_22350.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_171(Global_22350.f_4433[iVar22]), func_168(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_269(Global_22350.f_4433[iVar22])), (fVar37 * func_269(Global_22350.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
								if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_262(0);
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
		func_186(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_262(int iParam0)
{
	if (func_268())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_267(0))
		{
			func_263(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_263(int iParam0)
{
	if (func_268())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_266())
		{
			func_265(1, 1);
		}
		else
		{
			func_265(0, 0);
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
	if (!func_264())
	{
		Global_19486.f_1 = 3;
	}
}

int func_264()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_265(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_267(0))
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

bool func_266()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_267(int iParam0)
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

bool func_268()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

float func_269(int iParam0)
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

void func_270(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_271(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_272()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_273(bool bParam0)
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

void func_274(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_260(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_285(bParam4, bParam8))
	{
		return;
	}
	if (func_277())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_275(unk_0xD803B885F5E47A62(), 0))
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
					func_191(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_191(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_190(&(Global_22350.f_4964[iVar1 /*4*/]));
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
				func_191(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_190(&(Global_4268421.f_16));
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

bool func_275(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_276(-1, 0) == 8;
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

int func_276(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_137();
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

int func_277()
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_278())
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

int func_278()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_279(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_280(float fParam0)
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

void func_281(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_282(char* sParam0, int iParam1, int iParam2)
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
	func_283();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_283()
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

void func_284(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_285(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_287(8, -1) && func_286() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_286()
{
	return Global_1312812;
}

bool func_287(int iParam0, int iParam1)
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

void func_288(int iParam0, char* sParam1, int iParam2)
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
	unk_0x0674E58A79778E99(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_289(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 1;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765 /*16*/]), sParam0, 64);
	Global_22350.f_4765++;
}

void func_290(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = unk_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_291(int iParam0, bool bParam1, int iParam2)
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

void func_292(char* sParam0)
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

void func_293(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_294(29, sParam1, sParam2);
}

void func_294(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_295(bool bParam0, bool bParam1)
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

bool func_296(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_260(&iVar0, 1, iParam1))
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
	bVar2 = func_297(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_297(var uParam0)
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

void func_298(int iParam0)
{
	Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 = iParam0;
	Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 = func_380(iParam0);
}

bool func_299()
{
	return Global_4264528 == 1;
}

void func_300(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_309())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_203())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_275(unk_0xD803B885F5E47A62(), 0) && !func_308()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0);
					}
					Global_2425662[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_305(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_304(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, true, 0);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, false);
					}
					unk_0x120A395B0ECB8EA5(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, false);
				}
				unk_0x25C5402CC10F76CD(iVar27, true);
				unk_0x62DE699599F0417E(iParam0, 0);
				unk_0x7569764C11F70C0A(iParam0, 0);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 1);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0)
				{
					func_303();
					func_302();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[iParam0 /*421*/].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_304(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, true);
						}
					}
					if (func_301(Global_4456448.f_232883))
					{
						unk_0x1E9649458B15960F(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 1);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_301(int iParam0)
{
	return iParam0 == 17;
}

void func_302()
{
	vector3 vVar0;
	
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_303()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_305(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_307();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 1);
			}
		}
		if (func_275(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_306(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_306(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_307()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_308()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_309()
{
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_310()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_311(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_312(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_312(int iParam0)
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

int func_313(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_312(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_267(0))
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

bool func_314(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 26);
}

void func_315(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_311(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_316(int iParam0)
{
	if (func_317(iParam0, 1))
	{
		return Global_1628237[func_326() /*615*/].f_11.f_450;
	}
	return -1;
}

bool func_317(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_318(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_411();
}

int func_318(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_411())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_319()
{
	if (((((((((func_335("TCP_USED") || func_335("CAS_MG_CBAN")) || func_335("CAS_MG_CTIME")) || func_322("CAS_MG_MEMB2", func_323(1))) || func_335("CAS_MG_SUITE2")) || func_335("CAS_MG_NOCHIPS3")) || func_335("CAS_MG_LOWCHIPS3")) || func_335("CAS_MG_NOCHIPS7")) || func_335("CAS_MG_LOWCHIPS7")) || func_335("TCP_NA"))
	{
		return 1;
	}
	return 0;
}

void func_320()
{
	if (!unk_0x7A7BDE279347E517(func_323(0), false, true, 0, -1, 0))
	{
		func_223("MAITRD_M_D0E", -1);
	}
	else if (func_324(unk_0xD803B885F5E47A62()))
	{
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_5, 31))
	{
	}
	else if (Global_4264528 != 0)
	{
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1676377.f_5), 30);
	}
}

void func_321(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_322(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_323(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

bool func_324(int iParam0)
{
	if (iParam0 == func_411())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 18);
}

bool func_325()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_369.f_1, 18);
}

int func_326()
{
	return Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_327(bool bParam0)
{
	return func_317(unk_0xD803B885F5E47A62(), bParam0);
}

int func_328(int iParam0)
{
	if (iParam0 != func_411())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_329()
{
	if (func_332() <= 0)
	{
		return 0;
	}
	if (func_331() <= 0)
	{
		return 1;
	}
	if (func_330())
	{
		return 2;
	}
	return 3;
}

bool func_330()
{
	return Global_1696061 != 0;
}

int func_331()
{
	return (Global_262145.f_26398 + func_111());
}

int func_332()
{
	return (Global_262145.f_26399 - func_111());
}

bool func_333()
{
	return func_329() != 3;
}

void func_334(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_335(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_336(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x829DE4CDEA2FE156(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_337()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

int func_338()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_339()
{
	if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 != -1)
	{
		Local_159.f_2 = 0;
		Local_159.f_3 = 0;
		Local_159.f_4 = 0;
		Local_159.f_6 = 0;
		Local_159.f_22 = 0;
		Local_158[unk_0xD803B885F5E47A62() /*9*/] = 0;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6 = 0;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 = 0;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 = 0;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 = 0;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 = -1;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 = -1;
	}
}

bool func_340()
{
	return Global_2537071.f_6591;
}

int func_341()
{
	if ((func_342() != -1 && func_342() != 28) && func_342() != 17)
	{
		return 1;
	}
	return 0;
}

int func_342()
{
	return Global_968397;
}

bool func_343()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_344()
{
	return Global_2450632.f_591;
}

int func_345(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = func_347(iParam0);
	iVar1 = func_346(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_347(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
		{
			return Global_42383[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_348()
{
	int iVar0;
	
	if (func_317(unk_0xD803B885F5E47A62(), 1))
	{
		iVar0 = func_326();
		if (func_62(iVar0, 1, 1) && unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar0 /*876*/].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_353(unk_0xD803B885F5E47A62(), 0) && func_351(unk_0xD803B885F5E47A62())) || func_349(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	if (func_350(iParam0) != func_411())
	{
		return func_350(iParam0) == func_227(iParam0);
	}
	return 0;
}

int func_350(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

int func_351(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_352(iParam0, 9);
	}
	return 0;
}

bool func_352(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_353(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_354()
{
	if (func_417(unk_0xD803B885F5E47A62()) && func_412() != func_411())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[func_412() /*421*/].f_310.f_4, 0) || unk_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 10))
		{
			return 0;
		}
	}
	return 1;
}

bool func_355(int iParam0, vector3 vParam1, float fParam2)
{
	return func_356(unk_0x68F4C0EC296D3901(iParam0, true), unk_0xD9522BA9E27E1349(iParam0), vParam1, fParam2);
}

bool func_356(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x8A5E176FF719A014(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = func_357(func_358(vVar0), func_358(vParam2 - vParam0));
	return unk_0x3DCA5D50DD292443(fVar1) <= fParam3;
}

float func_357(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_358(vector3 vParam0)
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

Vector3 func_359(int iParam0)
{
	if (Local_159.f_26 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1142.798f, 263.5501f, -51.7869f;
			
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			
			case 2:
				return 1143.339f, 264.7519f, -51.8289f;
			
			case 3:
				return 1144.052f, 264.7396f, -51.7913f;
			
			case 4:
				return 1146.849f, 261.9344f, -51.8167f;
			
			case 5:
				return 1146.865f, 261.2238f, -51.8003f;
			
			case 6:
				return 1146.325f, 260.7546f, -51.812f;
			
			case 7:
				return 1145.63f, 260.7765f, -51.7979f;
			
			case 8:
				return 1134.411f, 266.1568f, -50.9898f;
			
			case 9:
				return 1133.708f, 266.1863f, -50.9883f;
			
			case 10:
				return 1133.242f, 266.7186f, -50.9969f;
			
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			
			case 12:
				return 1149.42f, 251.1891f, -50.9655f;
			
			case 13:
				return 1148.727f, 251.1957f, -50.9855f;
			
			case 14:
				return 1148.236f, 251.7239f, -51.0083f;
			
			case 15:
				return 1148.262f, 252.4149f, -51.0019f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_360(int iParam0, vector3 vParam1, float fParam2)
{
	return vdist2(unk_0x68F4C0EC296D3901(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

Vector3 func_361(int iParam0)
{
	int iVar0;
	
	if (Local_159.f_26 == 1)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 618005505, 0, 0, 0);
	}
	else if (func_380(iParam0) == 0 || func_380(iParam0) == 1)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, -1728077103, 0, 0, 0);
	}
	else
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 618005505, 0, 0, 0);
	}
	if (unk_0xC844350D5D58C99A(iVar0) && unk_0x1A5AE8A9B1D42A10(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_362(int iParam0)
{
	return Global_98796.f_344 == iParam0;
}

void func_363(int iParam0)
{
	Local_159.f_798 = iParam0;
}

void func_364(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_228(&(Local_158[iParam0 /*9*/]), 0);
	Local_158[iParam0 /*9*/].f_7.f_1 = -1;
}

int func_365()
{
	if (Local_159.f_26 == 1)
	{
		if (!unk_0xC844350D5D58C99A(Local_159.f_34))
		{
			unk_0x523BCC9DC80CD82F(618005505);
			if (!unk_0xB87F6CF6E5628C67(618005505))
			{
				return 0;
			}
			Local_159.f_34 = unk_0x7707E48765093646(618005505, func_76(0), false, false, true);
			unk_0x08841CDB215AE18F(Local_159.f_34, func_76(0), 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(Local_159.f_34, func_75(0));
			unk_0x1E9649458B15960F(Local_159.f_34, true);
			unk_0x71199B01895C6202(618005505);
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

void func_366(var uParam0, bool bParam1, bool bParam2)
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

int func_367()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_368(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			if ((func_371(unk_0xD803B885F5E47A62(), 1) || func_371(unk_0xD803B885F5E47A62(), 2)) || func_370())
			{
				func_228(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_371(unk_0xD803B885F5E47A62(), 1) || func_371(unk_0xD803B885F5E47A62(), 2)) || func_370())
			{
				func_228(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_369())
			{
				func_228(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_369()
{
	if ((((func_371(unk_0xD803B885F5E47A62(), 4) || func_371(unk_0xD803B885F5E47A62(), 5)) || func_371(unk_0xD803B885F5E47A62(), 6)) || func_371(unk_0xD803B885F5E47A62(), 7)) || func_370())
	{
		return 1;
	}
	return 0;
}

int func_370()
{
	if (func_71(&(Local_159.f_794), 3500, 0))
	{
		func_69(&(Local_159.f_794));
		return 1;
	}
	return 0;
}

bool func_371(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_116.f_600[iParam0], iVar0);
}

void func_372(int iParam0, int iParam1)
{
	Global_22211.f_9 = iParam0;
	Global_22211.f_10 = iParam1;
}

void func_373(bool bParam0)
{
	if (bParam0)
	{
		func_374(1);
		func_263(1);
	}
	if (!unk_0x1A72D8C9F025E5E3() && !unk_0x798A3F1296751F46())
	{
		unk_0x857E3CE01DEA2D26();
		unk_0x5EEBDFEE72949D59(0);
		unk_0x18B28213EC89540F(1);
		unk_0x38C3A68D7861DCFD(2, 200, 1);
		unk_0x38C3A68D7861DCFD(2, 199, 1);
		unk_0x558EC149EB2BC0A2(0, 200);
		unk_0x558EC149EB2BC0A2(2, 200);
		unk_0x558EC149EB2BC0A2(0, 199);
		unk_0x558EC149EB2BC0A2(2, 199);
		unk_0x558EC149EB2BC0A2(0, 201);
		unk_0x558EC149EB2BC0A2(0, 202);
		unk_0x558EC149EB2BC0A2(0, 187);
	}
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		if (func_343())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

void func_375(bool bParam0)
{
	char* sVar0;
	
	if (Local_159.f_798 > 2 && unk_0xA4FD7964FEE91ED8(0) != 4)
	{
		if (((((!func_379() && !func_378()) && !func_377()) && !func_376()) && !func_86(unk_0xD803B885F5E47A62())) && !unk_0x0C2635BB5127C8FB())
		{
			func_300(unk_0xD803B885F5E47A62(), 1, 0, 0);
		}
		func_257();
	}
	if (Local_159.f_798 > 2)
	{
		func_257();
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 0) || unk_0xEAE0D21A50E6C7F4(Local_159.f_20, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_159.f_18) == 2 || func_380(Local_159.f_18) == 3) || func_417(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_258(1, -1);
		unk_0xF5A41F3D3B38EFE3(sVar0);
		iLocal_172 = 1;
		Local_159.f_20 = 0;
	}
	if (unk_0x9F4FE516EAACCFC5(Local_159.f_13))
	{
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0x9A8DDC7C522F5BF5(Local_159.f_13, 0);
		bLocal_173 = false;
	}
	if (Local_159.f_31 != -1)
	{
		func_311(&(Local_159.f_31));
		Local_159.f_31 = -1;
	}
	if (bParam0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_159.f_22, 4) && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_92(), "cards_idle", 3))
		{
			Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 2, true, false, 1065353216, 0, 1065353216);
			unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
			unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 1, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_68[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 2, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			unk_0x914E6894744915F8(Local_159.f_24);
			Local_159.f_7 = 1;
		}
		else
		{
			Local_159.f_24 = unk_0xF66E5A439A080021(func_361(Local_159.f_18), func_232(Local_159.f_18), 2, false, false, 1065353216, 0, 1065353216);
			unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_24, func_231(), func_93(Local_159.f_18), 2f, -2f, 13, 16, 1148846080, 0);
			unk_0x914E6894744915F8(Local_159.f_24);
		}
	}
	Local_159.f_15 = 0;
	Local_159.f_23 = 0;
	Local_159.f_22 = 0;
	Local_159.f_29 = 0;
	Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6 = 0;
	Local_159.f_1 = 0;
	Local_159.f_2 = 0;
	Local_159.f_3 = 0;
	Local_159.f_4 = 0;
	Local_159.f_6 = 0;
	Local_159.f_14 = 0;
	if (!bParam0)
	{
		func_339();
	}
	Local_169.f_4 = func_398();
	Local_169.f_5 = func_206(&uLocal_166, 0, 0);
	if (Local_159.f_798 > 2)
	{
		if (Global_262145.f_26042)
		{
			unk_0xE70629D68EB9B9E0(&Local_169);
		}
	}
	if (!bParam0)
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 3);
	}
	if (bParam0 || Local_159.f_798 > 2)
	{
		func_250();
	}
	func_363(10);
	func_161(0);
}

int func_376()
{
	if (unk_0x8A22C4C08282BF26(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_377()
{
	return Global_1312877;
}

int func_378()
{
	if (func_204() == 3 || func_204() == 2)
	{
		return 1;
	}
	return 0;
}

int func_379()
{
	if (func_204() == 1 || func_204() == 4)
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_381()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_159.f_26)
	{
		if (!unk_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]))
		{
		}
		else
		{
			iVar1 = unk_0x1B50683925F00106(Local_116.f_50[iVar0]);
			if (func_383(iVar1))
			{
				if (func_382(iVar0))
				{
					unk_0xC6384DBF5F4B354B(iVar1, false, 1);
				}
				else
				{
					unk_0xC6384DBF5F4B354B(iVar1, true, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_382(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4, 5) || unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4, 2))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4, 3))
	{
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_383(int iParam0)
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

void func_384()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_159.f_26)
	{
		if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(unk_0xD803B885F5E47A62())))
		{
			if (!unk_0xC844350D5D58C99A(Local_159.f_35[iVar0]))
			{
				func_387(iVar0);
			}
			else if (unk_0xE5DBF9B6126856CA(Local_116.f_50[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_50[iVar0])))
			{
				if (!iLocal_184[iVar0])
				{
					if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_44(iVar0), 3))
					{
						if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), 1691374422))
						{
							iLocal_185[iVar0] = 1;
						}
					}
					else
					{
						iLocal_185[iVar0] = 0;
					}
					if (((iLocal_185[iVar0] || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_43(iVar0), 3)) || Local_116.f_576[iVar0] == 6) || Local_116.f_576[iVar0] == 7)
					{
						if (!unk_0xBDEB2DEEF1D23A18(Local_159.f_35[iVar0]))
						{
							unk_0x1E9649458B15960F(Local_159.f_35[iVar0], false);
							unk_0x9F528B1B53FBC5D9(Local_159.f_35[iVar0], unk_0x1B50683925F00106(Local_116.f_50[iVar0]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
						}
						iLocal_184[iVar0] = 1;
					}
				}
				else if ((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_31(iVar0), 3) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), 152918166)) || ((Local_116.f_576[iVar0] < 5 && !unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_44(iVar0), 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_50[iVar0]), func_45(), func_43(iVar0), 3)))
				{
					if (unk_0xBDEB2DEEF1D23A18(Local_159.f_35[iVar0]))
					{
						unk_0x15AFB6CBDE990FB6(Local_159.f_35[iVar0], 1, true);
						unk_0x08841CDB215AE18F(Local_159.f_35[iVar0], func_386(iVar0), 0, 0, 1);
						unk_0xC023D1C4BF532815(Local_159.f_35[iVar0], func_385(iVar0), 2, 1);
						unk_0x1E9649458B15960F(Local_159.f_35[iVar0], true);
					}
					iLocal_184[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_385(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { unk_0xEEB20D14BD38615E(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return vVar0;
}

Vector3 func_386(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x1BB04F10296A1C5E(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return vVar0;
}

void func_387(int iParam0)
{
	int iVar0;
	
	if (Local_159.f_5)
	{
		iVar0 = -332559487;
	}
	else
	{
		iVar0 = -974595923;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	if (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		return;
	}
	unk_0x3F423BF5B8125A50(func_45());
	if (!unk_0xB4AE0788C1587752(func_45()))
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(Local_159.f_35[iParam0]))
	{
		Local_159.f_35[iParam0] = unk_0xB0BE3DFBBB59A620(iVar0, func_386(iParam0), false, false, true);
		unk_0x71199B01895C6202(iVar0);
		unk_0x08841CDB215AE18F(Local_159.f_35[iParam0], func_386(iParam0), 0, 0, 1);
		unk_0xC023D1C4BF532815(Local_159.f_35[iParam0], func_385(iParam0), 2, 1);
		unk_0x1E9649458B15960F(Local_159.f_35[iParam0], true);
		unk_0x8D17794CE3273D70(func_45());
	}
}

void func_388()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	
	if (((func_362(1581559923) || func_362(272405600)) || func_417(unk_0xD803B885F5E47A62())) && !func_397())
	{
		iLocal_171 = 1;
		if (!bLocal_170)
		{
			bLocal_170 = (func_406() && func_396());
		}
	}
	else
	{
		if (iLocal_171)
		{
			func_407();
			func_394();
			iLocal_171 = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_159.f_26)
	{
		if (iVar0 != iLocal_174 && iVar0 != Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (func_59(iVar0, Local_159.f_26))
			{
				bVar1 = true;
			}
			vVar3 = { 0f, 0f, func_75(iVar0) };
			iVar4 = 0;
			while (iVar4 < 4)
			{
				iVar5 = Local_116.f_117[(iVar0 * 4 + iVar4)];
				if (iVar5 < 0 || ((!func_362(1581559923) && !func_362(272405600)) && !func_417(unk_0xD803B885F5E47A62())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0xC844350D5D58C99A(Local_159.f_40[func_393(iVar0, iVar4, iVar2)]))
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_40[func_393(iVar0, iVar4, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_158[iVar5 /*9*/].f_3 > 0)
					{
						if (!unk_0xC844350D5D58C99A(Local_159.f_40[func_393(iVar0, iVar4, 0)]))
						{
							if (func_392(Local_158[iVar5 /*9*/].f_3, bVar1) != 0)
							{
								Local_159.f_40[func_393(iVar0, iVar4, 0)] = unk_0xB0BE3DFBBB59A620(func_392(Local_158[iVar5 /*9*/].f_3, bVar1), unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), false, false, true);
								unk_0x08841CDB215AE18F(Local_159.f_40[func_393(iVar0, iVar4, 0)], unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_3, 0, iVar4, bVar1, 0)), 0, 0, 1);
								unk_0xC023D1C4BF532815(Local_159.f_40[func_393(iVar0, iVar4, 0)], vVar3 + func_390(Local_158[iVar5 /*9*/].f_4, 0, iVar4, bVar1), 2, 1);
								if (!unk_0xEA6BC48857E0AC4C(func_389(Local_158[iVar5 /*9*/].f_3)))
								{
									unk_0xCEAA091B490F8407(-1, func_389(Local_158[iVar5 /*9*/].f_3), Local_159.f_40[func_393(iVar0, iVar4, 0)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 0)]) != 255)
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_40[func_393(iVar0, iVar4, 0)]));
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_159.f_40[func_393(iVar0, iVar4, 0)]))
					{
						if (unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 0)]) > 0)
						{
							unk_0x4FB9A846E72E2F23(Local_159.f_40[func_393(iVar0, iVar4, 0)], floor(func_217(to_float(unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 0)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_40[func_393(iVar0, iVar4, 0)]));
						}
					}
					if (Local_158[iVar5 /*9*/].f_5 > 0)
					{
						if (!unk_0xC844350D5D58C99A(Local_159.f_40[func_393(iVar0, iVar4, 1)]))
						{
							if (func_392(Local_158[iVar5 /*9*/].f_5, bVar1) != 0)
							{
								Local_159.f_40[func_393(iVar0, iVar4, 1)] = unk_0xB0BE3DFBBB59A620(func_392(Local_158[iVar5 /*9*/].f_5, bVar1), unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), false, false, true);
								unk_0x08841CDB215AE18F(Local_159.f_40[func_393(iVar0, iVar4, 1)], unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_5, 1, iVar4, bVar1, 0)), 0, 0, 1);
								unk_0xC023D1C4BF532815(Local_159.f_40[func_393(iVar0, iVar4, 1)], vVar3 + func_390(Local_158[iVar5 /*9*/].f_4, 1, iVar4, bVar1), 2, 1);
								if (!unk_0xEA6BC48857E0AC4C(func_389(Local_158[iVar5 /*9*/].f_5)))
								{
									unk_0xCEAA091B490F8407(-1, func_389(Local_158[iVar5 /*9*/].f_5), Local_159.f_40[func_393(iVar0, iVar4, 1)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 1)]) != 255)
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_40[func_393(iVar0, iVar4, 1)]));
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_159.f_40[func_393(iVar0, iVar4, 1)]))
					{
						if (unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 1)]) > 0)
						{
							unk_0x4FB9A846E72E2F23(Local_159.f_40[func_393(iVar0, iVar4, 1)], floor(func_217(to_float(unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 1)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_40[func_393(iVar0, iVar4, 1)]));
						}
					}
					if (Local_158[iVar5 /*9*/].f_4 > 0)
					{
						if (!unk_0xC844350D5D58C99A(Local_159.f_40[func_393(iVar0, iVar4, 2)]))
						{
							if (func_392(Local_158[iVar5 /*9*/].f_4, bVar1) != 0)
							{
								Local_159.f_40[func_393(iVar0, iVar4, 2)] = unk_0xB0BE3DFBBB59A620(func_392(Local_158[iVar5 /*9*/].f_4, bVar1), unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), false, false, true);
								unk_0x08841CDB215AE18F(Local_159.f_40[func_393(iVar0, iVar4, 2)], unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_4, 2, iVar4, bVar1, 1)), 0, 0, 1);
								unk_0xC023D1C4BF532815(Local_159.f_40[func_393(iVar0, iVar4, 2)], vVar3 + func_390(Local_158[iVar5 /*9*/].f_4, 2, iVar4, bVar1), 2, 1);
								if (!unk_0xEA6BC48857E0AC4C(func_389(Local_158[iVar5 /*9*/].f_4)))
								{
									unk_0xCEAA091B490F8407(-1, func_389(Local_158[iVar5 /*9*/].f_4), Local_159.f_40[func_393(iVar0, iVar4, 2)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 2)]) != 255)
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_40[func_393(iVar0, iVar4, 2)]));
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_159.f_40[func_393(iVar0, iVar4, 2)]))
					{
						if (unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 2)]) > 0)
						{
							unk_0x4FB9A846E72E2F23(Local_159.f_40[func_393(iVar0, iVar4, 2)], floor(func_217(to_float(unk_0x81D9425174BF4F82(Local_159.f_40[func_393(iVar0, iVar4, 2)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_40[func_393(iVar0, iVar4, 2)]));
						}
					}
				}
				iVar4++;
			}
			if (!Local_116.f_5[iVar0])
			{
				Local_159.f_8[iVar0] = 1;
			}
			else
			{
				Local_159.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_174++;
	if (iLocal_174 >= Local_159.f_26)
	{
		iLocal_174 = 0;
	}
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_390(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 66.96f;
					
					case 1:
						return 0f, 0f, 66.96f;
					
					case 2:
						return 0f, 0f, 64.08f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 21.24f;
					
					case 1:
						return 0f, 0f, 15.48f;
					
					case 2:
						return 0f, 0f, 20.16f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -21.6f;
					
					case 1:
						return 0f, 0f, -25.56f;
					
					case 2:
						return 0f, 0f, -21.96f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -71.64f;
					
					case 1:
						return 0f, 0f, -70.2f;
					
					case 2:
						return 0f, 0f, -68.4f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 68.76f;
							
							case 1:
								return 0f, 0f, 68.76f;
							
							case 2:
								return 0f, 0f, 69.48f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 22.68f;
							
							case 1:
								return 0f, 0f, 21.96f;
							
							case 2:
								return 0f, 0f, 22.68f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.96f;
							
							case 1:
								return 0f, 0f, -23.04f;
							
							case 2:
								return 0f, 0f, -21.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -68.04f;
							
							case 1:
								return 0f, 0f, -69.84f;
							
							case 2:
								return 0f, 0f, -69.84f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 66.96f;
							
							case 1:
								return 0f, 0f, 66.96f;
							
							case 2:
								return 0f, 0f, 64.08f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 21.24f;
							
							case 1:
								return 0f, 0f, 15.48f;
							
							case 2:
								return 0f, 0f, 20.16f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.6f;
							
							case 1:
								return 0f, 0f, -25.56f;
							
							case 2:
								return 0f, 0f, -21.96f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -71.64f;
							
							case 1:
								return 0f, 0f, -70.2f;
							
							case 2:
								return 0f, 0f, -68.4f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_391(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						vVar1 = { 0.59535f, 0.200875f, 0f };
						break;
					
					case 1:
						vVar1 = { 0.51655f, 0.2268f, 0f };
						break;
					
					case 2:
						vVar1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						vVar1 = { 0.247825f, -0.123625f, 0f };
						break;
					
					case 1:
						vVar1 = { 0.2163f, -0.04745f, 0f };
						break;
					
					case 2:
						vVar1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						vVar1 = { -0.2804f, -0.109775f, 0f };
						break;
					
					case 1:
						vVar1 = { -0.2552f, -0.031225f, 0f };
						break;
					
					case 2:
						vVar1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						vVar1 = { -0.606975f, 0.249675f, 0f };
						break;
					
					case 1:
						vVar1 = { -0.529875f, 0.281425f, 0f };
						break;
					
					case 2:
						vVar1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.597825f, 0.20105f, 0f };
								break;
							
							case 1:
								vVar1 = { 0.5151f, 0.22775f, 0f };
								break;
							
							case 2:
								vVar1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.248425f, -0.126325f, 0f };
								break;
							
							case 1:
								vVar1 = { 0.2144f, -0.04415f, 0f };
								break;
							
							case 2:
								vVar1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.281f, -0.111875f, 0f };
								break;
							
							case 1:
								vVar1 = { -0.254775f, -0.029175f, 0f };
								break;
							
							case 2:
								vVar1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.61015f, 0.24815f, 0f };
								break;
							
							case 1:
								vVar1 = { -0.527375f, 0.283575f, 0f };
								break;
							
							case 2:
								vVar1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.59535f, 0.200875f, 0f };
								break;
							
							case 1:
								vVar1 = { 0.51655f, 0.2268f, 0f };
								break;
							
							case 2:
								vVar1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.247825f, -0.123625f, 0f };
								break;
							
							case 1:
								vVar1 = { 0.2163f, -0.04745f, 0f };
								break;
							
							case 2:
								vVar1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.2804f, -0.109775f, 0f };
								break;
							
							case 1:
								vVar1 = { -0.2552f, -0.031225f, 0f };
								break;
							
							case 2:
								vVar1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.606975f, 0.249675f, 0f };
								break;
							
							case 1:
								vVar1 = { -0.529875f, 0.281425f, 0f };
								break;
							
							case 2:
								vVar1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	if (!bParam4)
	{
		vVar1.z = fVar0;
	}
	else
	{
		vVar1.z = fVar0;
		switch (iParam0)
		{
			case 10:
			case 50:
			case 100:
			case 500:
			case 1000:
			case 5000:
			case 10000:
				vVar1.z = (vVar1.z + 0.004f);
				break;
			}
	}
	return vVar1;
}

int func_392(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return 2008414264;
			
			case 20:
				return 1800355615;
			
			case 30:
				return 1800355615;
			
			case 40:
				return 1800355615;
			
			case 50:
				return -598805089;
			
			case 60:
				return 1800355615;
			
			case 70:
				return 1800355615;
			
			case 80:
				return 1800355615;
			
			case 90:
				return 1800355615;
			
			case 100:
				return 441009964;
			
			case 150:
				return 756786151;
			
			case 200:
				return -2091114748;
			
			case 250:
				return 756786151;
			
			case 300:
				return -2091114748;
			
			case 350:
				return 756786151;
			
			case 400:
				return -2091114748;
			
			case 450:
				return 756786151;
			
			case 500:
				return 1267915316;
			
			case 1000:
				return -1188651171;
			
			case 1500:
				return -1416097063;
			
			case 2000:
				return -1556060499;
			
			case 2500:
				return -1416097063;
			
			case 3000:
				return -1556060499;
			
			case 3500:
				return -1416097063;
			
			case 4000:
				return -1556060499;
			
			case 4500:
				return -1416097063;
			
			case 5000:
				return -1507232097;
			
			case 6000:
				return -1556060499;
			
			case 7000:
				return -1556060499;
			
			case 8000:
				return -1556060499;
			
			case 9000:
				return -1556060499;
			
			case 10000:
				return 202221865;
			
			case 15000:
				return -1675008461;
			
			case 20000:
				return 1839526326;
			
			case 25000:
				return -1675008461;
			
			case 30000:
				return 1839526326;
			
			case 35000:
				return -1675008461;
			
			case 40000:
				return 1839526326;
			
			case 45000:
				return -1675008461;
			
			case 50000:
				return 1839526326;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return 2008414264;
			
			case 20:
				return 1800355615;
			
			case 30:
				return 1800355615;
			
			case 40:
				return 1800355615;
			
			case 50:
				return -598805089;
			
			case 60:
				return 1800355615;
			
			case 70:
				return 1800355615;
			
			case 80:
				return 1800355615;
			
			case 90:
				return 1800355615;
			
			case 100:
				return 441009964;
			
			case 150:
				return 756786151;
			
			case 200:
				return -2091114748;
			
			case 250:
				return 756786151;
			
			case 300:
				return -2091114748;
			
			case 350:
				return 756786151;
			
			case 400:
				return -2091114748;
			
			case 450:
				return 756786151;
			
			case 500:
				return 1267915316;
			
			case 1000:
				return -1188651171;
			
			case 1500:
				return -1416097063;
			
			case 2000:
				return -1556060499;
			
			case 2500:
				return -1416097063;
			
			case 3000:
				return -1556060499;
			
			case 3500:
				return -1416097063;
			
			case 4000:
				return -1556060499;
			
			case 4500:
				return -1416097063;
			
			case 5000:
				return 85802248;
			
			case 6000:
				return -1556060499;
			
			case 7000:
				return -1556060499;
			
			case 8000:
				return -1556060499;
			
			case 9000:
				return -1556060499;
			
			case 10000:
				return 2032220541;
			
			case 15000:
				return 1135563927;
			
			case 20000:
				return -1204079456;
			
			case 25000:
				return 1135563927;
			
			case 30000:
				return -1204079456;
			
			case 35000:
				return 1135563927;
			
			case 40000:
				return -1204079456;
			
			case 45000:
				return 1135563927;
			
			case 50000:
				return -1204079456;
			}
		
		default:
	}
	return 0;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_394()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_395(iVar0);
		unk_0x71199B01895C6202(iVar1);
		iVar0++;
	}
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2008414264;
		
		case 1:
			return -598805089;
		
		case 2:
			return 441009964;
		
		case 3:
			return 1267915316;
		
		case 4:
			return -1188651171;
		
		case 5:
			return -1507232097;
		
		case 6:
			return 202221865;
		
		case 7:
			return 1800355615;
		
		case 8:
			return 756786151;
		
		case 9:
			return -2091114748;
		
		case 10:
			return -1416097063;
		
		case 11:
			return -1556060499;
		
		case 12:
			return -1675008461;
		
		case 13:
			return 1839526326;
		
		case 14:
			return 85802248;
		
		case 15:
			return 1135563927;
		
		case 16:
			return 2032220541;
		
		case 17:
			return -1204079456;
		
		default:
	}
	return 0;
}

int func_396()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_395(iVar0);
		unk_0x523BCC9DC80CD82F(iVar1);
		if (!unk_0xB87F6CF6E5628C67(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_397()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 12);
}

int func_398()
{
	return func_399(8248, -1, 0);
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_400(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_400(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_137();
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

void func_401()
{
	if (Local_159.f_26 == 1)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_181))
		{
			iLocal_181 = unk_0x4B72871A3BE7B474(func_76(0), 1f, 618005505, 0, 0, 0);
		}
		else if (func_412() != func_411() && unk_0x757EF87A33649210())
		{
			if (unk_0xB02B5A3616555A54(iLocal_181) != func_402(func_412()))
			{
				unk_0x4EBF23A230F3B12C(iLocal_181, func_402(func_412()));
			}
		}
	}
	else
	{
		if (!unk_0xC844350D5D58C99A(iLocal_182))
		{
			iLocal_182 = unk_0x4B72871A3BE7B474(1133.74f, 266.6947f, -52.0409f, 1f, 618005505, 0, 0, 0);
		}
		else if (unk_0xB02B5A3616555A54(iLocal_182) != 3)
		{
			unk_0x4EBF23A230F3B12C(iLocal_182, 3);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_183))
		{
			iLocal_183 = unk_0x4B72871A3BE7B474(1148.74f, 251.6947f, -52.0409f, 1f, 618005505, 0, 0, 0);
		}
		else if (unk_0xB02B5A3616555A54(iLocal_183) != 3)
		{
			unk_0x4EBF23A230F3B12C(iLocal_183, 3);
		}
	}
}

int func_402(int iParam0)
{
	if (func_405(iParam0))
	{
		return 1;
	}
	else if (func_404(iParam0))
	{
		return 2;
	}
	else if (func_403(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_403(int iParam0)
{
	if (iParam0 != func_411())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 21);
	}
	return 0;
}

int func_404(int iParam0)
{
	if (iParam0 != func_411())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 20);
	}
	return 0;
}

int func_405(int iParam0)
{
	if (iParam0 != func_411())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 19);
	}
	return 0;
}

int func_406()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_159.f_5);
		unk_0x523BCC9DC80CD82F(iVar2);
		if (!unk_0xB87F6CF6E5628C67(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_407()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_159.f_5);
		unk_0x71199B01895C6202(iVar2);
		iVar0++;
	}
}

int func_408()
{
	if (unk_0x8CD06866876216F2() && unk_0xBFF81ED3B99522C7())
	{
		return 1;
	}
	return 0;
}

int func_409()
{
	return func_410(unk_0xD803B885F5E47A62());
}

int func_410(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

int func_411()
{
	return -1;
}

int func_412()
{
	return func_413(unk_0xD803B885F5E47A62());
}

int func_413(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_411())
	{
		return iParam0;
	}
	if (func_415(iParam0) != -1)
	{
		iVar0 = func_414(func_415(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_317(iParam0, 0))
			{
				return func_227(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_411();
		}
		return Global_2425662[iParam0 /*421*/].f_310.f_8;
	}
	return func_411();
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_415(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 1, 1))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && iParam0 == unk_0xD803B885F5E47A62()) && func_62(iParam0, 1, 0))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5;
		}
	}
	return -1;
}

int func_416(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 4);
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_414(Global_2425662[iParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_414(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

bool func_419()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377.f_3, 2);
}

void func_420()
{
	if (Local_159.f_798 > 2)
	{
		if (Global_262145.f_26036)
		{
			unk_0x1787A8354D584871(&Local_168);
		}
	}
	if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
	{
		unk_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
	}
	if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		unk_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_375(0);
	func_407();
	func_394();
	func_423();
	func_422();
	if (unk_0xC844350D5D58C99A(Local_159.f_34))
	{
		unk_0xF690C84DADBB3551(&(Local_159.f_34));
	}
	if (Local_159.f_798 > 0)
	{
		unk_0x8D17794CE3273D70(func_45());
		unk_0x8D17794CE3273D70(func_78());
		unk_0x8D17794CE3273D70(func_92());
		unk_0x8D17794CE3273D70(func_231());
	}
	Global_1696046 = 0;
	func_421();
}

void func_421()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_422()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC844350D5D58C99A(Local_159.f_35[iVar0]))
		{
			if (unk_0xD59B17D2DFF98E26(Local_159.f_35[iVar0]))
			{
				unk_0x15AFB6CBDE990FB6(Local_159.f_35[iVar0], 1, true);
			}
			unk_0xF690C84DADBB3551(&(Local_159.f_35[iVar0]));
		}
		iVar0++;
	}
}

void func_423()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(Local_159.f_40[iVar1]))
		{
			unk_0xF690C84DADBB3551(&(Local_159.f_40[iVar1]));
		}
		iVar1++;
	}
}

int func_424()
{
	var uVar0;
	
	func_432(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_431())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_430())
	{
		return 1;
	}
	if (func_429(159))
	{
		if (!func_428())
		{
			return 1;
		}
	}
	if (func_429(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_425() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_425()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_425()
{
	switch (func_427())
	{
		case 0:
			return func_426();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_426()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_427()
{
	return Global_30768;
}

bool func_428()
{
	return Global_2450632.f_598;
}

int func_429(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_430()
{
	return Global_2460680;
}

bool func_431()
{
	return Global_2450632.f_593;
}

void func_432(var uParam0)
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
					func_433(iVar0);
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

void func_433(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_62(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_434(iVar2, &bVar3))
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

int func_434(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
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

void func_435()
{
	int iVar0;
	
	if (Global_1696039)
	{
		Global_1696039 = 0;
	}
	if (func_417(unk_0xD803B885F5E47A62()) && func_412() != func_411())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[func_412() /*421*/].f_310.f_4, 4))
		{
			Local_159.f_5 = 1;
		}
	}
	while (!(Global_2514396 != -1 || func_417(unk_0xD803B885F5E47A62())))
	{
		if (!unk_0x8CD06866876216F2())
		{
			func_420();
		}
		if (func_424())
		{
			func_420();
		}
		wait(0);
	}
	iVar0 = -1;
	if (func_417(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_439();
	}
	unk_0x37AD2AB54480FA6A(32, 0, iVar0);
	func_437(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_116, 633);
	unk_0x35B62793EAE9ADDF(&Local_158, 289);
	if (func_417(unk_0xD803B885F5E47A62()))
	{
		while (!unk_0x081C8BC5094A7B76(15))
		{
			wait(0);
		}
		Local_159.f_26 = 1;
		unk_0x991E101AF0F7523A(1);
		unk_0xE57F9AD44D9539F1(15);
	}
	else
	{
		while (!unk_0x081C8BC5094A7B76(45))
		{
			wait(0);
		}
		unk_0x991E101AF0F7523A(3);
		unk_0xE57F9AD44D9539F1(45);
	}
	if (!func_436())
	{
		func_420();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0);
	}
	else
	{
		func_420();
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		if (func_417(unk_0xD803B885F5E47A62()))
		{
			Local_116.f_15[0] = unk_0x09AC81E49EA267F7(0, 14);
		}
		else
		{
			Local_116.f_15[0] = Global_2514414[0];
			Local_116.f_15[1] = Global_2514414[1];
			Local_116.f_15[2] = Global_2514414[2];
			Local_116.f_15[3] = Global_2514414[3];
		}
	}
	Global_1696046 = 1;
}

int func_436()
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
		if (func_431())
		{
			return 0;
		}
		if (func_429(157))
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

int func_437(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_421();
			}
			else
			{
				return 0;
			}
		}
		if (!func_438())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0;
					}
				}
				if (func_431())
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0;
					}
				}
				if (func_429(157))
				{
					if (!bParam2)
					{
						func_421();
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
					func_421();
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
				func_421();
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
			func_421();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_438()
{
	return Global_1312854;
}

int func_439()
{
	var uVar0;
	
	uVar0 = Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_6;
	return uVar0;
}

