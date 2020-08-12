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
	struct<1652> Local_116 = { 0, 4, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<8> Local_125[32];
	struct<1583> Local_126 = { 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, -1, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<26> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135[4] = { 0, 0, 0, 0 };
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	bool bLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
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
	iLocal_136 = 1;
	func_442();
	while (true)
	{
		wait(0);
		if (func_431())
		{
			func_427();
		}
		if (Global_1696037)
		{
			Global_1696037 = 0;
			func_427();
		}
		if (Global_2405072.f_2672 && Global_2409287 != 0)
		{
			if (Global_2409287 != 6)
			{
				func_427();
			}
		}
		if (func_426() && unk_0x757EF87A33649210())
		{
			func_427();
		}
		if ((!func_425(unk_0xD803B885F5E47A62()) && !func_424(unk_0xD803B885F5E47A62())) && !func_423(unk_0xD803B885F5E47A62()))
		{
			func_427();
		}
		if (unk_0xA14BB9332558B949() && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_34, 7))
		{
			func_427();
		}
		if (func_424(unk_0xD803B885F5E47A62()) && func_419() != func_418())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[func_419() /*421*/].f_310.f_4, 1) && unk_0x757EF87A33649210())
			{
				func_427();
			}
		}
		if (func_424(unk_0xD803B885F5E47A62()) && func_416() != 0)
		{
			func_427();
		}
		iVar0 = 0;
		while (iVar0 < Local_126.f_257)
		{
			if (!func_415())
			{
				if (unk_0xE9F78D191AD5EDBA(Local_116.f_1595[iVar0]) && unk_0x526BC32A660C89E6(Local_116.f_1595[iVar0]))
				{
					unk_0x866EE3B81CEF363A(Local_116.f_1595[iVar0], 1);
				}
			}
			iVar0++;
		}
		func_86();
		if (func_415())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_85();
	func_82();
	func_75();
	iVar0 = 0;
	while (iVar0 < Local_126.f_257)
	{
		switch (Local_116.f_1520[iVar0])
		{
			case 0:
				if (Global_2514395 != iVar0 && (Global_2514395 != -1 || func_424(unk_0xD803B885F5E47A62())))
				{
					Local_116.f_1560[iVar0] = 1;
					func_74(&(Local_116.f_1[iVar0 /*211*/]));
					func_73(1, iVar0);
				}
				break;
			
			case 1:
				if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar0])))
				{
					if (unk_0x526BC32A660C89E6(Local_116.f_1595[iVar0]))
					{
						Local_116.f_1590[iVar0] = unk_0xF958843510932FF6(Local_116.f_1580[iVar0]);
						if (Local_116.f_1590[iVar0] != -1)
						{
							if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar0]), func_72(), func_71(iVar0), 3))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iVar0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar0]), 2116425869))
								{
									Local_116.f_1580[iVar0] = unk_0xF66E5A439A080021(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_72(), func_68(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iVar0]);
								}
							}
							else if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iVar0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar0]), 2116425869))
							{
								Local_116.f_1580[iVar0] = unk_0xF66E5A439A080021(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, 0, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_72(), func_71(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iVar0]);
							}
						}
					}
					else
					{
						unk_0x8D30F6387EE75385(Local_116.f_1595[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_116.f_1600[(iVar0 * 4 + iVar1)] != func_418() && Global_2514395 != iVar0) && (Global_2514395 != -1 || func_424(unk_0xD803B885F5E47A62())))
					{
						func_73(2, iVar0);
						Local_116.f_1585[iVar0] = iVar1;
						func_67(&(Local_116.f_1651[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar0])))
				{
					if (func_66(&(Local_116.f_1651[iVar0 /*2*/])) && func_65(&(Local_116.f_1651[iVar0 /*2*/]), 2000, 0))
					{
						Local_116.f_1580[iVar0] = unk_0xF66E5A439A080021(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, 1, false, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_72(), func_64(iVar0, Local_116.f_1585[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_116.f_1580[iVar0]);
						func_63(&(Local_116.f_1651[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<9> Var11;
	
	bVar5 = false;
	if (Local_116.f_1515[iParam0] > 4 && Local_116.f_1515[iParam0] < 9)
	{
		bVar5 = true;
	}
	if ((!func_62(iParam0, bVar5) || Global_2514395 == iParam0) || Local_116.f_1530[iParam0])
	{
		Local_116.f_1530[iParam0] = 1;
		func_61(iParam0);
		return;
	}
	if (unk_0xE9F78D191AD5EDBA(Local_116.f_1595[iParam0]))
	{
		if (!unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
		{
			Local_116.f_1540[iParam0] = 0;
			unk_0x8D30F6387EE75385(Local_116.f_1595[iParam0]);
		}
		else if (!Local_116.f_1540[iParam0])
		{
			unk_0x866EE3B81CEF363A(Local_116.f_1595[iParam0], 0);
			Local_116.f_1540[iParam0] = 1;
		}
	}
	Local_116.f_1590[iParam0] = unk_0xF958843510932FF6(Local_116.f_1580[iParam0]);
	switch (Local_116.f_1515[iParam0])
	{
		case 0:
			func_60(1, iParam0);
			break;
		
		case 1:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (Local_125[iVar2 /*8*/] != 0 || Local_125[iVar2 /*8*/].f_5 != 0)
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				func_59(&(Local_116.f_1[iParam0 /*211*/]));
				func_60(2, iParam0);
			}
			break;
		
		case 2:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/].f_5, 0))
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				if ((unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]))) && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
				{
					Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_57(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
					func_47(4, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1);
				}
				func_60(3, iParam0);
			}
			break;
		
		case 3:
			bVar1 = true;
			if ((unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]))) && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
			{
				if ((Local_116.f_1590[iParam0] != -1 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_57(iParam0), 3)) && ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869)))
				{
					Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
				{
					if (Local_116.f_1590[iParam0] != -1)
					{
						if (Local_116.f_1570[iParam0] == 1)
						{
							if (((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
							}
						}
						else if (((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_46(iParam0, 0), 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_46(iParam0, 1), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_46(iParam0, 2), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_46(iParam0, 3), 3))
						{
							Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_45(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
						}
						else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
						{
							if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_68(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
							}
						}
						else if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
						{
							Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
						}
					}
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_116.f_1595[iParam0]);
				}
			}
			if (!func_66(&(Local_116.f_1642[iParam0 /*2*/])))
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
						{
							func_67(&(Local_116.f_1642[iParam0 /*2*/]), 0, 0);
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15) && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 16))
						{
							bVar1 = false;
						}
						else
						{
							iVar6++;
						}
					}
					iVar3++;
				}
				if (iVar6 > 0)
				{
					if (bVar1)
					{
						func_63(&(Local_116.f_1642[iParam0 /*2*/]));
						func_47(16, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1);
						func_60(4, iParam0);
					}
					else if (func_65(&(Local_116.f_1642[iParam0 /*2*/]), 15000, 0))
					{
						if (!func_44(iParam0, 22))
						{
							if (func_47(14, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
							{
								func_43(iParam0, 22);
							}
						}
					}
				}
				else
				{
					func_63(&(Local_116.f_1642[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_36(iParam0);
			break;
		
		case 5:
			if (func_35(Local_116.f_846[iParam0 /*13*/][1]) == 10 || func_35(Local_116.f_846[iParam0 /*13*/][1]) == 11)
			{
				if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
				{
					if (func_34(&(Local_116.f_846[iParam0 /*13*/]), 0) == 21)
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_33(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
							}
							else if (((Local_116.f_1590[iParam0] == -1 || unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
							{
								unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
								func_47(3, &(Local_116.f_1595[iParam0]), func_34(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								func_29(iParam0);
								func_60(9, iParam0);
							}
							else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
							{
								Local_116.f_1525[iParam0] = 1;
							}
						}
					}
					else if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
						{
							Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_28(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
							unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
						}
						else if (((Local_116.f_1590[iParam0] == -1 || unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
						{
							unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
							func_63(&(Local_116.f_1633[iParam0 /*2*/]));
							Local_116.f_1535[iParam0] = 0;
							func_60(6, iParam0);
						}
					}
				}
				else
				{
					func_63(&(Local_116.f_1633[iParam0 /*2*/]));
					Local_116.f_1535[iParam0] = 0;
					func_60(6, iParam0);
				}
			}
			else
			{
				func_63(&(Local_116.f_1633[iParam0 /*2*/]));
				Local_116.f_1535[iParam0] = 0;
				func_60(6, iParam0);
			}
			break;
		
		case 6:
			iVar3 = (iParam0 * 4 + Local_116.f_1575[iParam0]);
			iVar4 = Local_116.f_1600[iVar3];
			if (Local_116.f_1575[iParam0] < 4)
			{
				if ((iVar4 != func_418() && unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 15)) && !((!unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 14) && func_27(&(Local_116.f_899[iVar4 /*9*/])) == 21) && Local_116.f_899[iVar4 /*9*/].f_8 == 2))
				{
					if ((unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]))) && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], (0 + Local_116.f_1575[iParam0] * 3)))
						{
							if (((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_26(iParam0, Local_116.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), (0 + Local_116.f_1575[iParam0] * 3));
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], (1 + Local_116.f_1575[iParam0] * 3)))
						{
							if ((Local_116.f_1590[iParam0] != -1 && ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))) && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_26(iParam0, Local_116.f_1575[iParam0], iVar4), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_25(iParam0, Local_116.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 14) && (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 13) || unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 11)))
						{
							if (((((((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 1), 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 1), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 1), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 1), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 0), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 0), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 0), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_25(iParam0, Local_116.f_1575[iParam0], iVar4, 0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_23(iParam0);
								unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
							}
						}
						if (((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_25(iParam0, 0, iVar4, 0), 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_25(iParam0, 1, iVar4, 0), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_25(iParam0, 2, iVar4, 0), 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_25(iParam0, 3, iVar4, 0), 3))
						{
							if (!func_66(&(Local_116.f_1633[iParam0 /*2*/])))
							{
								func_67(&(Local_116.f_1633[iParam0 /*2*/]), 0, 0);
							}
							else if (func_65(&(Local_116.f_1633[iParam0 /*2*/]), 20000, 0))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_25(iParam0, Local_116.f_1575[iParam0], iVar4, 1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
							}
						}
						else
						{
							func_63(&(Local_116.f_1633[iParam0 /*2*/]));
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], (1 + Local_116.f_1575[iParam0] * 3)))
					{
						if ((unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 14) && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 13)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 11) && Local_116.f_1188[iVar4 /*9*/].f_8 > 2))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1565[iParam0], iVar4))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
								{
									if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
									{
										if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
										{
											Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_22(iParam0, Local_116.f_1575[iParam0]), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
											Local_116.f_1535[iParam0] = 0;
											func_15(func_21(iParam0, 0, Local_116.f_1575[iParam0], 1), Local_116.f_899[iVar4 /*9*/][1], 0, 0);
											unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
								{
									fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
									{
										if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
										{
											if (Local_116.f_899[iVar4 /*9*/].f_8 == 1)
											{
												Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
												unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
												Local_116.f_1535[iParam0] = 1;
												func_15(func_21(iParam0, Local_116.f_899[iVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else if (Local_116.f_1188[iVar4 /*9*/].f_8 == 1)
											{
												Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -4f, 13, 16, 1148846080, 0);
												unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_116.f_1188[iVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else
											{
												Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_25(iParam0, Local_116.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
												unk_0x5D96D8530B3D0904(&(Local_116.f_1565[iParam0]), iVar4);
												unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
												unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
												if (Local_116.f_899[iVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_899[iVar4 /*9*/][1] = uVar0;
													Local_116.f_899[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar4 /*9*/])), Local_116.f_899[iVar4 /*9*/].f_8, 0, -1);
												}
												if (Local_116.f_1188[iVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_1188[iVar4 /*9*/][1] = uVar0;
													Local_116.f_1188[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_1188[iVar4 /*9*/])), Local_116.f_1188[iVar4 /*9*/].f_8, 0, -1);
												}
											}
										}
									}
									else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 3))
									{
										if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
										{
											Local_116.f_1535[iParam0] = 1;
											if (Local_116.f_1188[iVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_1188[iVar4 /*9*/][1] = uVar0;
												Local_116.f_1188[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_1188[iVar4 /*9*/])), Local_116.f_1188[iVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 3))
									{
										if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
										{
											if (Local_116.f_899[iVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_899[iVar4 /*9*/][1] = uVar0;
												Local_116.f_899[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar4 /*9*/])), Local_116.f_899[iVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_22(iParam0, Local_116.f_1575[iParam0]), 3))
									{
										if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1345695206))
										{
											if (Local_116.f_899[iVar4 /*9*/].f_8 == 2)
											{
												Local_116 = Local_116.f_899[iVar4 /*9*/][1];
												Local_116.f_899[iVar4 /*9*/][1] = 0;
												Local_116.f_899[iVar4 /*9*/].f_8 = 1;
											}
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
										{
											if (Local_116.f_1188[iVar4 /*9*/].f_8 == 0)
											{
												Local_116.f_1188[iVar4 /*9*/][0] = Local_116;
												Local_116.f_1188[iVar4 /*9*/].f_8 = 1;
												Local_116.f_899[iVar4 /*9*/][1] = 0;
												Local_116.f_899[iVar4 /*9*/].f_8 = 1;
												unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
											}
											Local_116.f_1535[iParam0] = 1;
										}
									}
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 11))
							{
								if ((((func_27(&(Local_116.f_1188[iVar4 /*9*/])) < 21 && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 13)) && Local_116.f_1188[iVar4 /*9*/].f_8 <= 6) && Local_116.f_1188[iVar4 /*9*/].f_8 > 0) || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
								{
									if ((((((unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 5) && Local_116.f_1188[iVar4 /*9*/].f_8 == 2) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 6) && Local_116.f_1188[iVar4 /*9*/].f_8 == 3)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 7) && Local_116.f_1188[iVar4 /*9*/].f_8 == 4)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 8) && Local_116.f_1188[iVar4 /*9*/].f_8 == 5)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 9) && Local_116.f_1188[iVar4 /*9*/].f_8 == 6)) || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
										{
											if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
											{
												if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
												{
													Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
													unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1148846080, 0);
													unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
													func_15(func_21(iParam0, Local_116.f_1188[iVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
													unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
												}
											}
										}
										else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
										{
											fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]);
											if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
											{
												if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
												{
													Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
													unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_25(iParam0, Local_116.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
													unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
													unk_0x5D96D8530B3D0904(&(Local_116.f_1565[iParam0]), iVar4);
													if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
													{
														func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
														Local_116.f_1188[iVar4 /*9*/][Local_116.f_1188[iVar4 /*9*/].f_8] = uVar0;
														Local_116.f_1188[iVar4 /*9*/].f_8++;
														func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_1188[iVar4 /*9*/])), Local_116.f_1188[iVar4 /*9*/].f_8, 0, -1);
														unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
													}
													unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
													unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
												}
											}
											else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
											{
												if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_1188[iVar4 /*9*/][Local_116.f_1188[iVar4 /*9*/].f_8] = uVar0;
													Local_116.f_1188[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_1188[iVar4 /*9*/])), Local_116.f_1188[iVar4 /*9*/].f_8, 0, -1);
													unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
												}
											}
										}
									}
									else if (!func_44(iParam0, 20))
									{
										if (func_47(2, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 20);
										}
									}
									else if (func_65(&(Local_116.f_1642[Local_125[iVar4 /*8*/].f_4 /*2*/]), 15000, 0))
									{
										if (!func_44(iParam0, 21))
										{
											if (func_47(15, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
											{
												func_43(iParam0, 21);
											}
										}
									}
								}
							}
							else if (Local_116.f_1188[iVar4 /*9*/].f_8 == 2 || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
								{
									if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
									{
										if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
										{
											Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
											func_15(func_21(iParam0, Local_116.f_1188[iVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 1);
											unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
								{
									fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
									{
										if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
										{
											Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_25(iParam0, Local_116.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_1565[iParam0]), iVar4);
											if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_1188[iVar4 /*9*/][Local_116.f_1188[iVar4 /*9*/].f_8] = uVar0;
												Local_116.f_1188[iVar4 /*9*/].f_8++;
												unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
												func_23(iParam0);
												func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_1188[iVar4 /*9*/])), Local_116.f_1188[iVar4 /*9*/].f_8, 0, -1);
											}
											unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
											unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
										}
									}
									else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
										{
											func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
											Local_116.f_1188[iVar4 /*9*/][Local_116.f_1188[iVar4 /*9*/].f_8] = uVar0;
											Local_116.f_1188[iVar4 /*9*/].f_8++;
											unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
											func_23(iParam0);
											func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_1188[iVar4 /*9*/])), Local_116.f_1188[iVar4 /*9*/].f_8, 0, -1);
										}
									}
								}
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 10))
						{
							if ((((func_27(&(Local_116.f_899[iVar4 /*9*/])) < 21 && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 12)) && Local_116.f_899[iVar4 /*9*/].f_8 <= 6) && Local_116.f_899[iVar4 /*9*/].f_8 > 0) || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								if ((((((unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0) && Local_116.f_899[iVar4 /*9*/].f_8 == 2) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 1) && Local_116.f_899[iVar4 /*9*/].f_8 == 3)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 2) && Local_116.f_899[iVar4 /*9*/].f_8 == 4)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 3) && Local_116.f_899[iVar4 /*9*/].f_8 == 5)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 4) && Local_116.f_899[iVar4 /*9*/].f_8 == 6)) || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
									{
										if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
										{
											if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
											{
												Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
												unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_116.f_899[iVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
												unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
											}
										}
									}
									else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
									{
										fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]);
										if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
										{
											if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
											{
												if (((!unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 10) && func_27(&(Local_116.f_899[iVar4 /*9*/])) < 21) && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 12)) && Local_116.f_899[iVar4 /*9*/].f_8 <= 6)
												{
													Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
													unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_25(iParam0, Local_116.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
													unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
												}
												unk_0x5D96D8530B3D0904(&(Local_116.f_1565[iParam0]), iVar4);
												if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_899[iVar4 /*9*/][Local_116.f_899[iVar4 /*9*/].f_8] = uVar0;
													Local_116.f_899[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar4 /*9*/])), Local_116.f_899[iVar4 /*9*/].f_8, 0, -1);
													unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
												}
												unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
												unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
											}
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
										{
											if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_899[iVar4 /*9*/][Local_116.f_899[iVar4 /*9*/].f_8] = uVar0;
												Local_116.f_899[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar4 /*9*/])), Local_116.f_899[iVar4 /*9*/].f_8, 0, -1);
												unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
											}
										}
									}
								}
								else if (!func_44(iParam0, 20))
								{
									if (func_47(2, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
									{
										func_43(iParam0, 20);
									}
								}
								else if (func_65(&(Local_116.f_1642[Local_125[iVar4 /*8*/].f_4 /*2*/]), 15000, 0))
								{
									if (!func_44(iParam0, 21))
									{
										if (func_47(15, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 21);
										}
									}
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_12(iParam0, Local_116.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
									func_23(iParam0);
									Local_116.f_1575[iParam0]++;
									Local_116.f_1535[iParam0] = 0;
									func_63(&(Local_116.f_1633[iParam0 /*2*/]));
									unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
									unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
							{
								fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_12(iParam0, Local_116.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
									func_23(iParam0);
									Local_116.f_1575[iParam0]++;
									Local_116.f_1535[iParam0] = 0;
									func_63(&(Local_116.f_1633[iParam0 /*2*/]));
									unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
									unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
								}
							}
						}
						else if (Local_116.f_899[iVar4 /*9*/].f_8 == 2 || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
									{
										Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
										unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
										func_15(func_21(iParam0, Local_116.f_899[iVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 1);
										unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
									}
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
							{
								fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
									{
										Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_12(iParam0, Local_116.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
										{
											func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
											Local_116.f_899[iVar4 /*9*/][Local_116.f_899[iVar4 /*9*/].f_8] = uVar0;
											Local_116.f_899[iVar4 /*9*/].f_8++;
											func_23(iParam0);
											func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar4 /*9*/])), Local_116.f_899[iVar4 /*9*/].f_8, 0, -1);
											unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
										}
										unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
										unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
										func_23(iParam0);
										Local_116.f_1575[iParam0]++;
										Local_116.f_1535[iParam0] = 0;
										func_63(&(Local_116.f_1633[iParam0 /*2*/]));
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar4 /*9*/][Local_116.f_899[iVar4 /*9*/].f_8] = uVar0;
										Local_116.f_899[iVar4 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar4 /*9*/])), Local_116.f_899[iVar4 /*9*/].f_8, 0, -1);
										unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
									}
								}
							}
						}
					}
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), (0 + Local_116.f_1575[iParam0] * 3));
					unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
					unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), (2 + Local_116.f_1575[iParam0] * 3));
					func_23(iParam0);
					Local_116.f_1575[iParam0]++;
					Local_116.f_1535[iParam0] = 0;
					func_63(&(Local_116.f_1633[iParam0 /*2*/]));
					unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
					unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
				}
			}
			if (Local_116.f_1575[iParam0] >= 4)
			{
				if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
				{
					if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
					{
						if (Local_116.f_1590[iParam0] != -1 && ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869)))
						{
							if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
							{
								unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
								func_60(7, iParam0);
							}
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
						func_60(7, iParam0);
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
					func_60(7, iParam0);
				}
			}
			break;
		
		case 7:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
				{
					if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
					{
						Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_11(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
						unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
					}
				}
				else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
				{
					if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
					{
						unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
						unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
						func_23(iParam0);
						func_47(3, &(Local_116.f_1595[iParam0]), func_34(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
						func_60(8, iParam0);
					}
					else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
					{
						Local_116.f_1525[iParam0] = 1;
					}
				}
			}
			else
			{
				unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
				unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
				func_23(iParam0);
				func_47(3, &(Local_116.f_1595[iParam0]), func_34(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
				func_60(8, iParam0);
			}
			break;
		
		case 8:
			Local_116.f_1525[iParam0] = 1;
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar3 = (iParam0 * 4 + iVar9);
				iVar4 = Local_116.f_1600[iVar3];
				if (iVar4 != func_418())
				{
					if (((((func_27(&(Local_116.f_899[iVar4 /*9*/])) == 21 && Local_116.f_899[iVar4 /*9*/].f_8 > 2) && Local_116.f_899[iVar4 /*9*/].f_8 < 7) || ((func_27(&(Local_116.f_1188[iVar4 /*9*/])) == 21 && Local_116.f_1188[iVar4 /*9*/].f_8 > 2) && Local_116.f_1188[iVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_116.f_899[iVar4 /*9*/])) < 21 && Local_116.f_899[iVar4 /*9*/].f_8 >= 2) && Local_116.f_899[iVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_116.f_1188[iVar4 /*9*/])) < 21 && Local_116.f_1188[iVar4 /*9*/].f_8 >= 2) && Local_116.f_1188[iVar4 /*9*/].f_8 < 7))
					{
						iVar8 = 1;
					}
				}
				iVar9++;
			}
			if (func_34(&(Local_116.f_846[iParam0 /*13*/]), 0) >= 17)
			{
				iVar8 = 0;
			}
			if (iVar8 || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
			{
				if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_10(iParam0, Local_116.f_846[iParam0 /*13*/].f_12), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
							func_15(func_9(iParam0, Local_116.f_846[iParam0 /*13*/].f_12), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 1, 0);
							unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
						}
					}
					else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
					{
						fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]);
						if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][Local_116.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_116.f_1595[iParam0]), func_34(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
							}
							unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
							unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 19);
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 19))
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][Local_116.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_116.f_1595[iParam0]), func_34(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 19);
							}
						}
					}
				}
			}
			else
			{
				func_29(iParam0);
				func_60(9, iParam0);
			}
			break;
		
		case 9:
			Var10 = 11;
			Var11 = 7;
			func_29(iParam0);
			if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 13))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
							unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
						}
					}
					else if ((Local_116.f_1590[iParam0] != -1 && ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))) && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
					{
						unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
						unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 13);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 14))
				{
					iVar3 = iParam0 * 4;
					iVar4 = Local_116.f_1600[iVar3];
					if (iVar4 != func_418() && iVar4 > -1)
					{
						if (Local_116.f_899[iVar4 /*9*/].f_8 > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
									unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 14);
									Local_116.f_899[iVar4 /*9*/] = { Var11 };
									Local_116.f_1188[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[iVar4 /*9*/] = { Var11 };
									Local_116.f_1188[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 14);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 14);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 15))
				{
					iVar3 = iParam0 * 4 + 1;
					iVar4 = Local_116.f_1600[iVar3];
					if (iVar4 != func_418() && iVar4 > -1)
					{
						if (Local_116.f_899[iVar4 /*9*/].f_8 > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
									unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 15);
									Local_116.f_899[iVar4 /*9*/] = { Var11 };
									Local_116.f_1188[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[iVar4 /*9*/] = { Var11 };
									Local_116.f_1188[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 15);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 15);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 16))
				{
					iVar3 = iParam0 * 4 + 2;
					iVar4 = Local_116.f_1600[iVar3];
					if (iVar4 != func_418() && iVar4 > -1)
					{
						if (Local_116.f_899[iVar4 /*9*/].f_8 > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
									unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 16);
									Local_116.f_899[iVar4 /*9*/] = { Var11 };
									Local_116.f_1188[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[iVar4 /*9*/] = { Var11 };
									Local_116.f_1188[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 16);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 16);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 17))
				{
					iVar3 = iParam0 * 4 + 3;
					iVar4 = Local_116.f_1600[iVar3];
					if (iVar4 != func_418() && iVar4 > -1)
					{
						if (Local_116.f_899[iVar4 /*9*/].f_8 > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
									unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 17);
									Local_116.f_899[iVar4 /*9*/] = { Var11 };
									Local_116.f_1188[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[iVar4 /*9*/] = { Var11 };
									Local_116.f_1188[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 17);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 17);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 18))
				{
					if (Local_116.f_846[iParam0 /*13*/].f_12 > 0 || unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], 12))
						{
							if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 12);
							}
						}
						else if (Local_116.f_1590[iParam0] != -1 && unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
							{
								if (Local_116.f_1570[iParam0] == 1)
								{
									Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								}
								else
								{
									Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								}
								unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 12);
								unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 18);
								Local_116.f_846[iParam0 /*13*/] = { Var10 };
							}
							else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1345695206))
							{
								Local_116.f_846[iParam0 /*13*/] = { Var10 };
							}
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), 18);
					}
				}
				else if (!func_66(&(Local_116.f_1642[iParam0 /*2*/])))
				{
					func_67(&(Local_116.f_1642[iParam0 /*2*/]), 0, 0);
				}
				else if (func_65(&(Local_116.f_1642[iParam0 /*2*/]), 1000, 0))
				{
					Local_116.f_1525[iParam0] = 0;
					Local_116.f_1575[iParam0] = 0;
					Local_116.f_1555[iParam0] = 0;
					Local_116.f_1565[iParam0] = 0;
					func_63(&(Local_116.f_1633[iParam0 /*2*/]));
					func_63(&(Local_116.f_1642[iParam0 /*2*/]));
					Local_116.f_1560[iParam0]++;
					func_60(1, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_own_cards_and_remove";
	}
	return "retrieve_own_cards_and_remove";
}

char* func_4(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_04";
	}
	return "retrieve_cards_player_04";
}

char* func_5(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_03";
	}
	return "retrieve_cards_player_03";
}

char* func_6(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_02";
	}
	return "retrieve_cards_player_02";
}

char* func_7(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_01";
	}
	return "retrieve_cards_player_01";
}

char* func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(&(Local_116.f_846[iParam0 /*13*/]));
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (iVar0 > 21)
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
		else if (iVar0 == 21)
		{
			switch (unk_0x09AC81E49EA267F7(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				}
			
			default:
		}
	}
	else if (iVar0 > 21)
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
	else if (iVar0 == 21)
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
			
			default:
		}
	}
	else
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
			}
		
		default:
	}
	return "";
}

int func_9(int iParam0, int iParam1)
{
	return (iParam0 * 11 + iParam1);
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam1 > 8)
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_10";
		}
		return "deal_card_self_card_10";
	}
	else if (iParam1 > 4)
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_06";
		}
		return "deal_card_self_card_06";
	}
	else
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_second_card";
		}
		return "deal_card_self_second_card";
	}
	return "deal_card_self_second_card";
}

char* func_11(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_turn_card";
	}
	return "turn_card";
}

char* func_12(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_418() && unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 14)) && !unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 13)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 11) && Local_116.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_outro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_outro_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_outro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_outro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_outro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_outro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_outro";
			
			case 1:
				return "dealer_focus_player_02_idle_outro";
			
			case 2:
				return "dealer_focus_player_03_idle_outro";
			
			case 3:
				return "dealer_focus_player_04_idle_outro";
			}
		
		default:
	}
	return "";
}

