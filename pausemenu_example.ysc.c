#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				wait(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_1(int iParam0)
{
	if (unk_0x673DE2AC97BFD28A("DISPLAY_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x7E60D21B163E9D56();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0x673DE2AC97BFD28A("SET_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x3CAEA85DA607305E(iParam3);
		unk_0x3CAEA85DA607305E(iParam7);
		unk_0x3CAEA85DA607305E(0);
		if (bParam4)
		{
			unk_0x3CAEA85DA607305E(1);
		}
		else
		{
			unk_0x3CAEA85DA607305E(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x045A0775396CC970(sParam5);
		}
		unk_0x7E60D21B163E9D56();
	}
}

void func_3(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