int func_13(var uParam0, var uParam1)
{
	if (uParam0->f_209 >= uParam0->f_210)
	{
		return 0;
	}
	*uParam1 = (*uParam0)[uParam0->f_209];
	uParam0->f_209++;
	return 1;
}

char* func_14(int iParam0, int iParam1, bool bParam2)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_second_card_player_01";
				
				case 1:
					return "female_hit_second_card_player_02";
				
				case 2:
					return "female_hit_second_card_player_03";
				
				case 3:
					return "female_hit_second_card_player_04";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_card_player_01";
				
				case 1:
					return "female_hit_card_player_02";
				
				case 2:
					return "female_hit_card_player_03";
				
				case 3:
					return "female_hit_card_player_04";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "hit_second_card_player_01";
			
			case 1:
				return "hit_second_card_player_02";
			
			case 2:
				return "hit_second_card_player_03";
			
			case 3:
				return "hit_second_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "hit_card_player_01";
			
			case 1:
				return "hit_card_player_02";
			
			case 2:
				return "hit_card_player_03";
			
			case 3:
				return "hit_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0 = 1624583700;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	unk_0xFB061A86A7AC749F(1, &Var0, 6, func_16(1, 1));
}

var func_16(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_20(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_17(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
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

int func_19()
{
	return Global_1312745;
}

int func_20(int iParam0, bool bParam1, bool bParam2)
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

int func_21(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return (((Local_126.f_257 * 7 * 4 + iParam0 * 7 * 4) + iParam2 * 7) + iParam1);
	}
	return ((iParam0 * 7 * 4 + iParam2 * 7) + iParam1);
}

char* func_22(int iParam0, int iParam1)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_split_card_player_01";
			
			case 1:
				return "female_split_card_player_02";
			
			case 2:
				return "female_split_card_player_03";
			
			case 3:
				return "female_split_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "split_card_player_01";
			
			case 1:
				return "split_card_player_02";
			
			case 2:
				return "split_card_player_03";
			
			case 3:
				return "split_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_23(int iParam0)
{
	unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 20);
	unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 21);
	unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 22);
	unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 23);
	unk_0x0674E58A79778E99(&(Local_116.f_1555[iParam0]), 24);
}

char* func_24(int iParam0, int iParam1, bool bParam2)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient_split";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient_split";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient_split";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient_split";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_split";
			
			case 1:
				return "dealer_focus_player_02_idle_split";
			
			case 2:
				return "dealer_focus_player_03_idle_split";
			
			case 3:
				return "dealer_focus_player_04_idle_split";
			}
		
		default:
	}
	return "";
}

char* func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (((iParam2 != func_418() && unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 14)) && !unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 13)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 11) && Local_116.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_impatient_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_impatient_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_impatient_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_impatient_split";
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_split";
					}
				
				default:
			}
		}
		else if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_split";
				
				case 1:
					return "dealer_focus_player_02_idle_split";
				
				case 2:
					return "dealer_focus_player_03_idle_split";
				
				case 3:
					return "dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle";
				
				case 1:
					return "female_dealer_focus_player_02_idle";
				
				case 2:
					return "female_dealer_focus_player_03_idle";
				
				case 3:
					return "female_dealer_focus_player_04_idle";
				}
			
			default:
		}
	}
	else if (bParam3)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle";
			
			case 1:
				return "dealer_focus_player_02_idle";
			
			case 2:
				return "dealer_focus_player_03_idle";
			
			case 3:
				return "dealer_focus_player_04_idle";
			}
		
		default:
	}
	return "";
}

char* func_26(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_418() && unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 14)) && !unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 13)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 11) && Local_116.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_intro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_intro_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_intro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_intro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_intro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_intro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_intro";
			
			case 1:
				return "dealer_focus_player_02_idle_intro";
			
			case 2:
				return "dealer_focus_player_03_idle_intro";
			
			case 3:
				return "dealer_focus_player_04_idle_intro";
			}
		
		default:
	}
	return "";
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar3 = func_35((*uParam0)[iVar2]);
		iVar0 = (iVar0 + iVar3);
		if (iVar3 == 11)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

char* func_28(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_check_card";
	}
	return "check_card";
}

void func_29(int iParam0)
{
	if (func_44(iParam0, 23))
	{
		return;
	}
	if (func_44(iParam0, 24))
	{
		if (func_47(13, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
		{
			func_43(iParam0, 23);
		}
		return;
	}
	if (func_30(iParam0))
	{
		func_43(iParam0, 24);
	}
	else
	{
		func_43(iParam0, 23);
	}
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (iParam0 * 4 + iVar0);
		iVar2 = Local_116.f_1600[iVar1];
		if (iVar2 == func_418())
		{
		}
		else if (!func_31(&iVar2, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 1;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 1;
	}
	iVar1 = func_34(&(Local_116.f_846[iParam1 /*13*/]), 0);
	iVar2 = Local_116.f_846[iParam1 /*13*/].f_12;
	iVar3 = func_27(&(Local_116.f_899[iVar0 /*9*/]));
	iVar4 = Local_116.f_899[iVar0 /*9*/].f_8;
	iVar5 = func_27(&(Local_116.f_1188[iVar0 /*9*/]));
	iVar6 = Local_116.f_1188[iVar0 /*9*/].f_8;
	if (func_32(iVar1, iVar2, iVar3, iVar4) && func_32(iVar1, iVar2, iVar5, iVar6))
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam3 <= 0)
	{
		return 1;
	}
	bVar0 = (iParam1 == 2 && iParam0 == 21);
	bVar1 = (iParam3 == 2 && iParam2 == 21);
	if (bVar1)
	{
		return 0;
	}
	if (bVar0)
	{
		return 1;
	}
	if (iParam0 > 21)
	{
		return 0;
	}
	if (iParam2 > 21)
	{
		return 1;
	}
	if (iParam3 >= 7)
	{
		return 0;
	}
	if (iParam0 > iParam2)
	{
		return 1;
	}
	return 0;
}

char* func_33(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_check_and_turn_card";
	}
	return "check_and_turn_card";
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (iParam1 && iVar2 == 0)
		{
		}
		else
		{
			iVar3 = func_35((*uParam0)[iVar2]);
			iVar0 = (iVar0 + iVar3);
			if (iVar3 == 11)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

int func_35(int iParam0)
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
		case 11:
		case 24:
		case 37:
		case 50:
		case 12:
		case 25:
		case 38:
		case 51:
		case 13:
		case 26:
		case 39:
		case 52:
			return 10;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 11;
		
		default:
	}
	return 0;
}

void func_36(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	switch (Local_116.f_1510[iParam0])
	{
		case 0:
			iVar2 = Local_116.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 0, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(1, iParam0);
			}
			break;
		
		case 1:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 1, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(2, iParam0);
			}
			break;
		
		case 2:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 2, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(3, iParam0);
			}
			break;
		
		case 3:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 3, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(4, iParam0);
			}
			break;
		
		case 4:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
				{
					if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_37(iParam0), 3))
					{
						Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_37(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
						func_15(func_9(iParam0, 0), 0, 1, 0);
					}
					else if (Local_116.f_1590[iParam0] != -1)
					{
						if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
						{
							bVar1 = true;
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][0] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
						{
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][0] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
					}
					else
					{
						bVar1 = true;
						if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
						{
							func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
							Local_116.f_846[iParam0 /*13*/][0] = uVar0;
							Local_116.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(5, iParam0);
			}
			break;
		
		case 5:
			iVar2 = Local_116.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 0, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(6, iParam0);
			}
			break;
		
		case 6:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 1, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(7, iParam0);
			}
			break;
		
		case 7:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 2, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(8, iParam0);
			}
			break;
		
		case 8:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 3, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_116.f_1595[iParam0]), func_27(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(9, iParam0);
			}
			break;
		
		case 9:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
				{
					if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_58(), func_10(iParam0, 0), 3))
					{
						Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 1, false, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_58(), func_10(iParam0, 0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
						func_15(func_9(iParam0, 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 1, 0);
					}
					else if (Local_116.f_1590[iParam0] != -1)
					{
						if ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869))
						{
							Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][1] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_116.f_1595[iParam0]), func_34(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
							bVar1 = true;
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 585557868))
						{
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][1] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_116.f_1595[iParam0]), func_34(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
						}
					}
					else
					{
						Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
						bVar1 = true;
						if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
						{
							func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
							Local_116.f_846[iParam0 /*13*/][1] = uVar0;
							Local_116.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
							func_47(3, &(Local_116.f_1595[iParam0]), func_34(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_41(0, iParam0);
				func_60(5, iParam0);
			}
			break;
	}
}

char* func_37(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_self";
	}
	return "deal_card_self";
}

char* func_38(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_04";
	}
	return "deal_card_player_04";
}

char* func_39(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_03";
	}
	return "deal_card_player_03";
}

char* func_40(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_02";
	}
	return "deal_card_player_02";
}

void func_41(int iParam0, int iParam1)
{
	Local_116.f_1510[iParam1] = iParam0;
}

char* func_42(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_01";
	}
	return "deal_card_player_01";
}

void func_43(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_116.f_1555[iParam0]), iParam1);
}

bool func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[iParam0], iParam1);
}

char* func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_46(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_46(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_46(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_46(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_116.f_1600[(iParam0 * 4 + iVar2)] != func_418())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_1550[iParam0] >= 7)
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

char* func_46(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_418())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_1550[iParam0] >= 7)
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

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	
	if (iParam0 == 3)
	{
		if (iParam2 > 21)
		{
			if (bParam4)
			{
				iParam0 = 12;
			}
			else
			{
				iParam0 = 0;
			}
		}
		else if (iParam2 == 21)
		{
			if (iParam3 == 2)
			{
				iParam0 = 1;
			}
		}
	}
	StringCopy(&cVar0, func_49(iParam0, iParam2, iParam5), 64);
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
	sVar2 = func_48(7);
	unk_0xC8B576D6F470FFC6(iVar1, &cVar0, sVar2, 1);
	return 1;
}

int func_48(int iParam0)
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

char* func_49(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_BJACK_DEALER_PLAYER_BUST";
		
		case 1:
			return "MINIGAME_BJACK_DEALER_BLACKJACK";
		
		case 2:
			return "MINIGAME_BJACK_DEALER_ANOTHER_CARD";
		
		case 3:
			return func_56(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 5:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 7:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 6:
			return func_50(iParam2);
		
		case 8:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 9:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 10:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 11:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 12:
			return "MINIGAME_DEALER_BUSTS";
		
		case 13:
			return "MINIGAME_DEALER_WINS";
		
		case 15:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 16:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		default:
	}
	return "";
}

char* func_50(int iParam0)
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
	if (!func_20(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x9539D44F3E4492F6(iVar1);
	if (func_54(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_52(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_51(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_51(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_125[*iParam0 /*8*/].f_4;
	return func_53(iVar0, Local_126.f_257);
}

int func_53(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_55(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
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

char* func_56(int iParam0)
{
	if (iParam0 <= 1 || iParam0 > 21)
	{
		return "";
	}
	switch (iParam0)
	{
		case 2:
			return "MINIGAME_BJACK_DEALER_2";
		
		case 3:
			return "MINIGAME_BJACK_DEALER_3";
		
		case 4:
			return "MINIGAME_BJACK_DEALER_4";
		
		case 5:
			return "MINIGAME_BJACK_DEALER_5";
		
		case 6:
			return "MINIGAME_BJACK_DEALER_6";
		
		case 7:
			return "MINIGAME_BJACK_DEALER_7";
		
		case 8:
			return "MINIGAME_BJACK_DEALER_8";
		
		case 9:
			return "MINIGAME_BJACK_DEALER_9";
		
		case 10:
			return "MINIGAME_BJACK_DEALER_10";
		
		case 11:
			return "MINIGAME_BJACK_DEALER_11";
		
		case 12:
			return "MINIGAME_BJACK_DEALER_12";
		
		case 13:
			return "MINIGAME_BJACK_DEALER_13";
		
		case 14:
			return "MINIGAME_BJACK_DEALER_14";
		
		case 15:
			return "MINIGAME_BJACK_DEALER_15";
		
		case 16:
			return "MINIGAME_BJACK_DEALER_16";
		
		case 17:
			return "MINIGAME_BJACK_DEALER_17";
		
		case 18:
			return "MINIGAME_BJACK_DEALER_18";
		
		case 19:
			return "MINIGAME_BJACK_DEALER_19";
		
		case 20:
			return "MINIGAME_BJACK_DEALER_20";
		
		case 21:
			return "MINIGAME_BJACK_DEALER_21";
		
		default:
	}
	return "";
}

char* func_57(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_place_bet_request";
	}
	return "place_bet_request";
}

char* func_58()
{
	return "anim_casino_b@amb@casino@games@blackjack@dealer";
}

void func_59(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_209 = 0;
	uParam0->f_210 = 208;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_210)
		{
			iVar1 = unk_0xA0A5F9CC633A6814(0, uParam0->f_210);
			uVar0 = (*uParam0)[iVar2];
			(*uParam0)[iVar2] = (*uParam0)[iVar1];
			(*uParam0)[iVar1] = uVar0;
			iVar2++;
		}
		iVar3++;
	}
}

void func_60(int iParam0, int iParam1)
{
	Local_116.f_1515[iParam1] = iParam0;
}

void func_61(int iParam0)
{
	struct<13> Var0;
	
	Local_116.f_1530[iParam0] = 1;
	if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iParam0])))
	{
		if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_1595[iParam0]))
			{
				Local_116.f_1590[iParam0] = unk_0xF958843510932FF6(Local_116.f_1580[iParam0]);
				if (Local_116.f_1590[iParam0] == -1 || ((unk_0xA45992A6CE82FB43(Local_116.f_1590[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), -1424880317)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), 2116425869)))
				{
					Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
				}
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_1595[iParam0]);
			}
			return;
		}
	}
	Local_116.f_1555[iParam0] = 0;
	Local_116.f_1565[iParam0] = 0;
	func_63(&(Local_116.f_1633[iParam0 /*2*/]));
	Var0 = 11;
	Local_116.f_846[iParam0 /*13*/] = { Var0 };
	Local_116.f_1525[iParam0] = 0;
	Local_116.f_1575[iParam0] = 0;
	func_63(&(Local_116.f_1642[iParam0 /*2*/]));
	func_73(1, iParam0);
	func_60(0, iParam0);
	func_41(0, iParam0);
	Local_116.f_1560[iParam0]++;
	Local_116.f_1530[iParam0] = 0;
}

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_418() && Local_116.f_899[Local_116.f_1600[(iParam0 * 4 + iVar1)] /*9*/].f_8 > 0)
			{
				iVar0++;
			}
		}
		else if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_418())
		{
			iVar0++;
		}
		iVar1++;
	}
	if (Local_116.f_1570[iParam0] != iVar0)
	{
		Local_116.f_1570[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_64(int iParam0, int iParam1)
{
	if (Local_116.f_1550[iParam0] >= 7)
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

int func_65(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_67(uParam0, bParam2, 0);
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

bool func_66(var uParam0)
{
	return uParam0->f_1;
}

void func_67(var uParam0, bool bParam1, bool bParam2)
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

char* func_68(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
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

float func_69(int iParam0)
{
	if (Local_126.f_257 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -134.69f;
			
			case 1:
				return 45.31f;
			
			case 2:
				return 135.31f;
			
			case 3:
				return 135.31f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_70(int iParam0)
{
	if (Local_126.f_257 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.837f, 269.747f, -52.8409f;
			
			case 1:
				return 1151.84f, 266.747f, -52.8409f;
			
			case 2:
				return 1129.406f, 262.3578f, -52.041f;
			
			case 3:
				return 1144.429f, 247.3352f, -52.041f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_71(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_72()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_73(int iParam0, int iParam1)
{
	Local_116.f_1520[iParam1] = iParam0;
}

void func_74(var uParam0)
{
	var uVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 208;
	iVar3 = 0;
	while (iVar3 < 208)
	{
		iVar1 = unk_0xA0A5F9CC633A6814(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 208)
		{
			iVar6 = (iVar4 / 32);
			iVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !unk_0xEAE0D21A50E6C7F4(uVar0[iVar6], iVar7))
			{
				unk_0x5D96D8530B3D0904(&(uVar0[iVar6]), iVar7);
				while (iVar4 + 1 > 52)
				{
					iVar4 = (iVar4 - 52);
				}
				(*uParam0)[iVar3] = iVar4 + 1;
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
	uParam0->f_210 = 208;
}

void func_75()
{
	int iVar0;
	
	if (!func_80(unk_0xD803B885F5E47A62()))
	{
		iVar0 = iLocal_160;
		if (Global_2514395 != iVar0 && (Global_2514395 != -1 || func_424(unk_0xD803B885F5E47A62())))
		{
			if (!unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar0]))
			{
				func_77(iVar0);
			}
		}
		else if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar0]))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_1595[iVar0]))
			{
				func_76(&(Local_116.f_1595[iVar0]));
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_1595[iVar0]);
			}
		}
	}
	iLocal_160++;
	if (iLocal_160 >= Local_126.f_257)
	{
		iLocal_160 = 0;
	}
}

void func_76(var uParam0)
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

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 337826907;
	if (Local_116.f_1550[iParam0] >= 7)
	{
		iVar0 = -1131233579;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	if (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		return;
	}
	unk_0x3F423BF5B8125A50(func_72());
	if (!unk_0xB4AE0788C1587752(func_72()))
	{
		return;
	}
	if (!unk_0xE5DBF9B6126856CA(Local_116.f_1595[iParam0]))
	{
		if (unk_0xA3FA8B6D2780D661(1))
		{
			iVar1 = unk_0x36F2404464202779(26, iVar0, func_70(iParam0), func_69(iParam0), 1, true);
			unk_0x71199B01895C6202(iVar0);
			unk_0x98868AF51859FC75(iVar1, 0);
			unk_0x20EC6650986ACDC7(iVar1, 0);
			unk_0x11AD11297DC58CC7(iVar1, 1);
			unk_0x9DD8618CA5BF832D(iVar1, 249, 1);
			unk_0x4E885A246A9D983A(iVar1, 185, true);
			unk_0x4E885A246A9D983A(iVar1, 108, true);
			unk_0x271603AF9C0C7EB3(iVar1, 1);
			unk_0xC3BED1CE092AB15D(iVar1, 1);
			unk_0xC978532B427F303B(iVar1, 0);
			unk_0x004A9F3F2E1E4B43(iVar1, 1);
			unk_0xF4CB0B98F8F79D8D(iVar1, 0);
			unk_0x4E885A246A9D983A(iVar1, 208, true);
			unk_0x46CB381A452EF99D(iVar1, 0);
			func_79(Local_116.f_1550[iParam0], &iVar1);
			func_78(Local_116.f_1550[iParam0], &iVar1);
			unk_0x08841CDB215AE18F(iVar1, func_70(iParam0), 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(iVar1, func_69(iParam0));
			Local_116.f_1595[iParam0] = unk_0xE8C9CB886096272A(iVar1);
			unk_0x866EE3B81CEF363A(Local_116.f_1595[iParam0], 0);
			Local_116.f_1540[iParam0] = 1;
			Local_116.f_1580[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, 0, true, 1065353216, 0, 1065353216);
			unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_72(), func_71(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
			unk_0x914E6894744915F8(Local_116.f_1580[iParam0]);
			unk_0x8D17794CE3273D70(func_58());
		}
	}
}

void func_78(int iParam0, int iParam1)
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

void func_79(int iParam0, int iParam1)
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

int func_80(int iParam0)
{
	if (iParam0 != func_418() && func_20(iParam0, 1, 1))
	{
		if (func_81(iParam0) && !func_423(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (iParam0 != func_418() && func_20(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return 0;
}

void func_82()
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	
	Var0 = 7;
	bVar1 = false;
	iVar2 = iLocal_159;
	if (Local_125[iVar2 /*8*/].f_4 == -1)
	{
		Local_116.f_899[iVar2 /*9*/] = { Var0 };
		Local_116.f_1188[iVar2 /*9*/] = { Var0 };
	}
	if (Local_125[iVar2 /*8*/].f_6 == 0)
	{
		if (Local_116.f_1477[iVar2] != 0)
		{
			Local_116.f_1477[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_83(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_159++;
	if (iLocal_159 >= 32)
	{
		iLocal_159 = 0;
	}
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_415())
	{
		return 0;
	}
	iVar0 = unk_0xF4FB3A22FC4991C8(iParam0);
	if (!unk_0x81A93C8315C28F58(iVar0))
	{
		return 0;
	}
	iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
	if (!func_20(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_125[iParam0 /*8*/].f_6.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 1)
	{
		if (func_47(6, &(Local_116.f_1595[iVar2]), -1, 0, 0, iParam0))
		{
			func_84(iParam0, 1);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 2)
	{
		if (func_47(7, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 2);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 4)
	{
		if (func_47(8, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 4);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 5)
	{
		if (func_47(9, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 5);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 6)
	{
		if (func_47(10, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 6);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 7)
	{
		if (func_47(11, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0, int iParam1)
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
	unk_0x5D96D8530B3D0904(&(Local_116.f_1477[iParam0]), iVar0);
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_158;
	if (Local_116.f_1600[iVar0] != func_418())
	{
		iVar1 = Local_116.f_1600[iVar0];
		if (((!func_20(Local_116.f_1600[iVar0], 1, 1) || Local_125[iVar1 /*8*/].f_3 == -1) || Local_125[iVar1 /*8*/].f_3 != iVar0) || !unk_0xFB75B0F82CA525F6(Local_116.f_1600[iVar0]))
		{
			Local_116.f_1600[iVar0] = func_418();
			if (Local_116.f_1477[iVar0] != 0)
			{
				Local_116.f_1477[iVar0] = 0;
			}
		}
	}
	if (func_20(iVar0, 1, 1) && unk_0xFB75B0F82CA525F6(iVar0))
	{
		if (Local_125[iVar0 /*8*/].f_3 > -1 && Local_125[iVar0 /*8*/].f_3 < 32)
		{
			if (Local_116.f_1600[Local_125[iVar0 /*8*/].f_3] == func_418())
			{
				if (func_20(unk_0x117658E336116132(iVar0), 1, 1))
				{
					Local_116.f_1600[Local_125[iVar0 /*8*/].f_3] = unk_0x117658E336116132(iVar0);
				}
			}
		}
	}
	iLocal_158++;
	if (iLocal_158 >= 32)
	{
		iLocal_158 = 0;
	}
}

void func_86()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<21> Var6;
	vector3 vVar7;
	
	func_412();
	if (!Local_126.f_236)
	{
		if (func_424(unk_0xD803B885F5E47A62()) && func_419() != func_418())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[func_419() /*421*/].f_310.f_4, 4))
			{
				Local_126.f_236 = 1;
				func_411();
				func_410();
				iLocal_153 = 1;
			}
		}
	}
	else if (iLocal_153)
	{
		if (func_409())
		{
			iLocal_153 = 0;
		}
	}
	func_405();
	func_400();
	Local_126.f_248 = func_397();
	func_378();
	if (Local_126.f_1 > 2)
	{
		unk_0x38C3A68D7861DCFD(2, 210, 1);
		unk_0x558EC149EB2BC0A2(2, 210);
		unk_0x38C3A68D7861DCFD(2, 26, 1);
		if (unk_0x9A01369A10646AFE(2, 210))
		{
		}
		if (func_377(Local_126.f_247) >= 0 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), func_70(func_377(Local_126.f_247)), true) > 5f)
		{
			func_371(0);
		}
	}
	if (Local_126.f_1 > 5)
	{
		unk_0x3FC8DBCC154CA56B();
		unk_0xB8E3919889462ACD();
		unk_0x5024DE80A08E9E70(19);
		func_369(1);
		func_368(1, 0);
	}
	if (Local_126.f_1 > 6)
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
	if (Local_126.f_1 > 7)
	{
		func_364(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]));
	}
	if (func_363())
	{
		bLocal_155 = true;
	}
	else if (bLocal_155)
	{
		func_362(&uLocal_156, 0, 0);
		bLocal_155 = false;
	}
	else if (func_66(&uLocal_156) && func_65(&uLocal_156, 500, 0))
	{
		func_63(&uLocal_156);
	}
	switch (Local_126.f_1)
	{
		case 0:
			if (func_361())
			{
				Local_126.f_1582 = "idle_cardgames";
				Local_126.f_252 = 0;
				Local_125[unk_0xD803B885F5E47A62() /*8*/] = 0;
				Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 = -1;
				Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 = -1;
				Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5 = 0;
				func_360(unk_0xD803B885F5E47A62());
				func_359(1);
			}
			break;
		
		case 1:
			switch (func_377(Local_126.f_247))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_126.f_245 = 5000;
					Local_126.f_246 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_126.f_245 = 50000;
					Local_126.f_246 = 1000;
					break;
			}
			if (Local_126.f_257 == 1)
			{
				bVar0 = true;
				Local_126.f_245 = 50000;
				Local_126.f_246 = 1000;
			}
			Local_126.f_244 = Local_126.f_246;
			if ((((((((((((((((((((((((!Global_262145.f_26162 && !(Global_262145.f_26164 && !bVar0)) && !(Global_262145.f_26163 && bVar0)) && ((func_358(1581559923) || func_358(272405600)) || func_424(unk_0xD803B885F5E47A62()))) && func_356(unk_0x16F2683693E537C9(), func_357(Local_126.f_247), 1.5f)) && func_351(unk_0x16F2683693E537C9(), func_355(Local_126.f_247), 40f)) && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0) && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0) && !unk_0xEAE0D21A50E6C7F4(Global_1676377.f_4, 2)) && !Global_2405072.f_2672) && Global_2514395 != func_377(Local_126.f_247)) && (Global_2514395 != -1 || func_424(unk_0xD803B885F5E47A62()))) && func_350()) && !func_344()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && func_341(unk_0x16F2683693E537C9()) <= 9) && !Global_2405072.f_2672) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_340()) && !func_339()) && !func_337()) && !Global_2460715.f_12) && Global_1676371 != 31) && !func_336())
			{
				func_359(2);
			}
			else
			{
				Local_126.f_247++;
				if (Local_126.f_247 >= Local_126.f_257 * 4)
				{
					Local_126.f_247 = 0;
				}
			}
			break;
		
		case 2:
			func_335();
			func_360(unk_0xD803B885F5E47A62());
			if (((((((((((((((((((((func_358(1581559923) || func_358(272405600)) || func_424(unk_0xD803B885F5E47A62())) && func_356(unk_0x16F2683693E537C9(), func_357(Local_126.f_247), 1.5f)) && func_351(unk_0x16F2683693E537C9(), func_355(Local_126.f_247), 40f)) && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0) && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0) && Global_2514395 != func_377(Local_126.f_247)) && (Global_2514395 != -1 || func_424(unk_0xD803B885F5E47A62()))) && func_350()) && !func_344()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && func_341(unk_0x16F2683693E537C9()) <= 9) && !Global_2405072.f_2672) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_340()) && !func_339()) && !func_337()) && !Global_2460715.f_12) && Global_1676371 != 31) && !func_336())
			{
				if ((((((func_20(unk_0xD803B885F5E47A62(), 1, 1) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_334()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !bLocal_155) && !func_66(&uLocal_156))
				{
					if (func_332(1, &uVar1))
					{
						if (!func_331("BJACK_NA"))
						{
							func_330("BJACK_NA");
						}
					}
					else if (Local_116.f_1600[Local_126.f_247] != func_418())
					{
						if (!func_331("BJACK_USED"))
						{
							func_330("BJACK_USED");
						}
					}
					else if (func_329())
					{
						if (func_325() == 2)
						{
							if (!func_331("CAS_MG_CTIME"))
							{
								func_330("CAS_MG_CTIME");
							}
						}
						else if (!func_331("CAS_MG_CBAN"))
						{
							func_330("CAS_MG_CBAN");
						}
					}
					else if ((!func_324(unk_0xD803B885F5E47A62()) && (func_377(Local_126.f_247) == 2 || func_377(Local_126.f_247) == 3)) && !(func_323(1) && func_324(func_322())))
					{
						if (!func_331("CAS_MG_SUITE2"))
						{
							func_330("CAS_MG_SUITE2");
						}
					}
					else if (!func_321() && !(func_323(1) && func_320(func_322())))
					{
						if (!func_318("CAS_MG_MEMB2", func_319(1)))
						{
							func_317("CAS_MG_MEMB2", func_319(1));
						}
						else if (unk_0xBFC0798A6E3417F9(2, 52))
						{
							unk_0xA37A90C62806D848(1);
							func_316();
							func_359(3);
						}
					}
					else if (Local_126.f_248 <= 0)
					{
						if (func_424(unk_0xD803B885F5E47A62()))
						{
							if (!func_331("CAS_MG_NOCHIPS6"))
							{
								func_330("CAS_MG_NOCHIPS6");
							}
						}
						else if (!func_331("CAS_MG_NOCHIPS2"))
						{
							func_330("CAS_MG_NOCHIPS2");
						}
					}
					else if (Local_126.f_248 < Local_126.f_246)
					{
						if (func_424(unk_0xD803B885F5E47A62()))
						{
							if (!func_331("CAS_MG_LOWCHIPS6"))
							{
								func_330("CAS_MG_LOWCHIPS6");
							}
						}
						else if (!func_331("CAS_MG_LOWCHIPS2"))
						{
							func_330("CAS_MG_LOWCHIPS2");
						}
					}
					else if (Local_126.f_259 == -1)
					{
						if (func_315())
						{
							unk_0xA37A90C62806D848(1);
						}
						if (((!func_324(unk_0xD803B885F5E47A62()) && (func_377(Local_126.f_247) == 2 || func_377(Local_126.f_247) == 3)) && !(func_323(1) && func_324(func_322()))) || (!func_321() && (func_323(1) && func_320(func_322()))))
						{
							if (func_312(func_322()) == 1)
							{
								Local_126.f_256 = 1;
								func_311(&(Local_126.f_259), 4, "BJACK_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_310(func_322()))
							{
								Local_126.f_256 = 2;
								func_311(&(Local_126.f_259), 4, "BJACK_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_126.f_256 = 3;
								func_311(&(Local_126.f_259), 4, "BJACK_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_126.f_256 = 0;
							func_311(&(Local_126.f_259), 4, "BJACK_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_309(Local_126.f_259, 1))
					{
						func_307(&(Local_126.f_259));
						Local_126.f_259 = -1;
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, true);
						func_306();
						func_296(unk_0xD803B885F5E47A62(), 0, 1048832, 0);
						if (unk_0xA4FD7964FEE91ED8(0) == 4 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
						}
						func_359(4);
					}
				}
				else
				{
					if (func_315())
					{
						unk_0xA37A90C62806D848(1);
					}
					if (Local_126.f_259 != -1)
					{
						func_307(&(Local_126.f_259));
						Local_126.f_259 = -1;
					}
					Local_126.f_247 = 0;
					func_359(1);
				}
			}
			else
			{
				if (func_315())
				{
					unk_0xA37A90C62806D848(1);
				}
				if (Local_126.f_259 != -1)
				{
					func_307(&(Local_126.f_259));
					Local_126.f_259 = -1;
				}
				Local_126.f_247 = 0;
				func_359(1);
			}
			break;
		
		case 3:
			if (!func_295())
			{
				func_359(2);
			}
			break;
		
		case 4:
			func_369(1);
			sVar2 = "CasinoUI_Cards_Blackjack";
			if ((func_377(Local_126.f_247) == 2 || func_377(Local_126.f_247) == 3) || func_424(unk_0xD803B885F5E47A62()))
			{
				sVar2 = "CasinoUI_Cards_Blackjack_High";
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1676377.f_5, 21))
			{
				func_362(&(Local_126.f_1578), 0, 0);
				func_294(Local_126.f_247);
				if (unk_0xA4FD7964FEE91ED8(0) == 4)
				{
					func_296(unk_0xD803B885F5E47A62(), 0, 0, 0);
				}
				else
				{
					func_296(unk_0xD803B885F5E47A62(), 0, 256, 0);
				}
				func_359(5);
			}
			else
			{
				unk_0x0D3BE1DE0262A012(sVar2, false);
				if (func_292(0, -1, 0) && unk_0x27117E2CDD4D67C3(sVar2))
				{
					if (!iLocal_154)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
						func_291(0, 0);
						func_289(1, sVar2, sVar2);
						func_288("BJACK_TITLE");
						func_287(-1, 1, 1);
						func_286("BJACK_DIS", 0, 0);
						func_285("BJACK_DIS1");
						func_285("BJACK_DIS2");
						func_285("BJACK_DIS3");
						func_284(202, "BJACK_EXIT", -1);
						func_284(201, "BJACK_CONT", -1);
						iLocal_154 = 1;
					}
					func_246(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (unk_0x9A01369A10646AFE(2, 202))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_243(1, -1);
					unk_0xF5A41F3D3B38EFE3(sVar2);
					iLocal_154 = 0;
					func_234();
				}
				else if (unk_0x9A01369A10646AFE(2, 201))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_243(1, -1);
					unk_0xF5A41F3D3B38EFE3(sVar2);
					iLocal_154 = 0;
					unk_0x5D96D8530B3D0904(&(Global_1676377.f_5), 21);
					func_362(&(Local_126.f_1578), 0, 0);
					func_294(Local_126.f_247);
					if (unk_0xA4FD7964FEE91ED8(0) == 4)
					{
						func_296(unk_0xD803B885F5E47A62(), 0, 0, 0);
					}
					else
					{
						func_296(unk_0xD803B885F5E47A62(), 0, 256, 0);
					}
					func_359(5);
				}
			}
			break;
		
		case 5:
			if ((((func_233(Local_126.f_247) && !func_333()) && !func_363()) && func_350()) && !func_344())
			{
				func_63(&(Local_126.f_1578));
				unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 2);
				func_224(1);
				func_359(6);
			}
			else
			{
				if (func_333())
				{
					func_234();
				}
				if (func_363())
				{
					func_234();
				}
				if (func_223(Local_126.f_247))
				{
					func_234();
				}
				if (func_222())
				{
					func_234();
				}
				if (!func_350())
				{
					func_234();
				}
				if (func_344())
				{
					func_234();
				}
			}
			break;
		
		case 6:
			if (!func_333() && !func_363())
			{
				if (func_221())
				{
					if (unk_0xA4FD7964FEE91ED8(0) == 1 || unk_0xA4FD7964FEE91ED8(0) == 2)
					{
						unk_0x398B6B43792F03FE(0, 0);
					}
					fVar3 = func_219(unk_0x16F2683693E537C9(), func_220(Local_126.f_247, 0), 1);
					fVar4 = func_219(unk_0x16F2683693E537C9(), func_220(Local_126.f_247, 1), 1);
					fVar5 = func_219(unk_0x16F2683693E537C9(), func_220(Local_126.f_247, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_126.f_251 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_126.f_251 = 2;
					}
					else
					{
						Local_126.f_251 = 0;
					}
					unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), func_220(Local_126.f_247, Local_126.f_251), 1f, 5000, func_218(Local_126.f_247, Local_126.f_251), 0.01f);
					func_359(7);
				}
			}
			else
			{
				func_234();
			}
			break;
		
		case 7:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 0)
			{
				Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_126.f_247), func_217(Local_126.f_247), 2, 1, false, 1065353216, 0, 1065353216);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_216(), func_215(Local_126.f_251), 2f, -2f, 13, 16, 2f, 0);
				unk_0x914E6894744915F8(Local_126.f_255);
				Local_125[unk_0xD803B885F5E47A62() /*8*/].f_6.f_1 = Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4;
				func_359(8);
			}
			break;
		
		case 8:
			unk_0xA78CDFD1AE3130A9(-2124244681);
			Local_126.f_258 = unk_0xF958843510932FF6(Local_126.f_255);
			if (func_214())
			{
				func_213(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 2);
			}
			else
			{
				func_213(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 1);
			}
			if (Local_126.f_258 != -1)
			{
				if ((unk_0xA45992A6CE82FB43(Local_126.f_258) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 2038294702)) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317))
				{
					Local_126.f_1582 = "idle_cardgames";
					Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_126.f_247), func_217(Local_126.f_247), 2, 1, false, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_216(), Local_126.f_1582, 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_126.f_255);
					func_296(unk_0xD803B885F5E47A62(), 0, 256, 0);
					Local_132 = { Var6 };
					if (func_424(unk_0xD803B885F5E47A62()))
					{
						Local_132 = 1695074466;
					}
					else if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 == 2 || Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 == 3)
					{
						Local_132 = 1952785842;
					}
					else
					{
						Local_132 = -1125105727;
					}
					Local_132.f_1 = Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4;
					Local_132.f_6 = 1;
					if (func_324(unk_0xD803B885F5E47A62()))
					{
						Local_132.f_15 = 1983458449;
					}
					else if (func_321())
					{
						Local_132.f_15 = 1334658487;
					}
					else if (func_323(1) && (func_324(func_322()) || func_211(unk_0xD803B885F5E47A62())))
					{
						Local_132.f_15 = 980726932;
					}
					else
					{
						Local_132.f_15 = 939907746;
					}
					func_362(&uLocal_129, 0, 0);
					func_210();
					Local_126.f_249 = func_397();
					func_359(9);
				}
			}
			break;
		
		case 9:
			if (!unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				unk_0x8BC9595FD2792B5D("DLC_VW_Casino_Table_Games");
			}
			unk_0xA78CDFD1AE3130A9(-2124244681);
			func_90();
			break;
		
		case 10:
			if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				unk_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
			}
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 1785177548) == 1)
			{
				func_213(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), func_89());
				vVar7 = { unk_0x4F3973434662D795(2, 218), unk_0x4F3973434662D795(2, 219), 0f };
				Local_126.f_258 = unk_0xF958843510932FF6(Local_126.f_255);
				if (Local_126.f_258 != -1 && ((unk_0xA45992A6CE82FB43(Local_126.f_258) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)) || (vmag(vVar7) >= 0.24f && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 2116425869))))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_296(unk_0xD803B885F5E47A62(), 1, 0, 0);
					unk_0x8D17794CE3273D70(func_58());
					unk_0x8D17794CE3273D70(func_72());
					unk_0x8D17794CE3273D70(func_88());
					unk_0x8D17794CE3273D70(func_216());
					unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 2);
					func_335();
					func_87();
					func_359(2);
				}
			}
			else
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_296(unk_0xD803B885F5E47A62(), 1, 0, 0);
				unk_0x8D17794CE3273D70(func_58());
				unk_0x8D17794CE3273D70(func_72());
				unk_0x8D17794CE3273D70(func_88());
				unk_0x8D17794CE3273D70(func_216());
				unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 2);
				func_335();
				func_87();
				func_359(2);
			}
			break;
	}
}

void func_87()
{
	unk_0x0674E58A79778E99(&(Local_126.f_252), 21);
	unk_0x0674E58A79778E99(&(Local_126.f_252), 22);
}

char* func_88()
{
	return "anim_casino_b@amb@casino@games@blackjack@player";
}

int func_89()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_397();
	iVar1 = (iVar0 - Local_126.f_249);
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

void func_90()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var4;
	struct<26> Var5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	char* sVar21;
	char* sVar22;
	char* sVar23;
	char* sVar24;
	bool bVar25;
	char* sVar26;
	
	if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0)
	{
		iVar1 = (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 * 4 + Local_116.f_1575[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]);
		iVar0 = Local_116.f_1600[iVar1];
	}
	if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0)
	{
		if (func_209(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4))
		{
			func_208("BJACK_ERROR", -1);
			return;
		}
	}
	bVar2 = false;
	if (func_53(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, Local_126.f_257))
	{
		bVar2 = true;
	}
	func_194();
	if (func_415())
	{
		Local_132.f_10 = 1;
	}
	Local_132.f_11 = func_192();
	if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != 6 || Local_116.f_1575[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)))
	{
		if ((((((unk_0xBFC0798A6E3417F9(2, 202) && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0)) && !Local_126.f_234) && !func_191())
		{
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
			{
				Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
			}
			Local_131.f_18 = func_415();
			Local_131.f_19 = func_192();
			Local_131.f_17 = func_190(&uLocal_127, 0, 0);
			Local_131.f_7 = func_397();
			Local_132.f_2 = 847129329;
			Local_131.f_4 = 847129329;
			Local_131.f_25 = 847129329;
			if (Local_126 > 1 || Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 != 0)
			{
				if (Global_262145.f_26035)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
			}
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 > 0 && !Local_126.f_232)
			{
				func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
			}
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 > 0 && !Local_126.f_233)
			{
				func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
			}
			func_371(1);
			unk_0xA37A90C62806D848(1);
			return;
		}
	}
	if (((Global_2514395 == Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 || Global_2460715.f_12) || Global_1676371 == 31) || !func_187())
	{
		if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
		{
			Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
		}
		Local_131.f_18 = func_415();
		Local_131.f_19 = func_192();
		Local_131.f_17 = func_190(&uLocal_127, 0, 0);
		Local_131.f_7 = func_397();
		if (Global_262145.f_26035)
		{
			unk_0x5943F8BE26E6D616(&Local_131);
		}
		func_371(1);
		unk_0xA37A90C62806D848(1);
		return;
	}
	if (Local_126.f_255 > -1)
	{
		Local_126.f_258 = unk_0xF958843510932FF6(Local_126.f_255);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !Local_126.f_234)
		{
			if (!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_216(), "idle_cardgames", 3))
			{
				if (Local_126.f_258 != -1 && (unk_0xA45992A6CE82FB43(Local_126.f_258) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)))
				{
					Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_216(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_126.f_255);
					Local_126.f_1582 = "idle_cardgames";
					unk_0x0674E58A79778E99(&(Local_126.f_252), 0);
				}
			}
			else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_216(), "idle_cardgames", 3))
			{
				if (Local_126.f_258 != -1 && (unk_0xA45992A6CE82FB43(Local_126.f_258) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -1424880317)))
				{
					Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_216(), func_186(0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0x914E6894744915F8(Local_126.f_255);
					unk_0x0674E58A79778E99(&(Local_126.f_252), 0);
				}
			}
		}
	}
	if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0)
	{
		func_184(&(Local_126.f_874));
		if ((unk_0xE5DBF9B6126856CA(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]))) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
		{
			if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != 6 || Local_116.f_1575[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)))
			{
				func_183(unk_0xF59058FCB716F903(0, 202, true), "BJACK_EXIT", &(Local_126.f_874), 0);
			}
			else if (((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0), 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 1), 3)) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 12)) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14))
				{
					if (((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 12) && !(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2 && func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) == 21)) && func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) <= 21) && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 7)
					{
						func_183(unk_0xF59058FCB716F903(0, 201, true), "BJACK_HIT", &(Local_126.f_874), 0);
						func_183(unk_0xF59058FCB716F903(0, 203, true), "BJACK_STAND", &(Local_126.f_874), 0);
					}
				}
				else if ((((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 12) && !(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2 && func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) == 21)) && func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) <= 21) && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 7) || (((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 13) && !(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2 && func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) == 21)) && func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) <= 21) && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 7))
				{
					func_183(unk_0xF59058FCB716F903(0, 201, true), "BJACK_HIT", &(Local_126.f_874), 0);
					func_183(unk_0xF59058FCB716F903(0, 203, true), "BJACK_STAND", &(Local_126.f_874), 0);
				}
				if (Local_126.f_248 >= Local_126.f_244)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14))
					{
						if ((func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) < 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 10))
						{
							func_183(unk_0xF59058FCB716F903(0, 204, true), "BJACK_DOUBLE", &(Local_126.f_874), 0);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 13) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 11))
					{
						if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
						{
							if (func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) < 21)
							{
								func_183(unk_0xF59058FCB716F903(0, 204, true), "BJACK_DOUBLE", &(Local_126.f_874), 0);
							}
						}
					}
					else if ((func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) < 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 10))
					{
						func_183(unk_0xF59058FCB716F903(0, 204, true), "BJACK_DOUBLE", &(Local_126.f_874), 0);
					}
				}
				if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2 && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14))
				{
					if (Local_126.f_248 >= Local_126.f_244)
					{
						if (func_35(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/][0]) == func_35(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/][1]))
						{
							func_183(unk_0xF59058FCB716F903(0, 206, true), "BJACK_SPLIT", &(Local_126.f_874), 0);
						}
					}
				}
			}
		}
		if ((Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 3 && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0)) && (Local_126.f_248 >= Local_126.f_246 || Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 != 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 15) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0))
			{
				func_183(unk_0xF59058FCB716F903(0, 201, true), "BJACK_PLACE", &(Local_126.f_874), 0);
				if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 20))
				{
					func_183(unk_0xF59058FCB716F903(0, 204, true), "BJACK_BET_MAX", &(Local_126.f_874), 0);
				}
				func_182(2, 7, "BJACK_BET_NUM", &(Local_126.f_874));
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
		{
			func_183(unk_0xF59058FCB716F903(0, 202, true), "IB_BACK", &(Local_126.f_874), 0);
			func_182(2, 8, "IB_TAB", &(Local_126.f_874));
		}
		if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] < 9 || !unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 13))
		{
			if (Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_12 >= 2)
			{
				func_183(unk_0xF59058FCB716F903(0, 208, true), "BJACK_DLR", &(Local_126.f_874), 0);
			}
			if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0)
			{
				func_183(unk_0xF59058FCB716F903(0, 207, true), "BJACK_CARDS", &(Local_126.f_874), 0);
			}
		}
		if (bLocal_146 && Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 1)
		{
			func_183(unk_0xF59058FCB716F903(0, 195, true), "BJACK_LR", &(Local_126.f_874), 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
		{
			func_183(unk_0xF59058FCB716F903(2, 210, true), "BJACK_RULESb", &(Local_126.f_874), 0);
		}
		Var3 = { func_181() };
		func_180(&(Local_126.f_874), 1f);
		func_172(&(Local_126.f_873), &Var3, &(Local_126.f_874), func_179(&(Local_126.f_874)));
		func_171(1);
	}
	func_166();
	switch (Local_126)
	{
		case 0:
			if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 3)
			{
				if ((Local_126.f_244 > Local_126.f_248 || Local_126.f_244 < Local_126.f_246) || Local_126.f_244 > Local_126.f_245)
				{
					Local_126.f_244 = Local_126.f_246;
				}
				Var4 = 7;
				Local_126.f_213 = { Var4 };
				Local_126.f_222 = { Var4 };
				Local_131 = { Var5 };
				Local_131.f_10 = 1;
				Local_131 = -747096482;
				Local_131.f_11 = func_324(unk_0xD803B885F5E47A62());
				if (func_324(unk_0xD803B885F5E47A62()))
				{
					Local_131.f_20 = 1983458449;
				}
				else if (func_321())
				{
					Local_131.f_20 = 1334658487;
				}
				else if (func_323(1) && (func_324(func_322()) || func_211(unk_0xD803B885F5E47A62())))
				{
					Local_131.f_20 = 980726932;
				}
				else
				{
					Local_131.f_20 = 939907746;
				}
				if (func_424(unk_0xD803B885F5E47A62()))
				{
					Local_131.f_1 = 1695074466;
				}
				else if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 == 2 || Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 == 3)
				{
					Local_131.f_1 = 1952785842;
				}
				else
				{
					Local_131.f_1 = -1125105727;
				}
				func_362(&uLocal_127, 0, 0);
				Local_131.f_3 = Local_116.f_1560[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				Local_131.f_2 = Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4;
				func_165(1);
			}
			break;
		
		case 1:
			if ((!func_321() && !(func_323(1) && func_320(func_322()))) || ((!func_324(unk_0xD803B885F5E47A62()) && (func_377(Local_126.f_247) == 2 || func_377(Local_126.f_247) == 3)) && !(func_323(1) && func_324(func_322()))))
			{
				if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
				{
					Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				}
				Local_131.f_18 = func_415();
				Local_131.f_19 = func_192();
				Local_131.f_17 = func_190(&uLocal_127, 0, 0);
				Local_131.f_7 = func_397();
				Local_132.f_2 = 939907746;
				Local_131.f_4 = 939907746;
				if (Global_262145.f_26035)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
				func_371(1);
				unk_0xA37A90C62806D848(1);
				if (Local_126.f_256 == 1)
				{
					func_208("IT_MEMBOc", -1);
				}
				else if (Local_126.f_256 == 2)
				{
					func_208("IT_MEMBOa", -1);
				}
				else if (Local_126.f_256 == 3)
				{
					func_208("IT_MEMBOb", -1);
				}
				return;
			}
			if ((Local_126.f_248 < Local_126.f_246 && Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 == 0) && !Local_126.f_234)
			{
				if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
				{
					Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				}
				Local_131.f_18 = func_415();
				Local_131.f_19 = func_192();
				Local_131.f_17 = func_190(&uLocal_127, 0, 0);
				Local_131.f_7 = func_397();
				Local_132.f_2 = -1275559872;
				Local_131.f_4 = -1275559872;
				if (Global_262145.f_26035)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
				func_371(1);
				unk_0xA37A90C62806D848(1);
				if (func_424(unk_0xD803B885F5E47A62()))
				{
					if (Local_126.f_248 <= 0)
					{
						func_208("CAS_MG_NOCHIPS6", -1);
					}
					else
					{
						func_208("CAS_MG_LOWCHIPS6", -1);
					}
				}
				else if (Local_126.f_248 <= 0)
				{
					func_208("CAS_MG_NOCHIPS2", -1);
				}
				else
				{
					func_208("CAS_MG_LOWCHIPS2", -1);
				}
				return;
			}
			if (func_329())
			{
				switch (func_325())
				{
					case 0:
						Local_132.f_2 = 1982714739;
						break;
					
					case 1:
						Local_132.f_2 = -633175758;
						break;
					
					case 2:
						Local_132.f_2 = -1625999354;
						break;
				}
				switch (func_325())
				{
					case 0:
						Local_131.f_4 = 1982714739;
						break;
					
					case 1:
						Local_131.f_4 = -633175758;
						break;
					
					case 2:
						Local_131.f_4 = -1625999354;
						break;
				}
				if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
				{
					Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				}
				Local_131.f_18 = func_415();
				Local_131.f_19 = func_192();
				Local_131.f_17 = func_190(&uLocal_127, 0, 0);
				Local_131.f_7 = func_397();
				if (Global_262145.f_26035)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
				func_371(1);
				unk_0xA37A90C62806D848(1);
				if (func_325() == 2)
				{
					func_208("CAS_MG_CTIME", -1);
				}
				else
				{
					func_208("CAS_MG_CBAN", -1);
				}
				return;
			}
			if ((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 15) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0)) && (!func_350() || func_344()))
			{
				if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
				{
					Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				}
				Local_131.f_18 = func_415();
				Local_131.f_19 = func_192();
				Local_131.f_17 = func_190(&uLocal_127, 0, 0);
				Local_131.f_7 = func_397();
				if (Global_262145.f_26035)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
				func_371(1);
				unk_0xA37A90C62806D848(1);
				return;
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 15) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 16))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0))
				{
					if (((((!unk_0xEAE0D21A50E6C7F4(Local_126.f_253, 1) && !unk_0x4FD68D5821EE3E19()) && !unk_0xBFC0798A6E3417F9(2, 204)) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
					{
						bVar7 = unk_0x06F8112AA79C53D9(2, 188);
						bVar8 = unk_0x06F8112AA79C53D9(2, 187);
						if (bVar8 || (((((bVar7 && !unk_0xBFC0798A6E3417F9(2, 204)) && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0)))
						{
							func_67(&(Local_126.f_1574), 0, 0);
							unk_0x5D96D8530B3D0904(&(Local_126.f_253), 1);
						}
					}
					else if (func_65(&(Local_126.f_1574), 100, 0))
					{
						func_63(&(Local_126.f_1574));
						unk_0x0674E58A79778E99(&(Local_126.f_253), 1);
					}
					if (((((((unk_0xBFC0798A6E3417F9(2, 204) && !bVar8) && !bVar7) && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0)) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 20))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar6 = true;
					}
					if (bVar6)
					{
						while (bVar6)
						{
							if (Local_126.f_244 >= 10000)
							{
								iVar9 = 5000;
							}
							else if (Local_126.f_244 >= 5000)
							{
								iVar9 = 1000;
							}
							else if (Local_126.f_244 >= 500)
							{
								iVar9 = 500;
							}
							else if (Local_126.f_244 >= 100)
							{
								iVar9 = 50;
							}
							else
							{
								iVar9 = 10;
							}
							if (Local_126.f_244 > Local_126.f_248)
							{
								Local_126.f_244 = (Local_126.f_244 - iVar9);
							}
							if (Local_126.f_244 < Local_126.f_246)
							{
								Local_126.f_244 = Local_126.f_246;
							}
							Local_126.f_244 = (Local_126.f_244 + iVar9);
							if (Local_126.f_244 > Local_126.f_245)
							{
								bVar6 = false;
								Local_126.f_244 = Local_126.f_245;
							}
							if (Local_126.f_244 > Local_126.f_248)
							{
								bVar6 = false;
								Local_126.f_244 = (Local_126.f_244 - iVar9);
							}
						}
					}
					else
					{
						if (Local_126.f_244 >= 10000)
						{
							iVar9 = 5000;
						}
						else if (Local_126.f_244 >= 5000)
						{
							iVar9 = 1000;
						}
						else if (Local_126.f_244 >= 500)
						{
							iVar9 = 500;
						}
						else if (Local_126.f_244 >= 100)
						{
							iVar9 = 50;
						}
						else
						{
							iVar9 = 10;
						}
						if (Local_126.f_244 > Local_126.f_248)
						{
							Local_126.f_244 = (Local_126.f_244 - iVar9);
						}
						if (Local_126.f_244 < Local_126.f_246)
						{
							Local_126.f_244 = Local_126.f_246;
						}
						iVar10 = Local_126.f_244;
						if (bVar7)
						{
							Local_126.f_244 = (Local_126.f_244 + iVar9);
							if (Local_126.f_244 > Local_126.f_245)
							{
								Local_126.f_244 = Local_126.f_245;
							}
							if (Local_126.f_244 > Local_126.f_248)
							{
								Local_126.f_244 = (Local_126.f_244 - iVar9);
							}
							if (Local_126.f_244 == iVar10)
							{
								if (unk_0xBFC0798A6E3417F9(2, 188) || !unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 23))
								{
									unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x5D96D8530B3D0904(&(Local_126.f_252), 23);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_126.f_252), 23);
								unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar8)
						{
							if (Local_126.f_244 <= 100)
							{
								iVar9 = 10;
							}
							else if (Local_126.f_244 <= 500)
							{
								iVar9 = 50;
							}
							else if (Local_126.f_244 <= 5000)
							{
								iVar9 = 500;
							}
							else if (Local_126.f_244 <= 10000)
							{
								iVar9 = 1000;
							}
							else
							{
								iVar9 = 5000;
							}
							Local_126.f_244 = (Local_126.f_244 - iVar9);
							if (Local_126.f_244 < Local_126.f_246)
							{
								Local_126.f_244 = Local_126.f_246;
							}
							if (Local_126.f_244 == iVar10)
							{
								if (unk_0xBFC0798A6E3417F9(2, 187) || !unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 23))
								{
									unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x5D96D8530B3D0904(&(Local_126.f_252), 23);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_126.f_252), 23);
								unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_126.f_244 == Local_126.f_245 || (Local_126.f_244 + iVar9) > Local_126.f_245) || (Local_126.f_244 + iVar9) > Local_126.f_248)
					{
						unk_0x5D96D8530B3D0904(&(Local_126.f_252), 20);
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_126.f_252), 20);
					}
					unk_0x5D96D8530B3D0904(&(Local_126.f_253), 0);
					iVar11 = (30 - (func_190(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0, 0) / 1000));
					if (iVar11 > 0 || !func_66(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/])))
					{
						if (((((((unk_0xBFC0798A6E3417F9(2, 201) && !unk_0x06F8112AA79C53D9(2, 202)) && !unk_0x06F8112AA79C53D9(2, 203)) && Local_126.f_244 >= Local_126.f_246) && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
						{
							unk_0x5D96D8530B3D0904(&(Local_126.f_252), 0);
							Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_88(), func_164(Local_126.f_244, bVar2, 0, 0), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_126.f_255);
							unk_0xA37A90C62806D848(1);
						}
						if (!func_331("BJACK_BET") && !unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0))
						{
							if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
							{
								func_163("BJACK_BET");
							}
						}
					}
					else if (func_66(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/])) && func_65(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 30000, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 15))
						{
							unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 16);
						}
					}
				}
				else
				{
					if ((Local_126.f_258 != -1 && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 1503712844)) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 15))
					{
						Local_126.f_234 = 1;
					}
					if (Local_126.f_234 && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 15))
					{
						if (func_160(Local_126.f_244, &(Local_126.f_243), 1, Local_126.f_231))
						{
							if (Local_126.f_243 == 3)
							{
								Local_126.f_234 = 0;
								Local_126.f_243 = 0;
							}
							else
							{
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = Local_126.f_244;
								Local_132.f_3 = (Local_132.f_3 - Local_126.f_244);
								Local_131.f_6 = (Local_131.f_6 - Local_126.f_244);
								if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 20))
								{
									Local_131.f_5 = 1;
								}
								Local_132.f_12++;
								Local_132.f_7 = (Local_132.f_7 + Local_126.f_244);
								Local_131.f_12 = (Local_131.f_12 + Local_126.f_244);
								unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 15);
								Local_126.f_234 = 0;
							}
						}
					}
				}
			}
			if ((func_66(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/])) && Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 1) && (30000 - func_190(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0, 0)) > 0)
			{
				if (func_190(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0, 0) <= 24000)
				{
					func_159((30000 - func_190(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_159((30000 - func_190(&(Local_116.f_1642[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
			if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 3)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_126.f_253, 0) && !Local_126.f_234)
				{
					unk_0xA37A90C62806D848(1);
					unk_0x0674E58A79778E99(&(Local_126.f_252), 0);
					if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 15))
					{
						unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 16);
					}
					func_165(2);
				}
			}
			func_155(Local_126.f_244, "BJACK_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			break;
		
		case 2:
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0)
			{
				if (Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_12 >= 2)
				{
					func_63(&(Local_126.f_1576));
					iLocal_149 = 0;
					func_165(3);
				}
			}
			break;
		
		case 3:
			iVar12 = func_34(&(Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/]), 0);
			iVar13 = func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/]));
			iVar14 = func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/]));
			iVar15 = Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_12;
			iVar16 = Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8;
			iVar17 = Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8;
			bVar18 = (iVar15 == 2 && iVar12 == 21);
			bVar19 = (iVar16 == 2 && iVar13 == 21);
			bVar20 = (iVar17 == 2 && iVar14 == 21);
			if (((bVar20 || iVar14 >= 21) || iVar17 == 7) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 12))
			{
				unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 13);
			}
			if (((bVar19 || iVar13 >= 21) || iVar16 == 7) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 12))
			{
				if (iVar13 > 21)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 19))
					{
						Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_216(), func_154(), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0x914E6894744915F8(Local_126.f_255);
						unk_0x5D96D8530B3D0904(&(Local_126.f_252), 19);
					}
				}
				unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 12);
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4])))
			{
				if ((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0), 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 1), 3)) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 12))
				{
					if (func_66(&(Local_126.f_1576)))
					{
						if ((30000 - func_190(&(Local_126.f_1576), 0, 0)) >= 0)
						{
							if (func_190(&(Local_126.f_1576), 0, 0) <= 24000)
							{
								func_159((30000 - func_190(&(Local_126.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_190(&(Local_126.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (func_65(&(Local_126.f_1576), 30000, 0))
						{
							unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 12);
							unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 13);
							func_63(&(Local_126.f_1576));
							return;
						}
					}
					else if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_216(), func_186(1), 3))
						{
							func_362(&(Local_126.f_1576), 0, 0);
						}
					}
					if (bVar18)
					{
						unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 12);
						unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 13);
					}
					else if (((unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14) && unk_0xEAE0D21A50E6C7F4(Local_116.f_1565[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 13)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 11) && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 > 2))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 11) || unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0))
							{
								if (((!unk_0x4FD68D5821EE3E19() && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
								{
									if (unk_0xBFC0798A6E3417F9(2, 201))
									{
										Local_131.f_22 = 1;
										if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 6);
										}
										else if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 3)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 7);
										}
										else if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 4)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 8);
										}
										else if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 5)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 9);
										}
										else if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 6)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 10);
										}
										switch (unk_0x09AC81E49EA267F7(0, 3))
										{
											case 0:
												sVar21 = "request_card";
												break;
											
											case 1:
												sVar21 = "request_card_alt1";
												break;
											
											case 2:
												sVar21 = "request_card_alt2";
												break;
										}
										Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_88(), sVar21, 4f, -2f, 13, 16, 1148846080, 0);
										unk_0x914E6894744915F8(Local_126.f_255);
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 0);
										func_63(&(Local_126.f_1576));
									}
									else if (unk_0xBFC0798A6E3417F9(2, 203))
									{
										Local_131.f_21 = 1;
										switch (unk_0x09AC81E49EA267F7(0, 3))
										{
											case 0:
												sVar22 = "decline_card_001";
												break;
											
											case 1:
												sVar22 = "decline_card_alt1";
												break;
											
											case 2:
												sVar22 = "decline_card_alt2";
												break;
										}
										Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_88(), sVar22, 4f, -2f, 13, 16, 1148846080, 0);
										unk_0x914E6894744915F8(Local_126.f_255);
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 14);
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 0);
										func_63(&(Local_126.f_1576));
									}
									else if (unk_0xBFC0798A6E3417F9(2, 204))
									{
										if (Local_126.f_248 >= Local_126.f_244 && iVar17 == 2)
										{
											Local_131.f_23 = 1;
											Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_88(), func_164(Local_126.f_244, bVar2, 1, 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0x914E6894744915F8(Local_126.f_255);
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 12);
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 0);
											func_63(&(Local_126.f_1576));
										}
									}
								}
							}
							else if (Local_126.f_258 != -1)
							{
								if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card_alt1", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card_alt2", 3)) && unk_0xA45992A6CE82FB43(Local_126.f_258) >= 0.3f)
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 6))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_252), 6);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 5);
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 7))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_252), 7);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 6);
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 8))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_252), 8);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 7);
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 9))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_252), 9);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 8);
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 10))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_252), 10);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 9);
									}
								}
								if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_001", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_alt1", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_alt2", 3)) && unk_0xA45992A6CE82FB43(Local_126.f_258) >= 0.3f)
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 14))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_252), 14);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 13);
									}
								}
								if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 12))
								{
									if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 1503712844))
									{
										Local_126.f_234 = 1;
									}
									if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 17) && Local_126.f_234)
									{
										if (func_160(Local_126.f_244, &(Local_126.f_243), 1, Local_126.f_231))
										{
											if (Local_126.f_243 == 3)
											{
												unk_0x0674E58A79778E99(&(Local_126.f_252), 12);
												Local_126.f_234 = 0;
												Local_126.f_243 = 0;
											}
											else
											{
												Local_132.f_3 = (Local_132.f_3 - Local_126.f_244);
												Local_131.f_6 = (Local_131.f_6 - Local_126.f_244);
												Local_132.f_8 = (Local_132.f_8 + Local_126.f_244);
												Local_131.f_13 = (Local_131.f_13 + Local_126.f_244);
												Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 + Local_126.f_244);
												unk_0x5D96D8530B3D0904(&(Local_126.f_252), 17);
												unk_0x0674E58A79778E99(&(Local_126.f_252), 12);
												unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 11);
												Local_126.f_234 = 0;
											}
										}
									}
								}
							}
						}
					}
					else if ((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 10) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 12)) || unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 0))
						{
							if (((!unk_0x4FD68D5821EE3E19() && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
							{
								if (unk_0xBFC0798A6E3417F9(2, 201))
								{
									Local_131.f_22 = 1;
									if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 1);
									}
									else if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 3)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 2);
									}
									else if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 4)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 3);
									}
									else if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 5)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 4);
									}
									else if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 6)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 5);
									}
									switch (unk_0x09AC81E49EA267F7(0, 3))
									{
										case 0:
											sVar23 = "request_card";
											break;
										
										case 1:
											sVar23 = "request_card_alt1";
											break;
										
										case 2:
											sVar23 = "request_card_alt2";
											break;
									}
									Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_88(), sVar23, 4f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_126.f_255);
									unk_0x5D96D8530B3D0904(&(Local_126.f_252), 0);
									func_63(&(Local_126.f_1576));
								}
								else if (unk_0xBFC0798A6E3417F9(2, 203))
								{
									Local_131.f_21 = 1;
									switch (unk_0x09AC81E49EA267F7(0, 3))
									{
										case 0:
											sVar24 = "decline_card_001";
											break;
										
										case 1:
											sVar24 = "decline_card_alt1";
											break;
										
										case 2:
											sVar24 = "decline_card_alt2";
											break;
									}
									Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_88(), sVar24, 4f, -2f, 13, 16, 1148846080, 0);
									unk_0x914E6894744915F8(Local_126.f_255);
									unk_0x5D96D8530B3D0904(&(Local_126.f_252), 13);
									unk_0x5D96D8530B3D0904(&(Local_126.f_252), 0);
									func_63(&(Local_126.f_1576));
								}
								else if (unk_0xBFC0798A6E3417F9(2, 204))
								{
									if (Local_126.f_248 >= Local_126.f_244 && iVar16 == 2)
									{
										Local_131.f_23 = 1;
										Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_88(), func_164(Local_126.f_244, bVar2, 1, 0), 4f, -2f, 13, 16, 1148846080, 0);
										unk_0x914E6894744915F8(Local_126.f_255);
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 11);
										unk_0x5D96D8530B3D0904(&(Local_126.f_252), 0);
										func_63(&(Local_126.f_1576));
									}
								}
								else if (unk_0xBFC0798A6E3417F9(2, 206))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14))
									{
										if ((func_35(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/][0]) == func_35(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/][1]) && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2) && Local_126.f_248 >= Local_126.f_244)
										{
											Local_131.f_24 = 1;
											Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 1, false, 1065353216, 0, 1065353216);
											unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_88(), func_164(Local_126.f_244, bVar2, 0, 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0x914E6894744915F8(Local_126.f_255);
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 15);
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 0);
											func_63(&(Local_126.f_1576));
										}
									}
								}
							}
						}
						else if (Local_126.f_258 != -1)
						{
							if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card_alt1", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card_alt2", 3)) && unk_0xA45992A6CE82FB43(Local_126.f_258) >= 0.3f)
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 1))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_252), 1);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 2))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_252), 2);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 1);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 3))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_252), 3);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 2);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 4))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_252), 4);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 3);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 5))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_252), 5);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 4);
								}
							}
							if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_001", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_alt1", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_alt2", 3)) && unk_0xA45992A6CE82FB43(Local_126.f_258) >= 0.3f)
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 13))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_252), 13);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 12);
								}
							}
							if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 11))
							{
								if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 1503712844))
								{
									Local_126.f_234 = 1;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 16) && Local_126.f_234)
								{
									if (func_160(Local_126.f_244, &(Local_126.f_243), 1, Local_126.f_231))
									{
										if (Local_126.f_243 == 3)
										{
											unk_0x0674E58A79778E99(&(Local_126.f_252), 11);
											Local_126.f_234 = 0;
											Local_126.f_243 = 0;
										}
										else
										{
											Local_132.f_3 = (Local_132.f_3 - Local_126.f_244);
											Local_131.f_6 = (Local_131.f_6 - Local_126.f_244);
											Local_132.f_7 = (Local_132.f_7 + Local_126.f_244);
											Local_131.f_12 = (Local_131.f_12 + Local_126.f_244);
											Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 + Local_126.f_244);
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 16);
											unk_0x0674E58A79778E99(&(Local_126.f_252), 11);
											unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 10);
											Local_126.f_234 = 0;
										}
									}
								}
							}
							if (unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 15))
							{
								if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 1503712844))
								{
									Local_126.f_234 = 1;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 18) && Local_126.f_234)
								{
									if (func_160(Local_126.f_244, &(Local_126.f_243), 1, Local_126.f_231))
									{
										if (Local_126.f_243 == 3)
										{
											unk_0x0674E58A79778E99(&(Local_126.f_252), 15);
											Local_126.f_234 = 0;
											Local_126.f_243 = 0;
										}
										else
										{
											Local_132.f_3 = (Local_132.f_3 - Local_126.f_244);
											Local_131.f_6 = (Local_131.f_6 - Local_126.f_244);
											Local_132.f_8 = (Local_132.f_8 + Local_126.f_244);
											Local_131.f_13 = (Local_131.f_13 + Local_126.f_244);
											Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 + Local_126.f_244);
											unk_0x5D96D8530B3D0904(&(Local_126.f_252), 18);
											unk_0x0674E58A79778E99(&(Local_126.f_252), 15);
											unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 14);
											Local_126.f_234 = 0;
										}
									}
								}
							}
						}
					}
				}
				else if (iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_418())
				{
					if (!func_331("BJACK_WAIT"))
					{
						if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
						{
							func_163("BJACK_WAIT");
						}
					}
				}
				else if (func_331("BJACK_WAIT"))
				{
					unk_0xA37A90C62806D848(1);
				}
			}
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0)
			{
				if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 6)
				{
					if ((Local_116.f_1575[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)) && !(!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14) && unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 12))) && !((unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14) && unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 12)) && unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 13)))
					{
						if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0), 3) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 1), 3))
						{
							if (((Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2 && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14)) && Local_126.f_248 >= Local_126.f_244) && func_35(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/][0]) == func_35(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/][1]))
							{
								if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
								{
									if (!func_331("BJACK_TURN_S"))
									{
										func_163("BJACK_TURN_S");
									}
								}
							}
							else if (Local_126.f_248 >= Local_126.f_244 && (((((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14) && func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) < 21) && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 10)) || (((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 13) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 11)) && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2) && func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) < 21)) || ((func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) < 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 10))))
							{
								if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
								{
									if (!func_331("BJACK_TURN_D"))
									{
										func_163("BJACK_TURN_D");
									}
								}
							}
							else if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
							{
								if (!func_331("BJACK_TURN"))
								{
									func_163("BJACK_TURN");
								}
							}
						}
						else if ((func_331("BJACK_TURN") || func_331("BJACK_TURN_D")) || func_331("BJACK_TURN_S"))
						{
							unk_0xA37A90C62806D848(1);
						}
					}
					else if ((func_331("BJACK_TURN") || func_331("BJACK_TURN_D")) || func_331("BJACK_TURN_S"))
					{
						unk_0xA37A90C62806D848(1);
					}
				}
				if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 1)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 16))
					{
						bVar25 = true;
					}
					if (Local_126.f_259 != -1)
					{
						func_307(&(Local_126.f_259));
						Local_126.f_259 = -1;
					}
					Local_125[unk_0xD803B885F5E47A62() /*8*/] = 0;
					Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
					Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
					Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5 = 0;
					Local_126.f_232 = 0;
					Local_126.f_233 = 0;
					Local_126.f_235 = 0;
					Local_126.f_252 = 0;
					unk_0xA37A90C62806D848(1);
					func_165(0);
					Local_131.f_18 = func_415();
					Local_131.f_19 = func_192();
					Local_131.f_17 = func_190(&uLocal_127, 0, 0);
					Local_131.f_7 = func_397();
					if (!func_350() || func_344())
					{
						func_371(1);
						unk_0xA37A90C62806D848(1);
						if (Global_262145.f_26035 && !bVar25)
						{
							unk_0x5943F8BE26E6D616(&Local_131);
						}
						return;
					}
					if (func_329())
					{
						switch (func_325())
						{
							case 0:
								Local_132.f_2 = 1982714739;
								break;
							
							case 1:
								Local_132.f_2 = -633175758;
								break;
							
							case 2:
								Local_132.f_2 = -1625999354;
								break;
						}
						switch (func_325())
						{
							case 0:
								Local_131.f_4 = 1982714739;
								break;
							
							case 1:
								Local_131.f_4 = -633175758;
								break;
							
							case 2:
								Local_131.f_4 = -1625999354;
								break;
						}
						if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
						{
							Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
						}
						Local_131.f_18 = func_415();
						Local_131.f_19 = func_192();
						Local_131.f_17 = func_190(&uLocal_127, 0, 0);
						Local_131.f_7 = func_397();
						if (Global_262145.f_26035 && !bVar25)
						{
							unk_0x5943F8BE26E6D616(&Local_131);
						}
						func_371(1);
						unk_0xA37A90C62806D848(1);
						if (func_325() == 2)
						{
							func_208("CAS_MG_CTIME", -1);
						}
						else
						{
							func_208("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26035 && !bVar25)
					{
						unk_0x5943F8BE26E6D616(&Local_131);
					}
				}
				if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 6)
				{
					if ((func_331("BJACK_TURN") || func_331("BJACK_TURN_D")) || func_331("BJACK_TURN_S"))
					{
						unk_0xA37A90C62806D848(1);
					}
				}
				if (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 9 && iVar13 > 0)
				{
					if (Local_126.f_232 && Local_126.f_233)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_252, 19))
						{
							if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
							{
								Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
							}
							Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 2, 0, true, 1065353216, 0, 1065353216);
							sVar26 = func_153(Local_131.f_6);
							if (func_53(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, Local_126.f_257))
							{
								if (Local_126.f_244 >= 35000)
								{
									if (((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7)) || ((iVar13 == 21 && iVar14 == 21) && iVar12 != 21))
									{
										sVar26 = func_152();
									}
									else if (Local_126.f_244 >= 45000)
									{
										if ((((iVar16 >= 2 && iVar13 < 21) && iVar12 == iVar13 + 1) && iVar15 > 2) || (((iVar17 >= 2 && iVar14 < 21) && iVar12 == iVar14 + 1) && iVar15 > 2))
										{
											sVar26 = func_150();
										}
									}
								}
							}
							else if (Local_126.f_244 >= 4500)
							{
								if (((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7)) || ((iVar13 == 21 && iVar14 == 21) && iVar12 != 21))
								{
									sVar26 = func_152();
								}
							}
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_216(), sVar26, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0x914E6894744915F8(Local_126.f_255);
							unk_0x5D96D8530B3D0904(&(Local_126.f_252), 19);
						}
					}
					if ((Local_126.f_232 && Local_126.f_233) && !Local_126.f_235)
					{
						if (Local_131.f_14 > 0)
						{
							if (func_106(Local_131.f_14, &(Local_126.f_243), 1))
							{
								unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 1);
								Local_126.f_235 = 1;
							}
						}
					}
					if ((((Local_126.f_232 && Local_126.f_233) && !bLocal_145) && !bLocal_146) && !bLocal_137)
					{
						if (Local_131.f_14 > 0)
						{
							if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 0)
							{
								if (bVar19 && !bVar18)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_BJ", Local_131.f_14))
									{
										func_104("BJACK_WIN_2", "BJACK_BJ", Local_131.f_14);
									}
								}
								else if (iVar13 <= 21 && iVar16 == 7)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_7CC", Local_131.f_14))
									{
										func_104("BJACK_WIN_2", "BJACK_7CC", Local_131.f_14);
									}
								}
								else if (iVar13 == iVar12)
								{
									if (!func_331("BJACK_PUSH"))
									{
										func_163("BJACK_PUSH");
									}
								}
								else if (!func_103("BJACK_WIN_1", iVar13, Local_131.f_14))
								{
									func_102("BJACK_WIN_1", iVar13, Local_131.f_14);
								}
							}
							else if ((bVar19 || bVar20) && !bVar18)
							{
								if (bVar19 && bVar20)
								{
									if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_131.f_14))
									{
										func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_131.f_14);
									}
								}
								else if (bVar19)
								{
									if (iVar14 <= 21 && iVar17 == 7)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_131.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_131.f_14);
										}
									}
									else if (iVar14 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_131.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_131.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_BJ", iVar14, Local_131.f_14))
									{
										func_98("BJACK_WIN_4", "BJACK_BJ", iVar14, Local_131.f_14);
									}
								}
								else if (bVar20)
								{
									if (iVar13 <= 21 && iVar16 == 7)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_131.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_131.f_14);
										}
									}
									else if (iVar13 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_131.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_131.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_BJ", iVar13, Local_131.f_14))
									{
										func_98("BJACK_WIN_5", "BJACK_BJ", iVar13, Local_131.f_14);
									}
								}
							}
							else if ((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7))
							{
								if ((iVar13 <= 21 && iVar16 == 7) && (iVar14 <= 21 && iVar17 == 7))
								{
									if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_131.f_14))
									{
										func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_131.f_14);
									}
								}
								else if (iVar13 <= 21 && iVar16 == 7)
								{
									if (iVar14 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_131.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_131.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_7CC", iVar14, Local_131.f_14))
									{
										func_98("BJACK_WIN_4", "BJACK_7CC", iVar14, Local_131.f_14);
									}
								}
								else if (iVar14 <= 21 && iVar17 == 7)
								{
									if (iVar13 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_131.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_131.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_7CC", iVar13, Local_131.f_14))
									{
										func_98("BJACK_WIN_5", "BJACK_7CC", iVar13, Local_131.f_14);
									}
								}
							}
							else if (iVar13 == iVar12 && iVar14 == iVar12)
							{
								if (!func_331("BJACK_PUSH"))
								{
									func_163("BJACK_PUSH");
								}
							}
							else if (iVar13 <= 21 && iVar14 <= 21)
							{
								if (!func_97("BJACK_WIN_3", iVar13, iVar14, Local_131.f_14))
								{
									func_96("BJACK_WIN_3", iVar13, iVar14, Local_131.f_14);
								}
							}
							else if (iVar13 <= 21)
							{
								if (!func_99("BJACK_WIN_5", "BJACK_BUSTED", iVar13, Local_131.f_14))
								{
									func_98("BJACK_WIN_5", "BJACK_BUSTED", iVar13, Local_131.f_14);
								}
							}
							else if (iVar14 <= 21)
							{
								if (!func_99("BJACK_WIN_4", "BJACK_BUSTED", iVar14, Local_131.f_14))
								{
									func_98("BJACK_WIN_4", "BJACK_BUSTED", iVar14, Local_131.f_14);
								}
							}
						}
						else if (bVar18)
						{
							if (!func_95("BJACK_LOSE_2", "BJACK_BJ"))
							{
								func_94("BJACK_LOSE_2", "BJACK_BJ");
							}
						}
						else if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 0)
						{
							if (iVar13 > 21)
							{
								if (!func_95("BJACK_LOSE_3", "BJACK_BUSTED"))
								{
									func_94("BJACK_LOSE_3", "BJACK_BUSTED");
								}
							}
							else if (!func_318("BJACK_LOSE_1", iVar12))
							{
								func_93("BJACK_LOSE_1", iVar12);
							}
						}
						else if (iVar13 > 21 && iVar14 > 21)
						{
							if (!func_92("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED"))
							{
								func_91("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED");
							}
						}
						else if (!func_318("BJACK_LOSE_1", iVar12))
						{
							func_93("BJACK_LOSE_1", iVar12);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 0))
					{
						if (bVar19)
						{
							Local_132.f_17++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 0);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 1))
					{
						if (bVar20)
						{
							Local_132.f_17++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 1);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 2))
					{
						if (iVar16 == 7 && iVar13 <= 21)
						{
							Local_132.f_20++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 2);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 3))
					{
						if (iVar17 == 7 && iVar14 <= 21)
						{
							Local_132.f_20++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 3);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 4))
					{
						if (iVar13 > 21)
						{
							Local_132.f_19++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 4);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 5))
					{
						if (iVar14 > 21)
						{
							Local_132.f_19++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 5);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 6))
					{
						if (bVar18)
						{
							Local_132.f_16++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 6);
					}
					if (bVar18 && !bVar19)
					{
						if (!Local_126.f_232)
						{
							func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_131.f_4 = 1183160994;
							Local_131.f_25 = 1183160994;
							Local_132.f_14++;
							Local_126.f_232 = 1;
							Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
						}
					}
					else if (iVar13 <= 21)
					{
						if (bVar19 && !bVar18)
						{
							if (!Local_126.f_232)
							{
								Local_132.f_3 = (Local_132.f_3 + floor((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1) * 2.5f)));
								Local_131.f_6 = (Local_131.f_6 + floor((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1) * 2.5f)));
								Local_131.f_14 = (Local_131.f_14 + floor((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1) * 2.5f)));
								Local_131.f_15 = 1;
								Local_132.f_13++;
								Local_131.f_4 = -67503841;
								Local_131.f_25 = -67503841;
								Local_126.f_232 = 1;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
							}
						}
						else if (iVar16 == 7 && !bVar18)
						{
							if (!Local_126.f_232)
							{
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_15 = 1;
								Local_132.f_13++;
								Local_131.f_4 = 579613221;
								Local_131.f_25 = 579613221;
								Local_126.f_232 = 1;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
							}
						}
						else if (iVar13 > iVar12 || iVar12 > 21)
						{
							if (!Local_126.f_232)
							{
								Local_131.f_25 = -562306862;
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_15 = 1;
								Local_132.f_13++;
								Local_131.f_4 = -562306862;
								Local_131.f_25 = -562306862;
								Local_126.f_232 = 1;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
							}
						}
						else if (iVar13 < iVar12 || (bVar18 && !bVar19))
						{
							if (!Local_126.f_232)
							{
								func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
								Local_131.f_4 = -1851302466;
								Local_131.f_25 = -1851302466;
								Local_132.f_14++;
								Local_126.f_232 = 1;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
							}
						}
						else if (!Local_126.f_232)
						{
							Local_131.f_25 = 1960114521;
							Local_131.f_4 = 1960114521;
							Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_131.f_15 = 0;
							Local_126.f_232 = 1;
							func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
						}
					}
					else if (!Local_126.f_232)
					{
						func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
						Local_131.f_4 = -1052705919;
						Local_131.f_25 = -1052705919;
						Local_132.f_14++;
						Local_126.f_232 = 1;
						Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 14))
					{
						if (bVar18 && !bVar20)
						{
							if (!Local_126.f_233)
							{
								func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								if (Local_131.f_25 == -1052705919)
								{
									Local_131.f_4 = 1702151977;
									Local_131.f_25 = 1702151977;
								}
								else if (Local_131.f_25 == 579613221)
								{
									Local_131.f_4 = -2136370424;
									Local_131.f_25 = -2136370424;
								}
								else if (Local_131.f_25 == -1851302466)
								{
									Local_131.f_4 = -1858785397;
									Local_131.f_25 = -1858785397;
								}
								else if (Local_131.f_25 == -562306862)
								{
									Local_131.f_4 = 1946656957;
									Local_131.f_25 = 1946656957;
								}
								else if (Local_131.f_25 == -67503841)
								{
									Local_131.f_4 = -2105313098;
									Local_131.f_25 = -2105313098;
								}
								else if (Local_131.f_25 == 1960114521)
								{
									Local_131.f_4 = -185627827;
									Local_131.f_25 = -185627827;
								}
								else if (Local_131.f_25 == 1183160994)
								{
									Local_131.f_4 = -1498042471;
									Local_131.f_25 = -1498042471;
								}
								Local_132.f_14++;
								Local_126.f_233 = 1;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
							}
						}
						else if (iVar14 <= 21)
						{
							if (bVar20 && !bVar18)
							{
								if (!Local_126.f_233)
								{
									Local_132.f_3 = (Local_132.f_3 + floor((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2) * 2.5f)));
									Local_131.f_6 = (Local_131.f_6 + floor((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2) * 2.5f)));
									Local_131.f_14 = (Local_131.f_14 + floor((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2) * 2.5f)));
									Local_131.f_15 = 1;
									Local_132.f_13++;
									if (Local_131.f_25 == -1052705919)
									{
										Local_131.f_4 = 124952027;
										Local_131.f_25 = 124952027;
									}
									else if (Local_131.f_25 == 579613221)
									{
										Local_131.f_4 = 670083824;
										Local_131.f_25 = 670083824;
									}
									else if (Local_131.f_25 == -1851302466)
									{
										Local_131.f_4 = 446908156;
										Local_131.f_25 = 446908156;
									}
									else if (Local_131.f_25 == -562306862)
									{
										Local_131.f_4 = -1508284701;
										Local_131.f_25 = -1508284701;
									}
									else if (Local_131.f_25 == -67503841)
									{
										Local_131.f_4 = 179647057;
										Local_131.f_25 = 179647057;
									}
									else if (Local_131.f_25 == 1960114521)
									{
										Local_131.f_4 = -890276844;
										Local_131.f_25 = -890276844;
									}
									else if (Local_131.f_25 == 1183160994)
									{
										Local_131.f_4 = 1647364704;
										Local_131.f_25 = 1647364704;
									}
									Local_126.f_233 = 1;
									Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
								}
							}
							else if (iVar17 == 7 && !bVar18)
							{
								if (!Local_126.f_233)
								{
									Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_15 = 1;
									Local_132.f_13++;
									if (Local_131.f_25 == -1052705919)
									{
										Local_131.f_4 = -1196919212;
										Local_131.f_25 = -1196919212;
									}
									else if (Local_131.f_25 == 579613221)
									{
										Local_131.f_4 = 505925496;
										Local_131.f_25 = 505925496;
									}
									else if (Local_131.f_25 == -1851302466)
									{
										Local_131.f_4 = 2012692421;
										Local_131.f_25 = 2012692421;
									}
									else if (Local_131.f_25 == -562306862)
									{
										Local_131.f_4 = 326925312;
										Local_131.f_25 = 326925312;
									}
									else if (Local_131.f_25 == -67503841)
									{
										Local_131.f_4 = 487743337;
										Local_131.f_25 = 487743337;
									}
									else if (Local_131.f_25 == 1960114521)
									{
										Local_131.f_4 = 526318358;
										Local_131.f_25 = 526318358;
									}
									else if (Local_131.f_25 == 1183160994)
									{
										Local_131.f_4 = -1506449922;
										Local_131.f_25 = -1506449922;
									}
									Local_126.f_233 = 1;
									Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
								}
							}
							else if (iVar14 > iVar12 || iVar12 > 21)
							{
								if (!Local_126.f_233)
								{
									Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_15 = 1;
									Local_132.f_13++;
									if (Local_131.f_25 == -1052705919)
									{
										Local_131.f_4 = -1738969561;
										Local_131.f_25 = -1738969561;
									}
									else if (Local_131.f_25 == 579613221)
									{
										Local_131.f_4 = -67385374;
										Local_131.f_25 = -67385374;
									}
									else if (Local_131.f_25 == -1851302466)
									{
										Local_131.f_4 = 299063546;
										Local_131.f_25 = 299063546;
									}
									else if (Local_131.f_25 == -562306862)
									{
										Local_131.f_4 = 639742496;
										Local_131.f_25 = 639742496;
									}
									else if (Local_131.f_25 == -67503841)
									{
										Local_131.f_4 = -833750355;
										Local_131.f_25 = -833750355;
									}
									else if (Local_131.f_25 == 1960114521)
									{
										Local_131.f_4 = 656184401;
										Local_131.f_25 = 656184401;
									}
									else if (Local_131.f_25 == 1183160994)
									{
										Local_131.f_4 = 1380168920;
										Local_131.f_25 = 1380168920;
									}
									Local_126.f_233 = 1;
									Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
								}
							}
							else if (iVar14 < iVar12 || (bVar18 && !bVar20))
							{
								if (!Local_126.f_233)
								{
									func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
									if (Local_131.f_25 == -1052705919)
									{
										Local_131.f_4 = 1702151977;
										Local_131.f_25 = 1702151977;
									}
									else if (Local_131.f_25 == 579613221)
									{
										Local_131.f_4 = -2136370424;
										Local_131.f_25 = -2136370424;
									}
									else if (Local_131.f_25 == -1851302466)
									{
										Local_131.f_4 = -1858785397;
										Local_131.f_25 = -1858785397;
									}
									else if (Local_131.f_25 == -562306862)
									{
										Local_131.f_4 = 1946656957;
										Local_131.f_25 = 1946656957;
									}
									else if (Local_131.f_25 == -67503841)
									{
										Local_131.f_4 = -2105313098;
										Local_131.f_25 = -2105313098;
									}
									else if (Local_131.f_25 == 1960114521)
									{
										Local_131.f_4 = -185627827;
										Local_131.f_25 = -185627827;
									}
									else if (Local_131.f_25 == 1183160994)
									{
										Local_131.f_4 = -1498042471;
										Local_131.f_25 = -1498042471;
									}
									Local_132.f_14++;
									Local_126.f_233 = 1;
									Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
								}
							}
							else if (!Local_126.f_233)
							{
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								Local_131.f_15 = 1;
								func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								if (Local_131.f_25 == -1052705919)
								{
									Local_131.f_4 = -546469405;
									Local_131.f_25 = -546469405;
								}
								else if (Local_131.f_25 == 579613221)
								{
									Local_131.f_4 = -1749032290;
									Local_131.f_25 = -1749032290;
								}
								else if (Local_131.f_25 == -1851302466)
								{
									Local_131.f_4 = 1067415172;
									Local_131.f_25 = 1067415172;
								}
								else if (Local_131.f_25 == -562306862)
								{
									Local_131.f_4 = 297125168;
									Local_131.f_25 = 297125168;
								}
								else if (Local_131.f_25 == -67503841)
								{
									Local_131.f_4 = 2030981611;
									Local_131.f_25 = 2030981611;
								}
								else if (Local_131.f_25 == 1960114521)
								{
									Local_131.f_4 = -684984318;
									Local_131.f_25 = -684984318;
								}
								else if (Local_131.f_25 == 1183160994)
								{
									Local_131.f_4 = 497946612;
									Local_131.f_25 = 497946612;
								}
								Local_126.f_233 = 1;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
							}
						}
						else if (!Local_126.f_233)
						{
							func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
							if (Local_131.f_25 == -1052705919)
							{
								Local_131.f_4 = 1449908402;
								Local_131.f_25 = 1449908402;
							}
							else if (Local_131.f_25 == 579613221)
							{
								Local_131.f_4 = 1210238154;
								Local_131.f_25 = 1210238154;
							}
							else if (Local_131.f_25 == -1851302466)
							{
								Local_131.f_4 = 1540383360;
								Local_131.f_25 = 1540383360;
							}
							else if (Local_131.f_25 == -562306862)
							{
								Local_131.f_4 = -457084933;
								Local_131.f_25 = -457084933;
							}
							else if (Local_131.f_25 == -67503841)
							{
								Local_131.f_4 = -740134090;
								Local_131.f_25 = -740134090;
							}
							else if (Local_131.f_25 == 1960114521)
							{
								Local_131.f_4 = -1825077928;
								Local_131.f_25 = -1825077928;
							}
							else if (Local_131.f_25 == 1183160994)
							{
								Local_131.f_4 = 1676117351;
								Local_131.f_25 = 1676117351;
							}
							Local_132.f_14++;
							Local_126.f_233 = 1;
							Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
						}
					}
					else
					{
						Local_126.f_233 = 1;
					}
				}
			}
			break;
	}
}

void func_91(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6B012227B3921E18(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_92(char* sParam0, int iParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6B012227B3921E18(iParam2);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_93(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

void func_94(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_95(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_96(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_97(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_98(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_99(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_100(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6B012227B3921E18(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_101(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6B012227B3921E18(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_102(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_103(char* sParam0, int iParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_104(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

bool func_105(char* sParam0, int iParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8(0);
}

bool func_106(int iParam0, var uParam1, int iParam2)
{
	return func_107(iParam0, 3, uParam1, iParam2, -1);
}

int func_107(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
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
	else if (!func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_397();
		iVar1 = (Global_262145.f_26395 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_147();
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
		if (func_128(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_397() - Global_1696044);
			func_127(iVar4, 1);
			func_125();
			func_124();
			Global_1696044 = (Global_1696044 + iVar4);
			if (iParam1 == 0)
			{
				func_118(iVar4);
				Global_2460613 = 1;
			}
			else if (iParam1 == 3)
			{
				func_111(iVar4);
				if (iVar4 >= Global_262145.f_26403)
				{
					Global_2460612 = 1;
				}
				else if (iVar4 >= Global_262145.f_26402)
				{
					Global_2460613 = 1;
				}
			}
			Var5 = func_110(iParam1);
			Var5.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
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

int func_108(int iParam0)
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

int func_109(int iParam0, int iParam1, int iParam2)
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

int func_110(int iParam0)
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

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_115();
	if (iVar0 == 0)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_113();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26399)
	{
		func_112(-1274895349, Global_262145.f_26399);
		func_113();
		Global_2460613 = 1;
	}
	else
	{
		func_112(-1274895349, (iVar2 + iParam0));
	}
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

void func_113()
{
	func_114();
}

void func_114()
{
	func_112(2026157635, unk_0xDD0E7998AE8AD485());
}

int func_115()
{
	return func_116(-1274895349);
}

int func_116(int iParam0)
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

int func_117()
{
	return func_116(2026157635);
}

void func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_123();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_122();
	if (iVar0 == 0)
	{
		func_121();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26396)
	{
		func_120();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_119()
	{
		func_112(-1127742296, func_119());
		func_120();
	}
	else
	{
		func_112(-1127742296, (iVar2 + iParam0));
	}
}

int func_119()
{
	if (func_324(unk_0xD803B885F5E47A62()))
	{
		return Global_262145.f_26191;
	}
	return Global_262145.f_26190;
}

void func_120()
{
	func_121();
}

void func_121()
{
	func_112(67083818, unk_0xDD0E7998AE8AD485());
}

int func_122()
{
	return func_116(-1127742296);
}

int func_123()
{
	return func_116(67083818);
}

void func_124()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1696079, 6))
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 9);
		func_362(&Global_1696082, 0, 0);
	}
}

void func_125()
{
	if (func_126())
	{
		unk_0x5D96D8530B3D0904(&Global_1696079, 1);
	}
}

bool func_126()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_1696079, 6) || unk_0xEAE0D21A50E6C7F4(Global_1696079, 5));
}

void func_127(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&Global_1696079, 6);
	Global_1696080 = iParam0;
	Global_1696081 = iParam1;
}

bool func_128(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_108(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_146())
	{
		if (*uParam0 == 0)
		{
			if (func_145() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_110(iParam1);
			iVar5 = -22148635;
			if (func_149(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_141(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_141(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_136())
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
			if (func_135(func_145()))
			{
				if (func_134(func_145()) == 2)
				{
					unk_0x7A87D9FAFCB10ADC(func_133(func_145()));
					if (func_149(iParam1))
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
				func_129(func_145());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x7A7BDE279347E517(iVar0, false, true, 0, -1, 0))
	{
		if (func_149(iParam1))
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

void func_129(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_132(iParam0))
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
		func_130(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_130(var uParam0)
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
	func_131(&(uParam0->f_14));
	func_131(&(uParam0->f_14.f_13));
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

void func_131(var uParam0)
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

int func_132(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_134(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_136()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_145();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_140(Global_4263954[iVar2 /*85*/].f_66.f_6, Global_4263954[iVar2 /*85*/].f_66.f_4, Global_4263954[iVar2 /*85*/].f_66.f_1) == 1)
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
	iVar3 = func_133(iVar2);
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
				func_137(Global_4263954[iVar2 /*85*/], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_137(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_139(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_138();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_138()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_139(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_140(int iParam0, int iParam1, int iParam2)
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

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
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
	iVar1 = func_145();
	if (iVar1 == -1)
	{
		if (!func_143(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_142(iParam1))
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

int func_142(int iParam0)
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

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
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
		*iParam0 = func_144(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_144(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_146())
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
				func_137(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_145()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_133(iVar0) != 2147483647)
		{
			if (func_132(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_146()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_147()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_119() - func_122());
	iVar1 = (Global_262145.f_26395 - func_397());
	iVar2 = func_148();
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

int func_148()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119();
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

int func_149(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_150()
{
	if (func_151())
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

bool func_151()
{
	return func_51(unk_0xD803B885F5E47A62());
}

char* func_152()
{
	if (func_151())
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

char* func_153(int iParam0)
{
	if (func_151())
	{
		if ((func_424(unk_0xD803B885F5E47A62()) || func_377(Local_126.f_247) == 2) || func_377(Local_126.f_247) == 3)
		{
			if (iParam0 > 10000 && Local_131.f_4 != 1960114521)
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
			else if (iParam0 > -10000 || Local_131.f_4 == 1960114521)
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
		else if (iParam0 > 1000 && Local_131.f_4 != 1960114521)
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
		else if (iParam0 > -1000 || Local_131.f_4 == 1960114521)
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
	else if ((func_424(unk_0xD803B885F5E47A62()) || func_377(Local_126.f_247) == 2) || func_377(Local_126.f_247) == 3)
	{
		if (iParam0 > 10000 && Local_131.f_4 != 1960114521)
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
		else if (iParam0 > -10000 || Local_131.f_4 == 1960114521)
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
	else if (iParam0 > 1000 && Local_131.f_4 != 1960114521)
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
	else if (iParam0 > -1000 || Local_131.f_4 == 1960114521)
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

char* func_154()
{
	if (func_151())
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

void func_155(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_158(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_156(3, iVar0);
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

void func_156(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_157(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

int func_158(char* sParam0)
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
			if (func_157(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_156(7, iVar0);
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

int func_160(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_146() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_162(iParam0))
	{
		return func_161(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_161(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_397();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_146() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_128(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1696044 - func_397());
			if (iParam1 == 1)
			{
				Global_2460612 = 1;
			}
			else if (iVar2 >= Global_262145.f_26404)
			{
				Global_2460613 = 1;
			}
			func_127(iVar2, 0);
			func_125();
			func_124();
			Global_1696044 = (Global_1696044 - iVar2);
			Var3 = func_110(iParam1);
			Var3.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
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

int func_162(int iParam0)
{
	int iVar0;
	
	if (func_329())
	{
		return 0;
	}
	iVar0 = func_397();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_163(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, false, -1);
}

char* func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (bParam1)
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
					return "place_bet_large_split";
				}
			
			default:
		}
		return "place_bet_small_split";
	}
	if (((Local_126.f_247 == 1 || Local_126.f_247 == 5) || Local_126.f_247 == 9) || Local_126.f_247 == 13)
	{
		if (bParam2)
		{
			if (bParam1)
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
						return "place_bet_double_down_player_02";
					
					default:
				}
			}
			else
			{
				return "place_bet_small_player_02";
			}
		}
		if (!bParam1)
		{
			return "place_bet_small_player_02";
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
					return "place_bet_large_player_02";
				
				default:
			}
			return "place_bet_small_player_02";
		}
	}
	else
	{
		if (bParam2)
		{
			if (bParam1)
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
						return "place_bet_double_down";
					
					default:
				}
			}
			else
			{
				switch (unk_0x09AC81E49EA267F7(0, 4))
				{
					case 0:
						return "place_bet_small";
					
					case 1:
						return "place_bet_small_alt1";
					
					case 2:
						return "place_bet_small_alt2";
					
					case 3:
						return "place_bet_small_alt3";
					}
				}
			
			default:
		}
		if (!bParam1)
		{
			switch (unk_0x09AC81E49EA267F7(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				
				default:
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
					return "place_bet_large";
				
				default:
			}
			switch (unk_0x09AC81E49EA267F7(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				}
			}
		
		default:
	}
	return "";
}

void func_165(int iParam0)
{
	Local_126 = iParam0;
}

void func_166()
{
	char* sVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 2))
	{
		unk_0x0674E58A79778E99(&(Local_126.f_250), 2);
	}
	unk_0x38C3A68D7861DCFD(2, 210, 1);
	unk_0x558EC149EB2BC0A2(2, 210);
	if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
	{
		if (unk_0x9A01369A10646AFE(2, 210))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			unk_0x5D96D8530B3D0904(&(Local_126.f_250), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_377(Local_126.f_247) == 2 || func_377(Local_126.f_247) == 3) || func_424(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		unk_0x0D3BE1DE0262A012(sVar0, false);
		if (func_292(0, -1, 0) && unk_0x27117E2CDD4D67C3(sVar0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 1))
			{
				func_291(0, 0);
				func_289(1, sVar0, sVar0);
				func_288("BJACK_RULES");
				func_170(1, iLocal_136, 9);
				func_169(1, 1, 1, 1, 1);
				func_287(-1, 1, 1);
				func_286(func_168(iLocal_136), 0, 0);
				func_285(func_167(iLocal_136));
				unk_0x5D96D8530B3D0904(&(Local_126.f_250), 1);
			}
			func_246(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x9A01369A10646AFE(2, 202))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_243(1, -1);
			unk_0xF5A41F3D3B38EFE3(sVar0);
			iLocal_136 = 1;
			Local_126.f_250 = 0;
			unk_0x5D96D8530B3D0904(&(Local_126.f_250), 2);
		}
		else if (unk_0x9A01369A10646AFE(2, 190))
		{
			iLocal_136++;
			if (iLocal_136 > 9)
			{
				iLocal_136 = 1;
			}
			unk_0x0674E58A79778E99(&(Local_126.f_250), 1);
		}
		else if (unk_0x9A01369A10646AFE(2, 189))
		{
			iLocal_136 = (iLocal_136 - 1);
			if (iLocal_136 < 1)
			{
				iLocal_136 = 9;
			}
			unk_0x0674E58A79778E99(&(Local_126.f_250), 1);
		}
	}
}

char* func_167(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1";
		
		case 2:
			return "BJACK_RULE_2";
		
		case 3:
			return "BJACK_RULE_3";
		
		case 4:
			return "BJACK_RULE_4";
		
		case 5:
			return "BJACK_RULE_5";
		
		case 6:
			return "BJACK_RULE_6";
		
		case 7:
			return "BJACK_RULE_7";
		
		case 8:
			return "BJACK_RULE_8";
		
		case 9:
			if ((func_377(Local_126.f_247) == 2 || func_377(Local_126.f_247) == 3) || func_424(unk_0xD803B885F5E47A62()))
			{
				return "BJACK_RULE_9b";
			}
			else
			{
				return "BJACK_RULE_9a";
			}
			break;
	}
	return "";
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1T";
		
		case 2:
			return "BJACK_RULE_2T";
		
		case 3:
			return "BJACK_RULE_3T";
		
		case 4:
			return "BJACK_RULE_4T";
		
		case 5:
			return "BJACK_RULE_5T";
		
		case 6:
			return "BJACK_RULE_6T";
		
		case 7:
			return "BJACK_RULE_7T";
		
		case 8:
			return "BJACK_RULE_8T";
		
		case 9:
			if ((func_377(Local_126.f_247) == 2 || func_377(Local_126.f_247) == 3) || func_424(unk_0xD803B885F5E47A62()))
			{
				return "BJACK_RULE_9Tb";
			}
			else
			{
				return "BJACK_RULE_9Ta";
			}
			break;
	}
	return "";
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	Global_22350.f_5735 = iParam0;
	Global_22350.f_5736 = iParam1;
	Global_22350.f_5737 = iParam2;
}

void func_171(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_172(var uParam0, var uParam1, var uParam2, int iParam3)
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
		func_178(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_177(1);
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
						func_176(unk_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_176(unk_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_176(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
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
						func_175(&(uParam2->f_1[iVar0 /*57*/].f_32));
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
					func_176(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_176(&(uParam2->f_1[iVar0 /*57*/].f_16));
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
						func_175(&(uParam2->f_1[iVar0 /*57*/].f_32));
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
		func_174(*uParam0, uParam1);
	}
	func_173();
}

void func_173()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_174(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_175(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_176(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_177(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_178(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_179(var uParam0)
{
	return uParam0->f_692;
}

void func_180(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_181()
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

void func_182(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_183(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_184(var uParam0)
{
	func_185(uParam0);
	uParam0->f_692 = 1;
}

void func_185(var uParam0)
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

var func_186(bool bParam0)
{
	if (func_151())
	{
		if (!bParam0)
		{
			switch (unk_0x09AC81E49EA267F7(0, 8))
			{
				case 0:
					Local_126.f_1582 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_126.f_1582 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_126.f_1582 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_126.f_1582 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_126.f_1582 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_126.f_1582 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_126.f_1582 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_126.f_1582 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0x09AC81E49EA267F7(0, 13))
		{
			case 0:
				Local_126.f_1582 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_126.f_1582 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_126.f_1582 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_126.f_1582 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_126.f_1582 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_126.f_1582 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_126.f_1582 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_126.f_1582 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_126.f_1582 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_126.f_1582 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_126.f_1582 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_126.f_1582 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_126.f_1582 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_126.f_1582;
}

int func_187()
{
	if (func_188() == 0)
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	return Global_1312467.f_18;
}

void func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_115();
	if (iVar0 == 0)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_113();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26398)
	{
		func_112(-1274895349, Global_262145.f_26398);
		func_113();
		Global_2460613 = 1;
	}
	else
	{
		func_112(-1274895349, (iVar2 - iParam0));
	}
}

int func_190(var uParam0, bool bParam1, bool bParam2)
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

int func_191()
{
	if ((Local_126.f_232 && Local_126.f_233) && (!Local_126.f_235 && Local_131.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if (unk_0x0D03A641486A2001() != func_193())
	{
		return unk_0x3DDF605689C8A861(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()));
	}
	return 0;
}

int func_193()
{
	return -1;
}

void func_194()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	int iVar12;
	
	if (!unk_0x06F8112AA79C53D9(2, 207))
	{
		if (bLocal_146)
		{
			func_296(unk_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_146 = false;
	}
	if (!unk_0x06F8112AA79C53D9(2, 208))
	{
		if (bLocal_145)
		{
			func_296(unk_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_145 = false;
	}
	if ((((Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0 && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && (Local_116.f_1515[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] < 9 || !unk_0xEAE0D21A50E6C7F4(Local_116.f_1555[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 13)))
	{
		if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0)
		{
			if ((((unk_0x06F8112AA79C53D9(2, 207) && !unk_0x06F8112AA79C53D9(2, 208)) && !bLocal_145) && !func_66(&uLocal_147)) && !unk_0x9F4FE516EAACCFC5(Local_126.f_242))
			{
				if (!bLocal_146)
				{
					if (unk_0xA4FD7964FEE91ED8(0) == 4)
					{
					}
					func_296(unk_0xD803B885F5E47A62(), 0, 0, 0);
					bLocal_146 = true;
				}
			}
		}
		else
		{
			if (bLocal_146)
			{
				func_296(unk_0xD803B885F5E47A62(), 0, 256, 0);
			}
			bLocal_146 = false;
		}
		if (Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_12 >= 2)
		{
			if ((((unk_0x06F8112AA79C53D9(2, 208) && !unk_0x06F8112AA79C53D9(2, 207)) && !bLocal_146) && !func_66(&uLocal_147)) && !unk_0x9F4FE516EAACCFC5(Local_126.f_242))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					func_296(unk_0xD803B885F5E47A62(), 0, 0, 0);
				}
				bLocal_145 = true;
			}
		}
		else
		{
			if (bLocal_145)
			{
				func_296(unk_0xD803B885F5E47A62(), 0, 256, 0);
			}
			bLocal_145 = false;
		}
	}
	else
	{
		if (bLocal_146 || bLocal_145)
		{
			func_296(unk_0xD803B885F5E47A62(), 0, 256, 0);
		}
		bLocal_146 = false;
		bLocal_145 = false;
	}
	if (bLocal_145 || bLocal_146)
	{
		unk_0x01861BC775A34949(1);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 166, 1);
		}
		if (!unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x8BC9595FD2792B5D("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x9F4FE516EAACCFC5(Local_126.f_242))
		{
			Local_126.f_242 = unk_0x92B061D59B9B540A(26379945, 1);
			unk_0x86F44313DFA8F00C(Local_126.f_242, func_207(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, bLocal_145), func_206(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, bLocal_145), func_205(bLocal_145), 0, 1, 1, 2);
			unk_0x91F5B0244AAE6222(Local_126.f_242, "HAND_SHAKE", 0.03f);
			unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
		}
		else if (bLocal_145)
		{
			if (Local_116.f_1525[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4])
			{
				if (func_27(&(Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/])) == 21 && Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_12 == 2)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BJ"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/])) > 21)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BUSTED"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BUSTED");
					}
				}
				else if (!func_318("BJACK_D_HAND1", func_27(&(Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/]))))
				{
					func_93("BJACK_D_HAND1", func_27(&(Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/])));
				}
			}
			else if (!func_318("BJACK_D_HAND1", func_35(Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/][1])))
			{
				func_93("BJACK_D_HAND1", func_35(Local_116.f_846[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/][1]));
			}
			fVar0 = unk_0x86CC98177DFF41EC(Local_126.f_242);
			fVar1 = 50f;
			fVar1 = func_204(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, 1);
			fVar0 = func_202(fVar0, fVar1, 0.2f, 4);
			unk_0x86F44313DFA8F00C(Local_126.f_242, func_207(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, bLocal_145), func_206(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, bLocal_145), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_146)
		{
			fVar4 = unk_0x86CC98177DFF41EC(Local_126.f_242);
			fVar5 = 50f;
			vVar6 = { unk_0x17D61C69BA58F815(Local_126.f_242, 2) };
			vVar7 = { 0f, 0f, 0f };
			vVar8 = { -38.1166f, -0.0930717f, -102.613f };
			vVar9 = { unk_0xD06724447386BC29(Local_126.f_242) };
			vVar10 = { 0f, 0f, 0f };
			vVar11 = { 966.621f, 32.009f, 116.621f };
			if (vVar6.z < 0f)
			{
				vVar6.z = (vVar6.z + 360f);
			}
			if (!func_66(&uLocal_143))
			{
				iVar12 = unk_0x0DED1C1B8250FA57(2, 30);
				bVar2 = iVar12 < 100;
				bVar3 = iVar12 > 150;
				if (bVar2 || bVar3)
				{
					func_67(&uLocal_143, 0, 0);
				}
			}
			else if (func_65(&uLocal_143, 500, 0))
			{
				func_63(&uLocal_143);
			}
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0 && Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 1)
			{
				if (bVar2)
				{
					iLocal_138 = (iLocal_138 - 1);
					if (iLocal_138 < func_201(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3))
					{
						iLocal_138 = func_201(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3);
					}
				}
				if (bVar3)
				{
					iLocal_138++;
					if (iLocal_138 > func_200(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3))
					{
						iLocal_138 = func_200(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3);
					}
				}
			}
			else
			{
				iLocal_138 = 0;
			}
			vVar11 = { func_207(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, 0) };
			vVar8 = { func_199(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3) };
			fVar5 = func_204(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, 0);
			if (vVar8.z < 0f)
			{
				vVar8.z = (vVar8.z + 360f);
			}
			vVar7 = { func_197(vVar6, vVar8, 0.2f, 4) };
			vVar10 = { func_196(vVar9, vVar11, 0.2f, 4) };
			if (vVar7.z > 180f)
			{
				vVar7.z = (vVar7.z - 360f);
			}
			else if (vVar7.z < -180f)
			{
				vVar7.z = (vVar7.z + 360f);
			}
			if (func_195(vVar6, vVar8, 10f, 0) && func_195(vVar9, vVar11, 0.1f, 0))
			{
				fVar4 = func_202(fVar4, fVar5, 0.2f, 4);
			}
			unk_0x86F44313DFA8F00C(Local_126.f_242, vVar10, vVar7, fVar4, 0, 1, 1, 2);
		}
	}
	else
	{
		if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x9F4FE516EAACCFC5(Local_126.f_242))
		{
			unk_0x01861BC775A34949(1);
			if (!func_66(&uLocal_147) && bLocal_137)
			{
				func_67(&uLocal_147, 0, 0);
				unk_0x82A772610883F395("DefaultBlinkOutro", 0, 0);
			}
			else if (func_65(&uLocal_147, 100, 0) || !bLocal_137)
			{
				unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
				unk_0x9A8DDC7C522F5BF5(Local_126.f_242, 0);
				unk_0xA37A90C62806D848(1);
				func_63(&uLocal_147);
				bLocal_137 = false;
				iLocal_138 = 0;
			}
		}
	}
	if (bLocal_146 || bLocal_137)
	{
		if ((Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 >= 2 && ((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 13) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 11)) || (((unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 11) && unk_0xE9F78D191AD5EDBA(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4])) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]))) && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_14(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, Local_116.f_1575[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 1), 3)))) || (unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 11) && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 < 3))
		{
			if (func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) == 21 && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BJ");
				}
			}
			else if (func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) <= 21 && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 7)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
				{
					func_94("BJACK_P_HAND2", "BJACK_7CC");
				}
			}
			else if (func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) > 21)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BUSTED");
				}
			}
			else if (!func_318("BJACK_P_HAND1", func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/]))))
			{
				func_93("BJACK_P_HAND1", func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])));
			}
		}
		else if (Local_116.f_1575[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (4 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)) && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 >= 2)
		{
			if (func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) == 21 && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
			{
				if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) == 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) <= 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) <= 21 && Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 == 7)
			{
				if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) == 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) <= 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])) > 21)
			{
				if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) == 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) <= 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) == 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) <= 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 7)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) > 21)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (!func_103("BJACK_SHOW_1", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])), func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/]))))
			{
				func_102("BJACK_SHOW_1", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])), func_27(&(Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/])));
			}
		}
		else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) == 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 2)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BJ");
			}
		}
		else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) <= 21 && Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 == 7)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
			{
				func_94("BJACK_P_HAND2", "BJACK_7CC");
			}
		}
		else if (func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])) > 21)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BUSTED");
			}
		}
		else if (!func_318("BJACK_P_HAND1", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/]))))
		{
			func_93("BJACK_P_HAND1", func_27(&(Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/])));
		}
	}
}

int func_195(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

Vector3 func_196(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0.x = func_202(vParam0.x, vParam1.x, fParam2, iParam3);
	vVar0.y = func_202(vParam0.y, vParam1.y, fParam2, iParam3);
	vVar0.z = func_202(vParam0.z, vParam1.z, fParam2, iParam3);
	return vVar0;
}

Vector3 func_197(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0.x = func_198(vParam0.x, vParam1.x, fParam2, iParam3);
	vVar0.y = func_198(vParam0.y, vParam1.y, fParam2, iParam3);
	vVar0.z = func_198(vParam0.z, vParam1.z, fParam2, iParam3);
	return vVar0;
}

float func_198(float fParam0, float fParam1, float fParam2, int iParam3)
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
	fVar1 = func_202(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_199(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_217(iParam0) };
	vVar1 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_138)
			{
				case 0:
					vVar1 = { -60.84f, 0f, -87.48f };
					break;
				
				case -1:
					vVar1 = { -33.84f, 0f, -51.84f };
					break;
				
				case -2:
					vVar1 = { -22.68f, 0f, -58.68f };
					break;
				
				case -3:
					vVar1 = { -18f, 0f, -72f };
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_138)
			{
				case 0:
					vVar1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					vVar1 = { -33.48f, 0f, -123.48f };
					break;
				
				case -1:
					vVar1 = { -36f, 0f, -45f };
					break;
				
				case -2:
					vVar1 = { -22.68f, 0f, -51.48f };
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_138)
			{
				case 0:
					vVar1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					vVar1 = { -33.84f, 0f, -130.32f };
					break;
				
				case 2:
					vVar1 = { -22.32f, 0f, -124.92f };
					break;
				
				case -1:
					vVar1 = { -35.64f, 0f, -50.4f };
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_138)
			{
				case 0:
					vVar1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					vVar1 = { -34.56f, 0f, -126f };
					break;
				
				case 2:
					vVar1 = { -22.32f, 0f, -119.52f };
					break;
				
				case 3:
					vVar1 = { -18.36f, 0f, -104.4f };
					break;
			}
			break;
	}
	return Vector(vVar0.z, 0f, 0f) + vVar1;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 0;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 1;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 2;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return -3;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return -2;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return -1;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 0;
		
		default:
	}
	return 0;
}

float func_202(float fParam0, float fParam1, float fParam2, int iParam3)
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
			fParam2 = ((-cos(func_203((3.141593f * fParam2))) / 2f) + 0.5f);
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
			fVar0 = func_202(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_202(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_203(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_204(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = 50f;
	if (bParam1)
	{
		return 37.8425f;
	}
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_138)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
				
				case -3:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_138)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_138)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_138)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case 3:
					fVar0 = 26.8741f;
					break;
			}
			break;
	}
	return fVar0;
}

float func_205(bool bParam0)
{
	float fVar0;
	
	fVar0 = 35.3669f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	return fVar0;
}

Vector3 func_206(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (bParam2)
	{
		return Vector(func_69(iParam1), 0f, 0f) + Vector(0f, 0.061f, -59.1316f);
	}
	else
	{
		vVar0 = { func_217(iParam0) };
		return Vector(vVar0.z, 0f, 0f) + Vector(-87.48f, 0f, -60.84f);
	}
	return 0f, 0f, 0f;
}

Vector3 func_207(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (bParam2)
	{
		return unk_0x8A5E176FF719A014(func_70(iParam1), func_69(iParam1), -0.0094f, -0.0611f, 1.5098f);
	}
	else
	{
		vVar0 = { func_217(iParam0) };
		return unk_0x8A5E176FF719A014(func_357(iParam0), vVar0.z, 0.245f, 0f, 1.415f);
	}
	return 0f, 0f, 0f;
}

void func_208(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_209(int iParam0)
{
	if (Local_116.f_1515[iParam0] == 2)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5, 0))
		{
			Local_126.f_2 = { Local_116.f_1[iParam0 /*211*/] };
			unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5), 0);
		}
	}
	else if (Local_116.f_1515[iParam0] > 2 && unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5, 0))
	{
		if (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0)
		{
			if (Local_126.f_213.f_8 != Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 || (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0 && Local_126.f_222.f_8 != Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8))
			{
				Local_126.f_213 = { Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/] };
			}
			else
			{
				if (Local_126.f_213[iLocal_141] != Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/][iLocal_141])
				{
					iLocal_140 = 0;
					iLocal_141 = 0;
					iLocal_142 = 0;
					if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
					{
						Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
					}
					Local_131.f_18 = func_415();
					Local_131.f_19 = func_192();
					Local_131.f_17 = func_190(&uLocal_127, 0, 0);
					Local_131.f_7 = func_397();
					if (Global_262145.f_26035)
					{
						unk_0x5943F8BE26E6D616(&Local_131);
					}
					func_371(1);
					unk_0xA37A90C62806D848(1);
					return 1;
				}
				iLocal_141++;
				if (iLocal_141 >= Local_126.f_213.f_8)
				{
					iLocal_141 = 0;
				}
			}
		}
		if (Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0)
		{
			if (Local_126.f_222.f_8 != Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/].f_8 || (Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0 && Local_126.f_213.f_8 != Local_116.f_899[unk_0xD803B885F5E47A62() /*9*/].f_8))
			{
				Local_126.f_222 = { Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/] };
			}
			else
			{
				if (Local_126.f_222[iLocal_142] != Local_116.f_1188[unk_0xD803B885F5E47A62() /*9*/][iLocal_142])
				{
					iLocal_140 = 0;
					iLocal_141 = 0;
					iLocal_142 = 0;
					if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
					{
						Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
					}
					Local_131.f_18 = func_415();
					Local_131.f_19 = func_192();
					Local_131.f_17 = func_190(&uLocal_127, 0, 0);
					Local_131.f_7 = func_397();
					if (Global_262145.f_26035)
					{
						unk_0x5943F8BE26E6D616(&Local_131);
					}
					func_371(1);
					unk_0xA37A90C62806D848(1);
					return 1;
				}
				iLocal_142++;
				if (iLocal_142 >= Local_126.f_222.f_8)
				{
					iLocal_142 = 0;
				}
			}
		}
		if (Local_116.f_1[iParam0 /*211*/][iLocal_140] != Local_126.f_2[iLocal_140])
		{
			iLocal_140 = 0;
			iLocal_141 = 0;
			iLocal_142 = 0;
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
			{
				Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
			}
			Local_131.f_18 = func_415();
			Local_131.f_19 = func_192();
			Local_131.f_17 = func_190(&uLocal_127, 0, 0);
			Local_131.f_7 = func_397();
			if (Global_262145.f_26035)
			{
				unk_0x5943F8BE26E6D616(&Local_131);
			}
			func_371(1);
			unk_0xA37A90C62806D848(1);
			return 1;
		}
		iLocal_140++;
		if (iLocal_140 >= 208)
		{
			iLocal_140 = 0;
		}
	}
	return 0;
}

void func_210()
{
	int iVar0;
	
	iVar0 = func_377(Local_126.f_247);
	if (iVar0 < 32)
	{
		unk_0x5D96D8530B3D0904(&(Local_126.f_254), iVar0);
	}
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_418())
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 != func_418())
	{
		return func_320(iVar0);
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_418())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_418();
}

void func_213(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_6 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_329())
		{
			func_213(uParam0, 7);
			return;
		}
	}
	uParam0->f_6 = iParam1;
	func_63(&(Local_126.f_1580));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_67(&(Local_126.f_1580), 0, 0);
	}
}

int func_214()
{
	int iVar0;
	
	iVar0 = func_377(Local_126.f_247);
	if (iVar0 < 32)
	{
		return unk_0xEAE0D21A50E6C7F4(Local_126.f_254, iVar0);
	}
	return 0;
}

char* func_215(int iParam0)
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

char* func_216()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_217(int iParam0)
{
	int iVar0;
	
	if (Local_126.f_257 == 1)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, -2126678982, 0, 0, 0);
	}
	else if (func_377(iParam0) == 0 || func_377(iParam0) == 1)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, 112404821, 0, 0, 0);
	}
	else
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, -2126678982, 0, 0, 0);
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

var func_218(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0xEEB20D14BD38615E(func_216(), func_215(iParam1), func_357(iParam0), func_217(iParam0), 0.01f, 2) };
	return vVar0.z;
}

float func_219(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

Vector3 func_220(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x1BB04F10296A1C5E(func_216(), func_215(iParam1), func_357(iParam0), func_217(iParam0), 0.01f, 2) };
	return vVar0;
}

int func_221()
{
	unk_0x3F423BF5B8125A50(func_58());
	unk_0x3F423BF5B8125A50(func_72());
	unk_0x3F423BF5B8125A50(func_88());
	unk_0x3F423BF5B8125A50(func_216());
	if (((unk_0xB4AE0788C1587752(func_58()) && unk_0xB4AE0788C1587752(func_72())) && unk_0xB4AE0788C1587752(func_88())) && unk_0xB4AE0788C1587752(func_216()))
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	if (func_65(&(Local_126.f_1578), 3500, 0))
	{
		func_63(&(Local_126.f_1578));
		return 1;
	}
	return 0;
}

bool func_223(int iParam0)
{
	if (Local_116.f_1600[iParam0] == func_418())
	{
		return 0;
	}
	return Local_116.f_1600[iParam0] != unk_0xD803B885F5E47A62();
}

void func_224(int iParam0)
{
	Global_1696054 = unk_0xDD0E7998AE8AD485();
	Global_1696071 = iParam0;
	if (!func_232())
	{
		func_229();
	}
	if (!func_228())
	{
		func_225();
	}
}

void func_225()
{
	func_112(-1040706016, unk_0xDD0E7998AE8AD485());
	func_227();
	func_226();
	Global_1696068 = 1;
	Global_1696063 = 0;
}

void func_226()
{
	func_112(1599929969, unk_0xDD0E7998AE8AD485());
}

void func_227()
{
	func_112(-1959489725, 0);
	func_112(-1767815638, 0);
	func_112(-1983697810, 0);
	func_112(2071236561, 0);
	func_112(-569486077, 0);
	func_112(-806012719, 0);
	func_112(-1030054372, 0);
	func_112(611934680, 0);
	func_112(387434261, 0);
	func_112(92143537, 0);
	func_112(1599929969, 0);
}

bool func_228()
{
	return Global_1696068;
}

void func_229()
{
	func_112(937560627, unk_0xDD0E7998AE8AD485());
	func_231();
	func_230((unk_0xDD0E7998AE8AD485() + 86400));
	Global_1696067 = 1;
}

void func_230(int iParam0)
{
	Global_1696062 = iParam0;
}

void func_231()
{
	func_112(575353331, unk_0xDD0E7998AE8AD485());
}

bool func_232()
{
	return func_116(937560627) != 0;
}

bool func_233(int iParam0)
{
	return Local_116.f_1600[iParam0] == unk_0xD803B885F5E47A62();
}

void func_234()
{
	func_359(2);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 185, false);
	func_335();
	func_296(unk_0xD803B885F5E47A62(), 1, 0, 0);
	func_242();
	unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 2);
	func_235();
}

void func_235()
{
	int iVar0;
	int iVar1;
	
	if (Global_1696071 != -1)
	{
		iVar0 = (unk_0xDD0E7998AE8AD485() - Global_1696054);
		iVar1 = (unk_0xDD0E7998AE8AD485() - Global_1696055);
		if (Global_1696055 == -1)
		{
			func_236(iVar0);
		}
		else
		{
			func_236(iVar1);
		}
		func_231();
		func_226();
		Global_1696054 = -1;
		Global_1696055 = -1;
		Global_1696071 = -1;
	}
}

void func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = func_241();
	Global_1696063 = (Global_1696063 + iParam0);
	func_237(iVar0, iParam0);
	func_226();
}

void func_237(int iParam0, int iParam1)
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
		iVar5 = func_240((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_116(iVar5);
		iVar0++;
	}
	iVar6 = func_239(&uVar1, iParam0, 12);
	iVar6 = (iVar6 + iParam1);
	func_238(&uVar1, iParam0, 12, iVar6);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		uVar7 = func_240((iVar4 + iVar0));
		func_112(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_239(var uParam0, int iParam1, int iParam2)
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

int func_240(int iParam0)
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

int func_241()
{
	return func_116(92143537);
}

void func_242()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_243(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_245(&iVar0, 0, iParam1))
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
		func_244(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_244(int iParam0)
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

int func_245(var uParam0, bool bParam1, int iParam2)
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

void func_246(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_245(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_281(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22350)
	{
		if (func_279(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_278())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_278())
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
			func_274(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar63, func_273(29), 64);
					StringCopy(&cVar64, func_270(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == -1487683087)
					{
						func_269(Global_22347, Global_22348, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
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
				func_269(Global_22347, (Global_22348 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_268();
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
					func_268();
					func_266((((Global_22347 + fParam5) - 0.00390625f) - func_267("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_268();
						func_266((((Global_22347 + fParam5) - 0.00390625f) - func_267("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
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
				func_269(Global_22347, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_279(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_265(fVar40);
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
				func_269(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_265(fVar40);
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
					func_279(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_264(Global_22350.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_273(Global_22350.f_4768), func_270(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_279(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_265(fVar40);
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
				func_269(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_265(fVar40);
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
					func_279(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_264(Global_4268421.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_273(Global_4268421.f_67), func_270(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_261(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_259(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_279(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_279(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_279(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_264(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_273(26), func_270(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_279(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_279(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_264(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_273(27), func_270(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_259(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_258(bVar32);
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
												if (func_279(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_279(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_264(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_273(Global_22350.f_4433[(iVar22 + iVar28)]), func_270(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_273(Global_22350.f_4433[(iVar22 + iVar28)]), func_270(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_257() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_259(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_279(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_279(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_264(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_273(Global_22350.f_4433[(iVar22 + iVar14)]), func_270(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_273(Global_22350.f_4433[(iVar22 + iVar14)]), func_270(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_273(Global_22350.f_4433[(iVar22 + iVar14)]), func_270(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_259(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_258(bVar32);
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
										if (func_279(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_279(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_264(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_273(26), func_270(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_279(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_279(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_264(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_273(27), func_270(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_259(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										func_256((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
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
										func_259(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_258(bVar32);
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
										if (func_279(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_279(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_264(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_273(26), func_270(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_279(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_279(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_264(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_273(27), func_270(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_259(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
									func_255((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_279(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_279(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_279(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_264(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_273(26), func_270(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_279(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_279(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_264(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_273(27), func_270(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_279(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_264(Global_22350.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_273(Global_22350.f_4433[iVar22]), func_270(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_254(Global_22350.f_4433[iVar22])), (fVar37 * func_254(Global_22350.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
								if (func_279(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_247(0);
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
		func_171(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_247(int iParam0)
{
	if (func_253())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_252(0))
		{
			func_248(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_248(int iParam0)
{
	if (func_253())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_251())
		{
			func_250(1, 1);
		}
		else
		{
			func_250(0, 0);
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
	if (!func_249())
	{
		Global_19486.f_1 = 3;
	}
}

int func_249()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_250(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_252(0))
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

bool func_251()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_252(int iParam0)
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

bool func_253()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

float func_254(int iParam0)
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

void func_255(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_256(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_257()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_258(bool bParam0)
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

void func_259(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_260(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_260(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_261(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_245(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_281(bParam4, bParam8))
	{
		return;
	}
	if (func_262())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_17(unk_0xD803B885F5E47A62(), 0))
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
					func_176(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_176(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_175(&(Global_22350.f_4964[iVar1 /*4*/]));
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
				func_176(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_175(&(Global_4268421.f_16));
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

int func_262()
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_263())
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

int func_263()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_264(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_265(float fParam0)
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

void func_266(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_267(char* sParam0, int iParam1, int iParam2)
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
	func_268();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_268()
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

void func_269(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_270(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_272(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_271(&uVar1);
			}
		}
		else
		{
			return func_271(&(Global_22350.f_7029[iParam0 /*16*/]));
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

var func_271(var uParam0)
{
	return uParam0;
}

struct<13> func_272(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_273(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_272(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_271(&uVar0);
		}
		else
		{
			return func_271(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_274(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_277(Global_22350.f_5218, 1);
	}
	else
	{
		func_277(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_276(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_279(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_275(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
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

float func_275(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0);
}

float func_276(char* sParam0)
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
	func_259(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_277(int iParam0, bool bParam1)
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

int func_278()
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

int func_279(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_273(iParam0), 64);
	StringCopy(&cVar1, func_270(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0);
			if (func_278())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_278())
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
		vVar7.x = (vVar7.x * (func_280(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_280(iParam0) / fVar4));
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

float func_280(int iParam0)
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

int func_281(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_283(8, -1) && func_282() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_282()
{
	return Global_1312812;
}

bool func_283(int iParam0, int iParam1)
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

void func_284(int iParam0, char* sParam1, int iParam2)
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

void func_285(char* sParam0)
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

void func_286(char* sParam0, int iParam1, int iParam2)
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

void func_287(int iParam0, bool bParam1, int iParam2)
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

void func_288(char* sParam0)
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

void func_289(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_290(29, sParam1, sParam2);
}

void func_290(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_291(bool bParam0, bool bParam1)
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

bool func_292(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_245(&iVar0, 1, iParam1))
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
	bVar2 = func_293(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_293(var uParam0)
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

void func_294(int iParam0)
{
	Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 = iParam0;
	Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 = func_377(iParam0);
}

bool func_295()
{
	return Global_4264528 == 1;
}

void func_296(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_305())
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
		if (!func_187())
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
				else if (bVar14 || (!func_17(unk_0xD803B885F5E47A62(), 0) && !func_304()))
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
					func_301(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_300(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					unk_0x120A395B0ECB8EA5(iVar27, 1);
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
					func_299();
					func_298();
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
				if (!func_300(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
							unk_0x120A395B0ECB8EA5(iVar27, 1);
						}
					}
					if (func_297(Global_4456448.f_232883))
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

bool func_297(int iParam0)
{
	return iParam0 == 17;
}

void func_298()
{
	vector3 vVar0;
	
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_299()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_300(int iParam0)
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

void func_301(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
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
			if (iParam0 == 1)
			{
				func_303();
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
		if (func_17(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_302(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_302(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_303()
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

bool func_304()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_305()
{
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_306()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_307(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_308(*uParam0);
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

int func_308(int iParam0)
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

int func_309(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_308(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_252(0))
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

bool func_310(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 26);
}

void func_311(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == -1)
		{
			func_307(uParam0);
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

int func_312(int iParam0)
{
	if (func_313(iParam0, 1))
	{
		return Global_1628237[func_322() /*615*/].f_11.f_450;
	}
	return -1;
}

bool func_313(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_314(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_418();
}

int func_314(int iParam0)
{
	if (iParam0 != func_418())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_418())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_315()
{
	if (((((((((func_331("BJACK_USED") || func_331("CAS_MG_CBAN")) || func_331("CAS_MG_CTIME")) || func_318("CAS_MG_MEMB2", func_319(1))) || func_331("CAS_MG_SUITE2")) || func_331("CAS_MG_NOCHIPS2")) || func_331("CAS_MG_LOWCHIPS2")) || func_331("CAS_MG_NOCHIPS6")) || func_331("CAS_MG_LOWCHIPS6")) || func_331("BJACK_NA"))
	{
		return 1;
	}
	return 0;
}

void func_316()
{
	if (!unk_0x7A7BDE279347E517(func_319(0), false, true, 0, -1, 0))
	{
		func_208("MAITRD_M_D0E", -1);
	}
	else if (func_320(unk_0xD803B885F5E47A62()))
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

void func_317(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_318(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_319(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

bool func_320(int iParam0)
{
	if (iParam0 == func_418())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 18);
}

bool func_321()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_369.f_1, 18);
}

int func_322()
{
	return Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_323(bool bParam0)
{
	return func_313(unk_0xD803B885F5E47A62(), bParam0);
}

int func_324(int iParam0)
{
	if (iParam0 != func_418())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_325()
{
	if (func_328() <= 0)
	{
		return 0;
	}
	if (func_327() <= 0)
	{
		return 1;
	}
	if (func_326())
	{
		return 2;
	}
	return 3;
}

bool func_326()
{
	return Global_1696061 != 0;
}

int func_327()
{
	return (Global_262145.f_26398 + func_115());
}

int func_328()
{
	return (Global_262145.f_26399 - func_115());
}

bool func_329()
{
	return func_325() != 3;
}

void func_330(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_331(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_332(int iParam0, var uParam1)
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

bool func_333()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

int func_334()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_335()
{
	if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 != -1)
	{
		Local_126.f_232 = 0;
		Local_126.f_233 = 0;
		Local_126.f_235 = 0;
		Local_126.f_252 = 0;
		Local_125[unk_0xD803B885F5E47A62() /*8*/] = 0;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 = -1;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 = -1;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5 = 0;
	}
}

bool func_336()
{
	return Global_2537071.f_6591;
}

int func_337()
{
	if ((func_338() != -1 && func_338() != 28) && func_338() != 17)
	{
		return 1;
	}
	return 0;
}

int func_338()
{
	return Global_968397;
}

bool func_339()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_340()
{
	return Global_2450632.f_591;
}

int func_341(int iParam0)
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
	iVar0 = func_343(iParam0);
	iVar1 = func_342(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1 /*5*/].f_3;
}

int func_342(int iParam0)
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

int func_343(int iParam0)
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

int func_344()
{
	int iVar0;
	
	if (func_313(unk_0xD803B885F5E47A62(), 1))
	{
		iVar0 = func_322();
		if (func_20(iVar0, 1, 1) && unk_0xEAE0D21A50E6C7F4(Global_1590535[iVar0 /*876*/].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_349(unk_0xD803B885F5E47A62(), 0) && func_347(unk_0xD803B885F5E47A62())) || func_345(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0)
{
	if (func_346(iParam0) != func_418())
	{
		return func_346(iParam0) == func_212(iParam0);
	}
	return 0;
}

int func_346(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

int func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_348(iParam0, 9);
	}
	return 0;
}

bool func_348(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_349(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_350()
{
	if (func_424(unk_0xD803B885F5E47A62()) && func_419() != func_418())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[func_419() /*421*/].f_310.f_4, 1) || unk_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 10))
		{
			return 0;
		}
	}
	return 1;
}

bool func_351(int iParam0, vector3 vParam1, float fParam2)
{
	return func_352(unk_0x68F4C0EC296D3901(iParam0, 1), unk_0xD9522BA9E27E1349(iParam0), vParam1, fParam2);
}

bool func_352(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x8A5E176FF719A014(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = func_353(func_354(vVar0), func_354(vParam2 - vParam0));
	return unk_0x3DCA5D50DD292443(fVar1) <= fParam3;
}

float func_353(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_354(vector3 vParam0)
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

Vector3 func_355(int iParam0)
{
	if (Local_126.f_257 == 1)
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
				return 1148.367f, 269.0835f, -51.7879f;
			
			case 1:
				return 1148.345f, 269.7643f, -51.7876f;
			
			case 2:
				return 1148.821f, 270.2321f, -51.7708f;
			
			case 3:
				return 1149.495f, 270.2401f, -51.7632f;
			
			case 4:
				return 1152.317f, 267.4195f, -51.8003f;
			
			case 5:
				return 1152.337f, 266.7202f, -51.7913f;
			
			case 6:
				return 1151.849f, 266.2183f, -51.7916f;
			
			case 7:
				return 1151.182f, 266.2501f, -51.7864f;
			
			case 8:
				return 1128.713f, 262.8658f, -51.0035f;
			
			case 9:
				return 1129.446f, 262.8649f, -51.0121f;
			
			case 10:
				return 1129.932f, 262.3822f, -51.0027f;
			
			case 11:
				return 1129.899f, 261.6921f, -51.0422f;
			
			case 12:
				return 1143.738f, 247.8562f, -51.034f;
			
			case 13:
				return 1144.459f, 247.8673f, -51.0229f;
			
			case 14:
				return 1144.951f, 247.3612f, -51.015f;
			
			case 15:
				return 1144.913f, 246.663f, -51.0236f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_356(int iParam0, vector3 vParam1, float fParam2)
{
	return vdist2(unk_0x68F4C0EC296D3901(iParam0, 1), vParam1) <= (fParam2 * fParam2);
}

Vector3 func_357(int iParam0)
{
	int iVar0;
	
	if (Local_126.f_257 == 1)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, -2126678982, 0, 0, 0);
	}
	else if (func_377(iParam0) == 0 || func_377(iParam0) == 1)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, 112404821, 0, 0, 0);
	}
	else
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, -2126678982, 0, 0, 0);
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

bool func_358(int iParam0)
{
	return Global_98796.f_344 == iParam0;
}

void func_359(int iParam0)
{
	Local_126.f_1 = iParam0;
}

void func_360(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_213(&(Local_125[iParam0 /*8*/]), 0);
	Local_125[iParam0 /*8*/].f_6.f_1 = -1;
}

int func_361()
{
	if (Local_126.f_257 == 1)
	{
		if (!unk_0xC844350D5D58C99A(Local_126.f_537))
		{
			unk_0x523BCC9DC80CD82F(-2126678982);
			if (!unk_0xB87F6CF6E5628C67(-2126678982))
			{
				return 0;
			}
			Local_126.f_537 = unk_0x7707E48765093646(-2126678982, func_70(0), 0, false, 1);
			unk_0x08841CDB215AE18F(Local_126.f_537, func_70(0), 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(Local_126.f_537, func_69(0));
			unk_0x1E9649458B15960F(Local_126.f_537, true);
			unk_0x71199B01895C6202(-2126678982);
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

void func_362(var uParam0, bool bParam1, bool bParam2)
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

int func_363()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_364(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			break;
		
		case 1:
			if ((func_367(unk_0xD803B885F5E47A62(), 1) || func_367(unk_0xD803B885F5E47A62(), 2)) || func_366())
			{
				func_213(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_367(unk_0xD803B885F5E47A62(), 1) || func_367(unk_0xD803B885F5E47A62(), 2)) || func_366())
			{
				func_213(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_365())
			{
				func_213(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_365()
{
	if ((((func_367(unk_0xD803B885F5E47A62(), 4) || func_367(unk_0xD803B885F5E47A62(), 5)) || func_367(unk_0xD803B885F5E47A62(), 6)) || func_367(unk_0xD803B885F5E47A62(), 7)) || func_366())
	{
		return 1;
	}
	return 0;
}

int func_366()
{
	if (func_65(&(Local_126.f_1580), 3500, 0))
	{
		func_63(&(Local_126.f_1580));
		return 1;
	}
	return 0;
}

bool func_367(int iParam0, int iParam1)
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
	return unk_0xEAE0D21A50E6C7F4(Local_116.f_1477[iParam0], iVar0);
}

void func_368(int iParam0, int iParam1)
{
	Global_22211.f_9 = iParam0;
	Global_22211.f_10 = iParam1;
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		func_370(1);
		func_248(1);
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

void func_370(bool bParam0)
{
	if (bParam0)
	{
		if (func_339())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

void func_371(bool bParam0)
{
	char* sVar0;
	
	if (Local_126.f_1 > 2 && unk_0xA4FD7964FEE91ED8(0) != 4)
	{
		if (((((!func_376() && !func_375()) && !func_374()) && !func_373()) && !func_81(unk_0xD803B885F5E47A62())) && !unk_0x0C2635BB5127C8FB())
		{
			func_296(unk_0xD803B885F5E47A62(), 1, 0, 0);
		}
		func_242();
	}
	if (Local_126.f_1 > 2)
	{
		func_242();
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_126.f_250, 0))
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_377(Local_126.f_247) == 2 || func_377(Local_126.f_247) == 3) || func_424(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		func_243(1, -1);
		unk_0xF5A41F3D3B38EFE3(sVar0);
		iLocal_136 = 1;
		Local_126.f_250 = 0;
	}
	if (unk_0x9F4FE516EAACCFC5(Local_126.f_242))
	{
		unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
		unk_0x9A8DDC7C522F5BF5(Local_126.f_242, 0);
		bLocal_137 = false;
		iLocal_138 = 0;
	}
	if (Local_126.f_259 != -1)
	{
		func_307(&(Local_126.f_259));
		Local_126.f_259 = -1;
	}
	Local_126.f_244 = 0;
	Local_126.f_253 = 0;
	Local_126.f_252 = 0;
	Local_126.f_232 = 0;
	Local_126.f_233 = 0;
	Local_126.f_234 = 0;
	Local_126.f_235 = 0;
	Local_126.f_243 = 0;
	Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5 = 0;
	if (!bParam0)
	{
		func_335();
	}
	Local_132.f_4 = func_397();
	Local_132.f_5 = func_190(&uLocal_129, 0, 0);
	if (Local_126.f_1 > 2)
	{
		if (Global_262145.f_26041)
		{
			unk_0xDD5EE92F7B3A4AC3(&Local_132);
		}
	}
	if (bParam0)
	{
		Local_126.f_255 = unk_0xF66E5A439A080021(func_357(Local_126.f_247), func_217(Local_126.f_247), 2, 0, false, 1065353216, 0, 1065353216);
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_255, func_216(), func_372(Local_126.f_247), 2f, -2f, 13, 16, 1148846080, 0);
		unk_0x914E6894744915F8(Local_126.f_255);
	}
	if (!bParam0)
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4), 2);
	}
	if (bParam0 || Local_126.f_1 > 2)
	{
		func_235();
	}
	func_359(10);
	func_165(0);
}

char* func_372(int iParam0)
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

int func_373()
{
	if (unk_0x8A22C4C08282BF26(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_374()
{
	return Global_1312877;
}

int func_375()
{
	if (func_188() == 3 || func_188() == 2)
	{
		return 1;
	}
	return 0;
}

int func_376()
{
	if (func_188() == 1 || func_188() == 4)
	{
		return 1;
	}
	return 0;
}

int func_377(int iParam0)
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

void func_378()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	vector3 vVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (((func_358(1581559923) || func_358(272405600)) || func_424(unk_0xD803B885F5E47A62())) && !func_396())
	{
		iLocal_134 = 1;
		if (!bLocal_133)
		{
			bLocal_133 = (func_409() && func_395());
		}
	}
	else
	{
		if (iLocal_134)
		{
			func_411();
			func_393();
			iLocal_134 = 0;
		}
		return;
	}
	if (!Global_1391799.f_776)
	{
		iVar1 = 0;
		while (iVar1 < unk_0xDFB2BAED99ED0A2E(1))
		{
			if (unk_0xB98DB26FBF676FA1(1, iVar1) == 174)
			{
				if (unk_0x218F818E64020C17(1, iVar1, &Var0, 6))
				{
					if (Var0 == 1624583700)
					{
						if (((unk_0xFB75B0F82CA525F6(Var0.f_1) && Var0.f_2 >= 0) && Var0.f_2 < 224) && func_392(Var0.f_3, Local_126.f_236) != 0)
						{
							if (Var0.f_4)
							{
								Local_126.f_260[Var0.f_2] = Var0.f_3;
							}
							else
							{
								Local_126.f_305[Var0.f_2] = Var0.f_3;
								if (Var0.f_5)
								{
									func_391(Var0.f_2);
								}
								else
								{
									func_390(Var0.f_2);
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_126.f_257)
	{
		if (iVar2 != iLocal_139 && iVar2 != Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)
		{
		}
		else
		{
			vVar3 = { func_70(iVar2) };
			vVar3.z = (vVar3.z + 0.914f);
			bVar4 = false;
			if (func_53(iVar2, Local_126.f_257))
			{
				bVar4 = true;
			}
			vVar8 = { 0f, 0f, func_69(iVar2) };
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar10 = Local_116.f_1600[(iVar2 * 4 + iVar9)];
				if (iVar10 < 0 || ((!func_358(1581559923) && !func_358(272405600)) && !func_424(unk_0xD803B885F5E47A62())))
				{
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = func_21(iVar2, iVar5, iVar9, 1);
						if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
						{
							if (unk_0x81D9425174BF4F82(Local_126.f_648[iVar6]) > 0)
							{
								unk_0x4FB9A846E72E2F23(Local_126.f_648[iVar6], floor(func_202(to_float(unk_0x81D9425174BF4F82(Local_126.f_648[iVar6])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
							}
						}
						if (Local_126.f_305[iVar6] != -1)
						{
							Local_126.f_305[iVar6] = -1;
						}
						if (func_389(iVar6))
						{
							func_390(iVar6);
						}
						iVar6 = func_21(iVar2, iVar5, iVar9, 0);
						if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
						{
							if (unk_0x81D9425174BF4F82(Local_126.f_648[iVar6]) > 0)
							{
								unk_0x4FB9A846E72E2F23(Local_126.f_648[iVar6], floor(func_202(to_float(unk_0x81D9425174BF4F82(Local_126.f_648[iVar6])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
							}
						}
						if (Local_126.f_305[iVar6] != -1)
						{
							Local_126.f_305[iVar6] = -1;
						}
						if (func_389(iVar6))
						{
							func_390(iVar6);
						}
						iVar5++;
					}
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, iVar5)]))
						{
							if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, iVar5)]) > 0)
							{
								unk_0x4FB9A846E72E2F23(Local_126.f_538[func_388(iVar2, iVar9, iVar5)], floor(func_202(to_float(unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, iVar5)])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, iVar5)]));
							}
						}
						iVar5++;
					}
				}
				else
				{
					iVar5 = 0;
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = func_21(iVar2, iVar5, iVar9, 0);
						sVar7 = func_387(Local_116.f_899[iVar10 /*9*/][iVar5], 1);
						if (iVar6 >= 0 && iVar6 < (56 * Local_126.f_257))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2])))
							{
								if ((((iVar9 == 0 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_7(iVar2), 3)) || (iVar9 == 1 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_6(iVar2), 3))) || (iVar9 == 2 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_5(iVar2), 3))) || (iVar9 == 3 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_4(iVar2), 3)))
								{
									if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
									{
										iVar12 = 0;
										while (iVar12 < 7)
										{
											iVar13 = func_21(iVar2, iVar12, iVar9, 0);
											if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar13]))
											{
												iVar11 = iVar12;
											}
											iVar12++;
										}
										if (iVar5 == iVar11)
										{
											if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]) && !unk_0xD59B17D2DFF98E26(Local_126.f_648[iVar6]))
											{
												unk_0x9F528B1B53FBC5D9(Local_126.f_648[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
											}
										}
										else if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
										{
											unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
											Local_126.f_305[iVar6] = -1;
										}
									}
									else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
									{
										if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
										{
											unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
											Local_126.f_305[iVar6] = -1;
										}
									}
								}
								else if (!unk_0xEA6BC48857E0AC4C(sVar7))
								{
									Local_126.f_305[iVar6] = -1;
									if (!unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
									{
										if ((((unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]))) && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3)) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206)) && iVar5 == 1)
										{
										}
										else
										{
											if (func_392(Local_116.f_899[iVar10 /*9*/][iVar5], Local_126.f_236) != 0)
											{
												Local_126.f_648[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_116.f_899[iVar10 /*9*/][iVar5], Local_126.f_236), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0)), 0, false, 1);
												unk_0x08841CDB215AE18F(Local_126.f_648[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0)), 0, 0, 1);
												unk_0xC023D1C4BF532815(Local_126.f_648[iVar6], vVar8 + func_385(iVar5, iVar9, 0, func_389(iVar6)), 2, 1);
											}
											Jump @2149; //curOff = 1854
											if (unk_0x134B62B726CEC8E6(Local_126.f_648[iVar6]) != func_392(Local_116.f_899[iVar10 /*9*/][iVar5], Local_126.f_236))
											{
												unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
											}
											else if ((((unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]))) && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3)) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206)) && iVar5 == 1)
											{
												unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
											}
											else if (unk_0xD59B17D2DFF98E26(Local_126.f_648[iVar6]))
											{
												unk_0x15AFB6CBDE990FB6(Local_126.f_648[iVar6], 0, 1);
												unk_0x08841CDB215AE18F(Local_126.f_648[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0)), 0, 0, 1);
												unk_0xC023D1C4BF532815(Local_126.f_648[iVar6], vVar8 + func_385(iVar5, iVar9, 0, func_389(iVar6)), 2, 1);
											}
											Jump @2890; //curOff = 2149
											if (Local_126.f_305[iVar6] != -1)
											{
												if (!unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
												{
													Local_126.f_648[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_126.f_305[iVar6], Local_126.f_236), vVar3, 0, false, 1);
													if (((unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]))) && !unk_0xBDEB2DEEF1D23A18(Local_126.f_648[iVar6])) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
													{
														if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3))
														{
															unk_0x9F528B1B53FBC5D9(Local_126.f_648[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
														}
														else
														{
															unk_0x9F528B1B53FBC5D9(Local_126.f_648[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
														}
													}
												}
												else if (unk_0x134B62B726CEC8E6(Local_126.f_648[iVar6]) != func_392(Local_126.f_305[iVar6], Local_126.f_236))
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
													Local_126.f_305[iVar6] = -1;
													func_390(iVar6);
												}
												else if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2])))
												{
													if (!unk_0xBDEB2DEEF1D23A18(Local_126.f_648[iVar6]) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
													{
														unk_0x9F528B1B53FBC5D9(Local_126.f_648[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
													}
													if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
													{
														if (unk_0xD59B17D2DFF98E26(Local_126.f_648[iVar6]))
														{
															unk_0x15AFB6CBDE990FB6(Local_126.f_648[iVar6], 0, 1);
															unk_0x08841CDB215AE18F(Local_126.f_648[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0)), 0, 0, 1);
															unk_0xC023D1C4BF532815(Local_126.f_648[iVar6], vVar8 + func_385(iVar5, iVar9, 0, func_389(iVar6)), 2, 1);
														}
													}
												}
											}
											else if (iVar6 >= 0 && iVar6 < (56 * Local_126.f_257))
											{
												if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
													Local_126.f_305[iVar6] = -1;
													func_390(iVar6);
												}
											}
										}
										iVar5++;
										if (Local_125[iVar10 /*8*/].f_1 > 0)
										{
											iVar14 = Local_125[iVar10 /*8*/].f_1;
											if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar10 /*8*/], 10))
											{
												iVar14 = (Local_125[iVar10 /*8*/].f_1 / 2);
											}
											if (!unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, 0)]))
											{
												if (func_384(iVar14, bVar4) != 0)
												{
													Local_126.f_538[func_388(iVar2, iVar9, 0)] = unk_0xB0BE3DFBBB59A620(func_384(iVar14, bVar4), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0, iVar9, bVar4)), 0, false, 1);
													unk_0x08841CDB215AE18F(Local_126.f_538[func_388(iVar2, iVar9, 0)], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0, iVar9, bVar4)), 0, 0, 1);
													unk_0xC023D1C4BF532815(Local_126.f_538[func_388(iVar2, iVar9, 0)], vVar8 + func_382(iVar14, 0, iVar9, bVar4), 2, 1);
													if (!unk_0xEA6BC48857E0AC4C(func_381(iVar14)))
													{
														unk_0xCEAA091B490F8407(-1, func_381(iVar14), Local_126.f_538[func_388(iVar2, iVar9, 0)], "dlc_vw_table_games_sounds", 0, 0);
													}
												}
											}
											else if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 0)]) != 255)
											{
												unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, 0)]));
											}
											if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar10 /*8*/], 10))
											{
												if (!unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, 1)]))
												{
													if (func_384(iVar14, bVar4) != 0)
													{
														Local_126.f_538[func_388(iVar2, iVar9, 1)] = unk_0xB0BE3DFBBB59A620(func_384(iVar14, bVar4), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 1, iVar9, bVar4)), 0, false, 1);
														unk_0x08841CDB215AE18F(Local_126.f_538[func_388(iVar2, iVar9, 1)], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 1, iVar9, bVar4)), 0, 0, 1);
														unk_0xC023D1C4BF532815(Local_126.f_538[func_388(iVar2, iVar9, 1)], vVar8 + func_382(iVar14, 1, iVar9, bVar4), 2, 1);
														if (!unk_0xEA6BC48857E0AC4C(func_381(iVar14)))
														{
															unk_0xCEAA091B490F8407(-1, func_381(iVar14), Local_126.f_538[func_388(iVar2, iVar9, 1)], "dlc_vw_table_games_sounds", 0, 0);
														}
													}
												}
												else if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 1)]) != 255)
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, 1)]));
												}
											}
										}
										else
										{
											if (unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, 0)]))
											{
												if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 0)]) > 0)
												{
													unk_0x4FB9A846E72E2F23(Local_126.f_538[func_388(iVar2, iVar9, 0)], floor(func_202(to_float(unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 0)])), 0f, 0.1f, 0)), 1);
												}
												else
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, 0)]));
												}
											}
											if (unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, 1)]))
											{
												if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 1)]) > 0)
												{
													unk_0x4FB9A846E72E2F23(Local_126.f_538[func_388(iVar2, iVar9, 1)], floor(func_202(to_float(unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 1)])), 0f, 0.1f, 0)), 1);
												}
												else
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, 1)]));
												}
											}
										}
										iVar5 = 0;
										iVar5 = 0;
										while (iVar5 < 7)
										{
											iVar6 = func_21(iVar2, iVar5, iVar9, 1);
											sVar7 = func_387(Local_116.f_1188[iVar10 /*9*/][iVar5], 1);
											if (iVar6 >= 0 && iVar6 < (56 * Local_126.f_257))
											{
												if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2])))
												{
													if ((((iVar9 == 0 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_7(iVar2), 3)) || (iVar9 == 1 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_6(iVar2), 3))) || (iVar9 == 2 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_5(iVar2), 3))) || (iVar9 == 3 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_4(iVar2), 3)))
													{
														if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
														{
															if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
															{
																unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
																Local_126.f_305[iVar6] = -1;
															}
														}
													}
													else if (!unk_0xEA6BC48857E0AC4C(sVar7))
													{
														Local_126.f_305[iVar6] = -1;
														if (!unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
														{
															if (func_392(Local_116.f_1188[iVar10 /*9*/][iVar5], Local_126.f_236) != 0)
															{
																Local_126.f_648[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_116.f_1188[iVar10 /*9*/][iVar5], Local_126.f_236), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 1)), 0, false, 1);
																unk_0x08841CDB215AE18F(Local_126.f_648[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 1)), 0, 0, 1);
																unk_0xC023D1C4BF532815(Local_126.f_648[iVar6], vVar8 + func_385(iVar5, iVar9, 1, func_389(iVar6)), 2, 1);
															}
														}
														else if (unk_0x134B62B726CEC8E6(Local_126.f_648[iVar6]) != func_392(Local_116.f_1188[iVar10 /*9*/][iVar5], Local_126.f_236))
														{
															unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
														}
														else if (unk_0xD59B17D2DFF98E26(Local_126.f_648[iVar6]))
														{
															unk_0x15AFB6CBDE990FB6(Local_126.f_648[iVar6], 0, 1);
															unk_0x08841CDB215AE18F(Local_126.f_648[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 1)), 0, 0, 1);
															unk_0xC023D1C4BF532815(Local_126.f_648[iVar6], vVar8 + func_385(iVar5, iVar9, 1, func_389(iVar6)), 2, 1);
														}
													}
													else if (Local_126.f_305[iVar6] != -1)
													{
														if (!unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
														{
															Local_126.f_648[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_126.f_305[iVar6], Local_126.f_236), vVar3, 0, false, 1);
															if (((unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]))) && !unk_0xBDEB2DEEF1D23A18(Local_126.f_648[iVar6])) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
															{
																unk_0x9F528B1B53FBC5D9(Local_126.f_648[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
															}
														}
														else if (unk_0x134B62B726CEC8E6(Local_126.f_648[iVar6]) != func_392(Local_126.f_305[iVar6], Local_126.f_236))
														{
															unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
															Local_126.f_305[iVar6] = -1;
															func_390(iVar6);
														}
														else if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2])))
														{
															if (!unk_0xBDEB2DEEF1D23A18(Local_126.f_648[iVar6]) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
															{
																unk_0x9F528B1B53FBC5D9(Local_126.f_648[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
															}
															if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
															{
																if (unk_0xD59B17D2DFF98E26(Local_126.f_648[iVar6]))
																{
																	unk_0x15AFB6CBDE990FB6(Local_126.f_648[iVar6], 0, 1);
																	unk_0x08841CDB215AE18F(Local_126.f_648[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 1)), 0, 0, 1);
																	unk_0xC023D1C4BF532815(Local_126.f_648[iVar6], vVar8 + func_385(iVar5, iVar9, 1, func_389(iVar6)), 2, 1);
																}
															}
														}
													}
													else if (iVar6 >= 0 && iVar6 < (56 * Local_126.f_257))
													{
														if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar6]))
														{
															unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar6]));
															Local_126.f_305[iVar6] = -1;
															func_390(iVar6);
														}
													}
													iVar5++;
													if (Local_125[iVar10 /*8*/].f_2 > 0)
													{
														iVar14 = Local_125[iVar10 /*8*/].f_2;
														if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar10 /*8*/], 11))
														{
															iVar14 = (Local_125[iVar10 /*8*/].f_2 / 2);
														}
														if (!unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, 2)]))
														{
															if (func_384(iVar14, bVar4) != 0)
															{
																Local_126.f_538[func_388(iVar2, iVar9, 2)] = unk_0xB0BE3DFBBB59A620(func_384(iVar14, bVar4), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 2, iVar9, bVar4)), 0, false, 1);
																unk_0x08841CDB215AE18F(Local_126.f_538[func_388(iVar2, iVar9, 2)], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 2, iVar9, bVar4)), 0, 0, 1);
																unk_0xC023D1C4BF532815(Local_126.f_538[func_388(iVar2, iVar9, 2)], vVar8 + func_382(iVar14, 2, iVar9, bVar4), 2, 1);
																if (!unk_0xEA6BC48857E0AC4C(func_381(iVar14)))
																{
																	unk_0xCEAA091B490F8407(-1, func_381(iVar14), Local_126.f_538[func_388(iVar2, iVar9, 2)], "dlc_vw_table_games_sounds", 0, 0);
																}
															}
														}
														else if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 2)]) != 255)
														{
															unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, 2)]));
														}
														if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar10 /*8*/], 11))
														{
															if (!unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, 3)]))
															{
																if (func_384(iVar14, bVar4) != 0)
																{
																	Local_126.f_538[func_388(iVar2, iVar9, 3)] = unk_0xB0BE3DFBBB59A620(func_384(iVar14, bVar4), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 3, iVar9, bVar4)), 0, false, 1);
																	unk_0x08841CDB215AE18F(Local_126.f_538[func_388(iVar2, iVar9, 3)], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 3, iVar9, bVar4)), 0, 0, 1);
																	unk_0xC023D1C4BF532815(Local_126.f_538[func_388(iVar2, iVar9, 3)], vVar8 + func_382(iVar14, 3, iVar9, bVar4), 2, 1);
																	if (!unk_0xEA6BC48857E0AC4C(func_381(iVar14)))
																	{
																		unk_0xCEAA091B490F8407(-1, func_381(iVar14), Local_126.f_538[func_388(iVar2, iVar9, 3)], "dlc_vw_table_games_sounds", 0, 0);
																	}
																}
															}
															else if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 3)]) != 255)
															{
																unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, 3)]));
															}
														}
													}
													else
													{
														if (unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, 2)]))
														{
															if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 2)]) > 0)
															{
																unk_0x4FB9A846E72E2F23(Local_126.f_538[func_388(iVar2, iVar9, 2)], floor(func_202(to_float(unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 2)])), 0f, 0.1f, 0)), 1);
															}
															else
															{
																unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, 2)]));
															}
														}
														if (unk_0xC844350D5D58C99A(Local_126.f_538[func_388(iVar2, iVar9, 3)]))
														{
															if (unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 3)]) > 0)
															{
																unk_0x4FB9A846E72E2F23(Local_126.f_538[func_388(iVar2, iVar9, 3)], floor(func_202(to_float(unk_0x81D9425174BF4F82(Local_126.f_538[func_388(iVar2, iVar9, 3)])), 0f, 0.1f, 0)), 1);
															}
															else
															{
																unk_0xF690C84DADBB3551(&(Local_126.f_538[func_388(iVar2, iVar9, 3)]));
															}
														}
													}
													iVar9++;
													iVar5 = 0;
													iVar5 = 0;
													while (iVar5 < 11)
													{
														bVar16 = true;
														if (!Local_116.f_1525[iVar2] && iVar5 == 0)
														{
															bVar16 = false;
														}
														sVar7 = func_387(Local_116.f_846[iVar2 /*13*/][iVar5], bVar16);
														iVar6 = func_9(iVar2, iVar5);
														if (iVar6 >= 0 && iVar6 < (11 * Local_126.f_257))
														{
															if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2])))
															{
																if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_3(iVar2), 3))
																{
																	if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
																	{
																		iVar18 = 0;
																		while (iVar18 < 11)
																		{
																			iVar19 = func_9(iVar2, iVar18);
																			if (unk_0xC844350D5D58C99A(Local_126.f_603[iVar19]))
																			{
																				iVar17 = iVar18;
																			}
																			iVar18++;
																		}
																		if (iVar5 == iVar17)
																		{
																			if (unk_0xC844350D5D58C99A(Local_126.f_603[iVar6]) && !unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																			{
																				unk_0x9F528B1B53FBC5D9(Local_126.f_603[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																			}
																		}
																		else if (unk_0xC844350D5D58C99A(Local_126.f_603[iVar6]))
																		{
																			unk_0xF690C84DADBB3551(&(Local_126.f_603[iVar6]));
																			Local_126.f_260[iVar6] = -1;
																		}
																	}
																	else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
																	{
																		if (unk_0xC844350D5D58C99A(Local_126.f_603[iVar6]))
																		{
																			unk_0xF690C84DADBB3551(&(Local_126.f_603[iVar6]));
																			Local_126.f_260[iVar6] = -1;
																		}
																	}
																}
																else if (Local_116.f_1520[iVar2] == 2 && ((!unk_0xEA6BC48857E0AC4C(sVar7) && Local_116.f_846[iVar2 /*13*/][iVar5] != 0) || Local_126.f_260[iVar6] != -1))
																{
																	if (!unk_0xEA6BC48857E0AC4C(func_387(Local_116.f_846[iVar2 /*13*/][iVar5], 1)) && func_392(Local_116.f_846[iVar2 /*13*/][iVar5], Local_126.f_236) != 0)
																	{
																		Local_126.f_260[iVar6] = -1;
																		if (!unk_0xC844350D5D58C99A(Local_126.f_603[iVar6]))
																		{
																			iVar15 = Local_116.f_846[iVar2 /*13*/][iVar5];
																			if (!bVar16)
																			{
																				iVar15 = 0;
																			}
																			if (!unk_0xEA6BC48857E0AC4C(func_387(Local_116.f_846[iVar2 /*13*/][iVar5], 1)) && func_392(iVar15, Local_126.f_236) != 0)
																			{
																				Local_126.f_603[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(iVar15, Local_126.f_236), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, false, 1);
																				unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																				unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, bVar16), 2, 1);
																				Local_126.f_260[iVar6] = -1;
																			}
																		}
																		else if (iVar5 == 0)
																		{
																			if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2])))
																			{
																				if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_33(iVar2), 3))
																				{
																					if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																						{
																							unk_0xF690C84DADBB3551(&(Local_126.f_603[iVar6]));
																							Local_126.f_260[iVar6] = -1;
																							Local_126.f_603[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_116.f_846[iVar2 /*13*/][iVar5], Local_126.f_236), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, false, 1);
																							unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																							unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, 0), 2, 1);
																							unk_0x9F528B1B53FBC5D9(Local_126.f_603[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																						}
																					}
																					else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																						{
																							unk_0x15AFB6CBDE990FB6(Local_126.f_603[iVar6], 0, 1);
																							unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																							unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, 1), 2, 1);
																						}
																					}
																				}
																				else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_28(iVar2), 3))
																				{
																					if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																						{
																							unk_0x9F528B1B53FBC5D9(Local_126.f_603[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																						}
																					}
																					else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																						{
																							unk_0x15AFB6CBDE990FB6(Local_126.f_603[iVar6], 0, 1);
																							unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																							unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, 0), 2, 1);
																						}
																					}
																				}
																				else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), func_58(), func_11(iVar2), 3))
																				{
																					if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																						{
																							unk_0xF690C84DADBB3551(&(Local_126.f_603[iVar6]));
																							Local_126.f_260[iVar6] = -1;
																							Local_126.f_603[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_116.f_846[iVar2 /*13*/][iVar5], Local_126.f_236), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, false, 1);
																							unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																							unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, 0), 2, 1);
																							unk_0x9F528B1B53FBC5D9(Local_126.f_603[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																						}
																					}
																					else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																						{
																							unk_0x15AFB6CBDE990FB6(Local_126.f_603[iVar6], 0, 1);
																							unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																							unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, 1), 2, 1);
																						}
																					}
																				}
																				else if (unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																				{
																					unk_0x15AFB6CBDE990FB6(Local_126.f_603[iVar6], 0, 1);
																					unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																					unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, bVar16), 2, 1);
																				}
																			}
																		}
																		else if (unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																		{
																			unk_0x15AFB6CBDE990FB6(Local_126.f_603[iVar6], 0, 1);
																			unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																			unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, bVar16), 2, 1);
																		}
																	}
																	else if (Local_126.f_260[iVar6] != -1)
																	{
																		if (!unk_0xC844350D5D58C99A(Local_126.f_603[iVar6]))
																		{
																			iVar15 = Local_126.f_260[iVar6];
																			if (!bVar16)
																			{
																				iVar15 = 0;
																			}
																			Local_126.f_603[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(iVar15, Local_126.f_236), vVar3, 0, false, 1);
																			if (((unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]))) && !unk_0xBDEB2DEEF1D23A18(Local_126.f_603[iVar6])) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
																			{
																				unk_0x9F528B1B53FBC5D9(Local_126.f_603[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																			}
																		}
																		else if (unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_1595[iVar2])))
																		{
																			if (!unk_0xBDEB2DEEF1D23A18(Local_126.f_603[iVar6]) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), -1345695206))
																			{
																				unk_0x9F528B1B53FBC5D9(Local_126.f_603[iVar6], unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																			}
																			if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_1595[iVar2]), 585557868))
																			{
																				if (unk_0xD59B17D2DFF98E26(Local_126.f_603[iVar6]))
																				{
																					unk_0x15AFB6CBDE990FB6(Local_126.f_603[iVar6], 0, 1);
																					unk_0x08841CDB215AE18F(Local_126.f_603[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0, 0, 1);
																					unk_0xC023D1C4BF532815(Local_126.f_603[iVar6], vVar8 + func_379(iVar5, bVar16), 2, 1);
																				}
																			}
																		}
																	}
																}
																else if (iVar6 >= 0 && iVar6 < (11 * Local_126.f_257))
																{
																	if (unk_0xC844350D5D58C99A(Local_126.f_603[iVar6]))
																	{
																		unk_0xF690C84DADBB3551(&(Local_126.f_603[iVar6]));
																		Local_126.f_260[iVar6] = -1;
																	}
																}
																iVar5++;
																iVar2++;
																iLocal_139++;
																if (iLocal_139 >= Local_126.f_257)
																{
																	iLocal_139 = 0;
																}
															}

Vector3 func_379(int iParam0, bool bParam1)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 0f, 0f, 178.92f };
			break;
		
		case 1:
			vVar0 = { 0f, 0f, -180f };
			break;
		
		case 2:
			vVar0 = { 0f, 0f, -178.92f };
			break;
		
		case 3:
			vVar0 = { 0f, 0f, -177.12f };
			break;
		
		case 4:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 5:
			vVar0 = { 0f, 0f, 178.56f };
			break;
		
		case 6:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 7:
			vVar0 = { 0f, 0f, 178.2f };
			break;
		
		case 8:
			vVar0 = { 0f, 0f, -177.12f };
			break;
		
		case 9:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 10:
			vVar0 = { 0f, 0f, 178.56f };
			break;
	}
	if (!bParam1)
	{
		vVar0.x = 180f;
	}
	return vVar0;
}

Vector3 func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.0356f, 0.2105f, 0.94885f;
		
		case 1:
			return -0.0436f, 0.21205f, 0.948875f;
		
		case 2:
			return -0.0636f, 0.213825f, 0.9496f;
		
		case 3:
			return -0.0806f, 0.2137f, 0.950225f;
		
		case 4:
			return -0.1006f, 0.21125f, 0.950875f;
		
		case 5:
			return -0.1256f, 0.21505f, 0.951875f;
		
		case 6:
			return -0.1416f, 0.21305f, 0.953f;
		
		case 7:
			return -0.1656f, 0.21205f, 0.954025f;
		
		case 8:
			return -0.1836f, 0.21255f, 0.95495f;
		
		case 9:
			return -0.2076f, 0.21105f, 0.956025f;
		
		case 10:
			return -0.2246f, 0.21305f, 0.957f;
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_381(int iParam0)
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

Vector3 func_382(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 72f;
					
					case 1:
						return 0f, 0f, 64.8f;
					
					case 2:
						return 0f, 0f, 74.52f;
					
					case 3:
						return 0f, 0f, 72f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 12.96f;
					
					case 1:
						return 0f, 0f, 29.16f;
					
					case 2:
						return 0f, 0f, 32.04f;
					
					case 3:
						return 0f, 0f, 32.04f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -18.36f;
					
					case 1:
						return 0f, 0f, -18.72f;
					
					case 2:
						return 0f, 0f, -15.48f;
					
					case 3:
						return 0f, 0f, -18f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -79.2f;
					
					case 1:
						return 0f, 0f, -68.76f;
					
					case 2:
						return 0f, 0f, -57.6f;
					
					case 3:
						return 0f, 0f, -64.8f;
					
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
								return 0f, 0f, -16.56f;
							
							case 1:
								return 0f, 0f, -22.32f;
							
							case 2:
								return 0f, 0f, -10.8f;
							
							case 3:
								return 0f, 0f, -9.72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -69.12f;
							
							case 1:
								return 0f, 0f, -64.8f;
							
							case 2:
								return 0f, 0f, -58.68f;
							
							case 3:
								return 0f, 0f, -51.12f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -112.32f;
							
							case 1:
								return 0f, 0f, -108.36f;
							
							case 2:
								return 0f, 0f, -99.72f;
							
							case 3:
								return 0f, 0f, -102.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -155.88f;
							
							case 1:
								return 0f, 0f, -151.92f;
							
							case 2:
								return 0f, 0f, -147.24f;
							
							case 3:
								return 0f, 0f, -146.52f;
							
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
								return 0f, 0f, 72f;
							
							case 1:
								return 0f, 0f, 64.8f;
							
							case 2:
								return 0f, 0f, 74.52f;
							
							case 3:
								return 0f, 0f, 72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 12.96f;
							
							case 1:
								return 0f, 0f, 29.16f;
							
							case 2:
								return 0f, 0f, 32.04f;
							
							case 3:
								return 0f, 0f, 32.04f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -18.36f;
							
							case 1:
								return 0f, 0f, -18.72f;
							
							case 2:
								return 0f, 0f, -15.48f;
							
							case 3:
								return 0f, 0f, -18f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -79.2f;
							
							case 1:
								return 0f, 0f, -68.76f;
							
							case 2:
								return 0f, 0f, -57.6f;
							
							case 3:
								return 0f, 0f, -64.8f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_383(int iParam0, int iParam1, int iParam2, bool bParam3)
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
						vVar1 = { 0.712625f, 0.170625f, 0f };
						break;
					
					case 1:
						vVar1 = { 0.6658f, 0.218375f, 0f };
						break;
					
					case 2:
						vVar1 = { 0.756775f, 0.292775f, 0f };
						break;
					
					case 3:
						vVar1 = { 0.701875f, 0.3439f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						vVar1 = { 0.278125f, -0.2571f, 0f };
						break;
					
					case 1:
						vVar1 = { 0.280375f, -0.190375f, 0f };
						break;
					
					case 2:
						vVar1 = { 0.397775f, -0.208525f, 0f };
						break;
					
					case 3:
						vVar1 = { 0.39715f, -0.1354f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						vVar1 = { -0.30305f, -0.2464f, 0f };
						break;
					
					case 1:
						vVar1 = { -0.257975f, -0.19715f, 0f };
						break;
					
					case 2:
						vVar1 = { -0.186575f, -0.2861f, 0f };
						break;
					
					case 3:
						vVar1 = { -0.141675f, -0.237925f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						vVar1 = { -0.72855f, 0.17345f, 0f };
						break;
					
					case 1:
						vVar1 = { -0.652825f, 0.177525f, 0f };
						break;
					
					case 2:
						vVar1 = { -0.6783f, 0.0744f, 0f };
						break;
					
					case 3:
						vVar1 = { -0.604425f, 0.082575f, 0f };
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
								vVar1 = { 0.6931f, 0.1952f, 0f };
								break;
							
							case 1:
								vVar1 = { 0.724925f, 0.26955f, 0f };
								break;
							
							case 2:
								vVar1 = { 0.7374f, 0.349625f, 0f };
								break;
							
							case 3:
								vVar1 = { 0.76415f, 0.419225f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.2827f, -0.227825f, 0f };
								break;
							
							case 1:
								vVar1 = { 0.3605f, -0.1898f, 0f };
								break;
							
							case 2:
								vVar1 = { 0.4309f, -0.16365f, 0f };
								break;
							
							case 3:
								vVar1 = { 0.49275f, -0.111575f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.279425f, -0.2238f, 0f };
								break;
							
							case 1:
								vVar1 = { -0.200775f, -0.25855f, 0f };
								break;
							
							case 2:
								vVar1 = { -0.125775f, -0.26815f, 0f };
								break;
							
							case 3:
								vVar1 = { -0.05615f, -0.29435f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.685925f, 0.173275f, 0f };
								break;
							
							case 1:
								vVar1 = { -0.6568f, 0.092525f, 0f };
								break;
							
							case 2:
								vVar1 = { -0.612875f, 0.033025f, 0f };
								break;
							
							case 3:
								vVar1 = { -0.58465f, -0.0374f, 0f };
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
								vVar1 = { 0.712625f, 0.170625f, 0f };
								break;
							
							case 1:
								vVar1 = { 0.6658f, 0.218375f, 0f };
								break;
							
							case 2:
								vVar1 = { 0.756775f, 0.292775f, 0f };
								break;
							
							case 3:
								vVar1 = { 0.701875f, 0.3439f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								vVar1 = { 0.278125f, -0.2571f, 0f };
								break;
							
							case 1:
								vVar1 = { 0.280375f, -0.190375f, 0f };
								break;
							
							case 2:
								vVar1 = { 0.397775f, -0.208525f, 0f };
								break;
							
							case 3:
								vVar1 = { 0.39715f, -0.1354f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.30305f, -0.2464f, 0f };
								break;
							
							case 1:
								vVar1 = { -0.257975f, -0.19715f, 0f };
								break;
							
							case 2:
								vVar1 = { -0.186575f, -0.2861f, 0f };
								break;
							
							case 3:
								vVar1 = { -0.141675f, -0.237925f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								vVar1 = { -0.72855f, 0.17345f, 0f };
								break;
							
							case 1:
								vVar1 = { -0.652825f, 0.177525f, 0f };
								break;
							
							case 2:
								vVar1 = { -0.6783f, 0.0744f, 0f };
								break;
							
							case 3:
								vVar1 = { -0.604425f, 0.082575f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	vVar1.z = fVar0;
	return vVar1;
}

int func_384(int iParam0, bool bParam1)
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

Vector3 func_385(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						vVar0 = { 0f, 0f, 69.12f };
						break;
					
					case 1:
						vVar0 = { 0f, 0f, 67.8f };
						break;
					
					case 2:
						vVar0 = { 0f, 0f, 66.6f };
						break;
					
					case 3:
						vVar0 = { 0f, 0f, 70.44f };
						break;
					
					case 4:
						vVar0 = { 0f, 0f, 70.84f };
						break;
					
					case 5:
						vVar0 = { 0f, 0f, 67.88f };
						break;
					
					case 6:
						vVar0 = { 0f, 0f, 69.56f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						vVar0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						vVar0 = { 0f, 0f, 22.32f };
						break;
					
					case 2:
						vVar0 = { 0f, 0f, 20.8f };
						break;
					
					case 3:
						vVar0 = { 0f, 0f, 19.8f };
						break;
					
					case 4:
						vVar0 = { 0f, 0f, 19.44f };
						break;
					
					case 5:
						vVar0 = { 0f, 0f, 26.28f };
						break;
					
					case 6:
						vVar0 = { 0f, 0f, 22.68f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						vVar0 = { 0f, 0f, -21.43f };
						break;
					
					case 1:
						vVar0 = { 0f, 0f, -20.16f };
						break;
					
					case 2:
						vVar0 = { 0f, 0f, -16.92f };
						break;
					
					case 3:
						vVar0 = { 0f, 0f, -23.4f };
						break;
					
					case 4:
						vVar0 = { 0f, 0f, -21.24f };
						break;
					
					case 5:
						vVar0 = { 0f, 0f, -23.76f };
						break;
					
					case 6:
						vVar0 = { 0f, 0f, -19.44f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						vVar0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						vVar0 = { 0f, 0f, -69.12f };
						break;
					
					case 2:
						vVar0 = { 0f, 0f, -64.44f };
						break;
					
					case 3:
						vVar0 = { 0f, 0f, -67.68f };
						break;
					
					case 4:
						vVar0 = { 0f, 0f, -63.72f };
						break;
					
					case 5:
						vVar0 = { 0f, 0f, -68.4f };
						break;
					
					case 6:
						vVar0 = { 0f, 0f, -64.44f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						vVar0 = { 0f, 0f, 68.57f };
						break;
					
					case 1:
						vVar0 = { 0f, 0f, 67.52f };
						break;
					
					case 2:
						vVar0 = { 0f, 0f, 67.76f };
						break;
					
					case 3:
						vVar0 = { 0f, 0f, 67.04f };
						break;
					
					case 4:
						vVar0 = { 0f, 0f, 68.84f };
						break;
					
					case 5:
						vVar0 = { 0f, 0f, 65.96f };
						break;
					
					case 6:
						vVar0 = { 0f, 0f, 67.76f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						vVar0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						vVar0 = { 0f, 0f, 22f };
						break;
					
					case 2:
						vVar0 = { 0f, 0f, 24.44f };
						break;
					
					case 3:
						vVar0 = { 0f, 0f, 21.08f };
						break;
					
					case 4:
						vVar0 = { 0f, 0f, 25.96f };
						break;
					
					case 5:
						vVar0 = { 0f, 0f, 26.16f };
						break;
					
					case 6:
						vVar0 = { 0f, 0f, 28.76f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						vVar0 = { 0f, 0f, -14.04f };
						break;
					
					case 1:
						vVar0 = { 0f, 0f, -15.48f };
						break;
					
					case 2:
						vVar0 = { 0f, 0f, -16.56f };
						break;
					
					case 3:
						vVar0 = { 0f, 0f, -15.84f };
						break;
					
					case 4:
						vVar0 = { 0f, 0f, -16.92f };
						break;
					
					case 5:
						vVar0 = { 0f, 0f, -14.4f };
						break;
					
					case 6:
						vVar0 = { 0f, 0f, -14.28f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						vVar0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						vVar0 = { 0f, 0f, -67.6f };
						break;
					
					case 2:
						vVar0 = { 0f, 0f, -69.4f };
						break;
					
					case 3:
						vVar0 = { 0f, 0f, -69.04f };
						break;
					
					case 4:
						vVar0 = { 0f, 0f, -68.68f };
						break;
					
					case 5:
						vVar0 = { 0f, 0f, -66.16f };
						break;
					
					case 6:
						vVar0 = { 0f, 0f, -63.28f };
						break;
				}
				break;
			}
	}
	if (bParam3)
	{
		vVar0.z = (vVar0.z + 90f);
	}
	return vVar0;
}

Vector3 func_386(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.5737f, 0.2376f, 0.948025f;
					
					case 1:
						return 0.562975f, 0.2523f, 0.94875f;
					
					case 2:
						return 0.553875f, 0.266325f, 0.94955f;
					
					case 3:
						return 0.5459f, 0.282075f, 0.9501f;
					
					case 4:
						return 0.536125f, 0.29645f, 0.95085f;
					
					case 5:
						return 0.524975f, 0.30975f, 0.9516f;
					
					case 6:
						return 0.515775f, 0.325325f, 0.95235f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.2325f, -0.1082f, 0.94805f;
					
					case 1:
						return 0.23645f, -0.0918f, 0.949f;
					
					case 2:
						return 0.2401f, -0.074475f, 0.950225f;
					
					case 3:
						return 0.244625f, -0.057675f, 0.951125f;
					
					case 4:
						return 0.249675f, -0.041475f, 0.95205f;
					
					case 5:
						return 0.257575f, -0.0256f, 0.9532f;
					
					case 6:
						return 0.2601f, -0.008175f, 0.954375f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.2359f, -0.1091f, 0.9483f;
					
					case 1:
						return -0.221025f, -0.100675f, 0.949f;
					
					case 2:
						return -0.20625f, -0.092875f, 0.949725f;
					
					case 3:
						return -0.193225f, -0.07985f, 0.950325f;
					
					case 4:
						return -0.1776f, -0.072f, 0.951025f;
					
					case 5:
						return -0.165f, -0.060025f, 0.951825f;
					
					case 6:
						return -0.14895f, -0.05155f, 0.95255f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5765f, 0.2229f, 0.9482f;
					
					case 1:
						return -0.558925f, 0.2197f, 0.949175f;
					
					case 2:
						return -0.5425f, 0.213025f, 0.9499f;
					
					case 3:
						return -0.525925f, 0.21105f, 0.95095f;
					
					case 4:
						return -0.509475f, 0.20535f, 0.9519f;
					
					case 5:
						return -0.491775f, 0.204075f, 0.952825f;
					
					case 6:
						return -0.4752f, 0.197525f, 0.9543f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.6083f, 0.3523f, 0.94795f;
					
					case 1:
						return 0.598475f, 0.366475f, 0.948925f;
					
					case 2:
						return 0.589525f, 0.3807f, 0.94975f;
					
					case 3:
						return 0.58045f, 0.39435f, 0.950375f;
					
					case 4:
						return 0.571975f, 0.4092f, 0.951075f;
					
					case 5:
						return 0.5614f, 0.4237f, 0.951775f;
					
					case 6:
						return 0.554325f, 0.4402f, 0.952525f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.3431f, -0.0527f, 0.94855f;
					
					case 1:
						return 0.348575f, -0.0348f, 0.949425f;
					
					case 2:
						return 0.35465f, -0.018825f, 0.9502f;
					
					case 3:
						return 0.3581f, -0.001625f, 0.95115f;
					
					case 4:
						return 0.36515f, 0.015275f, 0.952075f;
					
					case 5:
						return 0.368525f, 0.032475f, 0.95335f;
					
					case 6:
						return 0.373275f, 0.0506f, 0.9543f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.116f, -0.1501f, 0.947875f;
					
					case 1:
						return -0.102725f, -0.13795f, 0.948525f;
					
					case 2:
						return -0.08975f, -0.12665f, 0.949175f;
					
					case 3:
						return -0.075025f, -0.1159f, 0.949875f;
					
					case 4:
						return -0.0614f, -0.104775f, 0.9507f;
					
					case 5:
						return -0.046275f, -0.095025f, 0.9516f;
					
					case 6:
						return -0.031425f, -0.0846f, 0.952675f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5205f, 0.1122f, 0.9478f;
					
					case 1:
						return -0.503175f, 0.108525f, 0.94865f;
					
					case 2:
						return -0.485125f, 0.10475f, 0.949175f;
					
					case 3:
						return -0.468275f, 0.099175f, 0.94995f;
					
					case 4:
						return -0.45155f, 0.09435f, 0.95085f;
					
					case 5:
						return -0.434475f, 0.089725f, 0.95145f;
					
					case 6:
						return -0.415875f, 0.0846f, 0.9523f;
					
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

char* func_387(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return " ---- ";
	}
	switch (iParam0)
	{
		case 1:
			return " A  C ";
		
		case 2:
			return " 2  C ";
		
		case 3:
			return " 3  C ";
		
		case 4:
			return " 4  C ";
		
		case 5:
			return " 5  C ";
		
		case 6:
			return " 6  C ";
		
		case 7:
			return " 7  C ";
		
		case 8:
			return " 8  C ";
		
		case 9:
			return " 9  C ";
		
		case 10:
			return " 10 C ";
		
		case 11:
			return " J  C ";
		
		case 12:
			return " Q  C ";
		
		case 13:
			return " K  C ";
		
		case 14:
			return " A  D ";
		
		case 15:
			return " 2  D ";
		
		case 16:
			return " 3  D ";
		
		case 17:
			return " 4  D ";
		
		case 18:
			return " 5  D ";
		
		case 19:
			return " 6  D ";
		
		case 20:
			return " 7  D ";
		
		case 21:
			return " 8  D ";
		
		case 22:
			return " 9  D ";
		
		case 23:
			return " 10 D ";
		
		case 24:
			return " J  D ";
		
		case 25:
			return " Q  D ";
		
		case 26:
			return " K  D ";
		
		case 27:
			return " A  H ";
		
		case 28:
			return " 2  H ";
		
		case 29:
			return " 3  H ";
		
		case 30:
			return " 4  H ";
		
		case 31:
			return " 5  H ";
		
		case 32:
			return " 6  H ";
		
		case 33:
			return " 7  H ";
		
		case 34:
			return " 8  H ";
		
		case 35:
			return " 9  H ";
		
		case 36:
			return " 10 H ";
		
		case 37:
			return " J  H ";
		
		case 38:
			return " Q  H ";
		
		case 39:
			return " K  H ";
		
		case 40:
			return " A  S ";
		
		case 41:
			return " 2  S ";
		
		case 42:
			return " 3  S ";
		
		case 43:
			return " 4  S ";
		
		case 44:
			return " 5  S ";
		
		case 45:
			return " 6  S ";
		
		case 46:
			return " 7  S ";
		
		case 47:
			return " 8  S ";
		
		case 48:
			return " 9  S ";
		
		case 49:
			return " 10 S ";
		
		case 50:
			return " J  S ";
		
		case 51:
			return " Q  S ";
		
		case 52:
			return " K  S ";
		
		default:
	}
	return "";
}

int func_388(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 4 * 4 + iParam1 * 4) + iParam2);
}

int func_389(int iParam0)
{
	switch (floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_530, (iParam0 % 32));
		
		case 1:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_531, (iParam0 % 32));
		
		case 2:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_532, (iParam0 % 32));
		
		case 3:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_533, (iParam0 % 32));
		
		case 4:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_534, (iParam0 % 32));
		
		case 5:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_535, (iParam0 % 32));
		
		case 6:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_536, (iParam0 % 32));
		
		default:
	}
	return 0;
}

void func_390(int iParam0)
{
	switch (floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			unk_0x0674E58A79778E99(&(Local_126.f_530), (iParam0 % 32));
			break;
		
		case 1:
			unk_0x0674E58A79778E99(&(Local_126.f_531), (iParam0 % 32));
			break;
		
		case 2:
			unk_0x0674E58A79778E99(&(Local_126.f_532), (iParam0 % 32));
			break;
		
		case 3:
			unk_0x0674E58A79778E99(&(Local_126.f_533), (iParam0 % 32));
			break;
		
		case 4:
			unk_0x0674E58A79778E99(&(Local_126.f_534), (iParam0 % 32));
			break;
		
		case 5:
			unk_0x0674E58A79778E99(&(Local_126.f_535), (iParam0 % 32));
			break;
		
		case 6:
			unk_0x0674E58A79778E99(&(Local_126.f_536), (iParam0 % 32));
			break;
	}
}

void func_391(int iParam0)
{
	switch (floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(Local_126.f_530), (iParam0 % 32));
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(Local_126.f_531), (iParam0 % 32));
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(Local_126.f_532), (iParam0 % 32));
			break;
		
		case 3:
			unk_0x5D96D8530B3D0904(&(Local_126.f_533), (iParam0 % 32));
			break;
		
		case 4:
			unk_0x5D96D8530B3D0904(&(Local_126.f_534), (iParam0 % 32));
			break;
		
		case 5:
			unk_0x5D96D8530B3D0904(&(Local_126.f_535), (iParam0 % 32));
			break;
		
		case 6:
			unk_0x5D96D8530B3D0904(&(Local_126.f_536), (iParam0 % 32));
			break;
	}
}

int func_392(int iParam0, bool bParam1)
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
	if (bParam1)
	{
		return unk_0x12AB0310C2281427("vw_prop_vw_jo_char_01a");
	}
	return unk_0x12AB0310C2281427("vw_prop_casino_cards_single");
}

void func_393()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_394(iVar0);
		unk_0x71199B01895C6202(iVar1);
		iVar0++;
	}
}

int func_394(int iParam0)
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

int func_395()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_394(iVar0);
		unk_0x523BCC9DC80CD82F(iVar1);
		if (!unk_0xB87F6CF6E5628C67(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_396()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377.f_6, 12);
}

int func_397()
{
	return func_398(8248, -1, 0);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_399(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_399(var uParam0)
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

void func_400()
{
	if (Local_126.f_257 == 1)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_150))
		{
			iLocal_150 = unk_0x4B72871A3BE7B474(func_70(0), 1f, -2126678982, 0, 0, 0);
		}
		else if (func_419() != func_418() && unk_0x757EF87A33649210())
		{
			if (unk_0xB02B5A3616555A54(iLocal_150) != func_401(func_419()))
			{
				unk_0x4EBF23A230F3B12C(iLocal_150, func_401(func_419()));
			}
		}
	}
	else
	{
		if (!unk_0xC844350D5D58C99A(iLocal_151))
		{
			iLocal_151 = unk_0x4B72871A3BE7B474(1129.406f, 262.3578f, -52.041f, 1f, -2126678982, 0, 0, 0);
		}
		else if (unk_0xB02B5A3616555A54(iLocal_151) != 3)
		{
			unk_0x4EBF23A230F3B12C(iLocal_151, 3);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_152))
		{
			iLocal_152 = unk_0x4B72871A3BE7B474(1144.429f, 247.3352f, -52.041f, 1f, -2126678982, 0, 0, 0);
		}
		else if (unk_0xC844350D5D58C99A(iLocal_152) && unk_0xB02B5A3616555A54(iLocal_152) != 3)
		{
			unk_0x4EBF23A230F3B12C(iLocal_152, 3);
		}
	}
}

int func_401(int iParam0)
{
	if (func_404(iParam0))
	{
		return 1;
	}
	else if (func_403(iParam0))
	{
		return 2;
	}
	else if (func_402(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_402(int iParam0)
{
	if (iParam0 != func_418())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 21);
	}
	return 0;
}

int func_403(int iParam0)
{
	if (iParam0 != func_418())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 20);
	}
	return 0;
}

int func_404(int iParam0)
{
	if (iParam0 != func_418())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_369.f_1, 19);
	}
	return 0;
}

void func_405()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_126.f_257)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_135[iVar0]))
		{
			func_406(iVar0);
		}
		iVar0++;
	}
}

void func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Local_126.f_236)
	{
		iVar0 = 1689211012;
	}
	else
	{
		iVar0 = -1857617480;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	if (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iLocal_135[iParam0]))
	{
		iVar1 = unk_0xB0BE3DFBBB59A620(iVar0, func_408(iParam0), 0, false, 1);
		unk_0x71199B01895C6202(iVar0);
		unk_0x08841CDB215AE18F(iVar1, func_408(iParam0), 0, 0, 1);
		unk_0xC023D1C4BF532815(iVar1, func_407(iParam0), 2, 1);
		unk_0x1E9649458B15960F(iVar1, true);
		iLocal_135[iParam0] = iVar1;
	}
}

Vector3 func_407(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 164.52f, 11.5f };
	return Vector(func_69(iParam0), 0f, 0f) + vVar0;
}

Vector3 func_408(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { 0.526f, 0.571f, 0.963f };
	return unk_0x8A5E176FF719A014(func_70(iParam0), func_69(iParam0), vVar0);
}

int func_409()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_392(iVar1, Local_126.f_236);
		unk_0x523BCC9DC80CD82F(iVar2);
		if (!unk_0xB87F6CF6E5628C67(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_410()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_126.f_257)
	{
		if (unk_0xC844350D5D58C99A(iLocal_135[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_135[iVar0]));
		}
		iVar0++;
	}
}

void func_411()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_392(iVar1, Local_126.f_236);
		unk_0x71199B01895C6202(iVar2);
		iVar0++;
	}
}

void func_412()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_126.f_257)
	{
		if (!unk_0xE5DBF9B6126856CA(Local_116.f_1595[iVar0]))
		{
		}
		else
		{
			iVar1 = unk_0x1B50683925F00106(Local_116.f_1595[iVar0]);
			if (func_414(iVar1))
			{
				if (func_413(iVar0))
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

int func_413(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4, 5) || unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4, 3))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_4, 2))
	{
		if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_414(int iParam0)
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

int func_415()
{
	if (unk_0x8CD06866876216F2() && unk_0xBFF81ED3B99522C7())
	{
		return 1;
	}
	return 0;
}

int func_416()
{
	return func_417(unk_0xD803B885F5E47A62());
}

var func_417(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

int func_418()
{
	return -1;
}

int func_419()
{
	return func_420(unk_0xD803B885F5E47A62());
}

int func_420(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_418())
	{
		return iParam0;
	}
	if (func_422(iParam0) != -1)
	{
		iVar0 = func_421(func_422(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_313(iParam0, 0))
			{
				return func_212(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_418();
		}
		return Global_2425662[iParam0 /*421*/].f_310.f_8;
	}
	return func_418();
}

int func_421(int iParam0)
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

int func_422(int iParam0)
{
	if (iParam0 != func_418())
	{
		if (func_20(iParam0, 1, 1))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && iParam0 == unk_0xD803B885F5E47A62()) && func_20(iParam0, 1, 0))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5;
		}
	}
	return -1;
}

int func_423(int iParam0)
{
	if (iParam0 != func_418() && func_20(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 4);
	}
	return 0;
}

int func_424(int iParam0)
{
	if (iParam0 != func_418())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_421(Global_2425662[iParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != func_418())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_421(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

bool func_426()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1676377.f_3, 2);
}

void func_427()
{
	if (Local_126.f_1 > 2)
	{
		if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > -1)
		{
			Local_131.f_9 = Local_116.f_1570[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
		}
		Local_131.f_18 = func_415();
		Local_131.f_19 = func_192();
		Local_131.f_17 = func_190(&uLocal_127, 0, 0);
		Local_131.f_7 = func_397();
		if (Global_262145.f_26035)
		{
			unk_0x5943F8BE26E6D616(&Local_131);
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
	func_371(0);
	func_411();
	func_393();
	func_430();
	func_429();
	func_410();
	if (unk_0xC844350D5D58C99A(Local_126.f_537))
	{
		unk_0xF690C84DADBB3551(&(Local_126.f_537));
	}
	if (Local_126.f_1 > 0)
	{
		unk_0x8D17794CE3273D70(func_58());
		unk_0x8D17794CE3273D70(func_72());
		unk_0x8D17794CE3273D70(func_88());
		unk_0x8D17794CE3273D70(func_216());
	}
	Global_1696045 = 0;
	func_428();
}

void func_428()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_429()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (16 * Local_126.f_257);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(Local_126.f_538[iVar1]))
		{
			unk_0xF690C84DADBB3551(&(Local_126.f_538[iVar1]));
		}
		iVar1++;
	}
}

void func_430()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (11 * Local_126.f_257);
	iVar1 = (56 * Local_126.f_257);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (unk_0xC844350D5D58C99A(Local_126.f_648[iVar2]))
		{
			unk_0xF690C84DADBB3551(&(Local_126.f_648[iVar2]));
			Local_126.f_305[iVar2] = -1;
			func_390(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(Local_126.f_603[iVar2]))
		{
			unk_0xF690C84DADBB3551(&(Local_126.f_603[iVar2]));
			Local_126.f_260[iVar2] = -1;
		}
		iVar2++;
	}
}

int func_431()
{
	var uVar0;
	
	func_439(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_438())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_437())
	{
		return 1;
	}
	if (func_436(159))
	{
		if (!func_435())
		{
			return 1;
		}
	}
	if (func_436(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_432() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_432()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_432()
{
	switch (func_434())
	{
		case 0:
			return func_433();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_433()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_434()
{
	return Global_30768;
}

bool func_435()
{
	return Global_2450632.f_598;
}

int func_436(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_437()
{
	return Global_2460680;
}

bool func_438()
{
	return Global_2450632.f_593;
}

void func_439(var uParam0)
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
					func_440(iVar0);
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

void func_440(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_20(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_441(iVar2, &bVar3))
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

int func_441(int iParam0, var uParam1)
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

void func_442()
{
	int iVar0;
	int iVar1;
	
	if (Global_1696037)
	{
		Global_1696037 = 0;
	}
	if (func_424(unk_0xD803B885F5E47A62()) && func_419() != func_418())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[func_419() /*421*/].f_310.f_4, 4))
		{
			Local_126.f_236 = 1;
		}
	}
	while (!(Global_2514395 != -1 || func_424(unk_0xD803B885F5E47A62())))
	{
		if (!unk_0x8CD06866876216F2())
		{
			func_427();
		}
		if (func_431())
		{
			func_427();
		}
		wait(0);
	}
	iVar0 = -1;
	if (func_424(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_446();
	}
	unk_0x37AD2AB54480FA6A(32, 0, iVar0);
	func_444(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_116, 1660);
	unk_0x35B62793EAE9ADDF(&Local_125, 257);
	if (func_424(unk_0xD803B885F5E47A62()))
	{
		Local_126.f_257 = 1;
		unk_0x991E101AF0F7523A(1);
	}
	else
	{
		unk_0x991E101AF0F7523A(3);
	}
	if (!func_443())
	{
		func_427();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0);
	}
	else
	{
		func_427();
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		if (func_424(unk_0xD803B885F5E47A62()))
		{
			Local_116.f_1550[0] = unk_0x09AC81E49EA267F7(0, 14);
		}
		else
		{
			Local_116.f_1550[0] = Global_2514409[0];
			Local_116.f_1550[1] = Global_2514409[1];
			Local_116.f_1550[2] = Global_2514409[2];
			Local_116.f_1550[3] = Global_2514409[3];
		}
	}
	Global_1696045 = 1;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		Local_126.f_260[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 224)
	{
		Local_126.f_305[iVar1] = -1;
		func_390(iVar1);
		iVar1++;
	}
}

int func_443()
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
		if (func_438())
		{
			return 0;
		}
		if (func_436(157))
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

int func_444(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_428();
			}
			else
			{
				return 0;
			}
		}
		if (!func_445())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_428();
					}
					else
					{
						return 0;
					}
				}
				if (func_438())
				{
					if (!bParam2)
					{
						func_428();
					}
					else
					{
						return 0;
					}
				}
				if (func_436(157))
				{
					if (!bParam2)
					{
						func_428();
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
					func_428();
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
				func_428();
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
			func_428();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_445()
{
	return Global_1312854;
}

int func_446()
{
	var uVar0;
	
	uVar0 = Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_6;
	return uVar0;
}

