#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_1();
	}
	if (unk_0xC844350D5D58C99A(iScriptParam_3))
	{
		unk_0x1E9649458B15960F(iScriptParam_3, true);
	}
	while (true)
	{
		wait(0);
		if (unk_0xC844350D5D58C99A(iScriptParam_3))
		{
			if (unk_0x63D2C15453688621(iScriptParam_3) && unk_0x8A22C4C08282BF26(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1A5AE8A9B1D42A10(iScriptParam_3))
						{
							unk_0x3F423BF5B8125A50("MISSMIC2");
							if (unk_0xB4AE0788C1587752("MISSMIC2"))
							{
								unk_0xD65E6E13E145467B(iScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, true, 0, 0, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x8D17794CE3273D70("MISSMIC2");
	unk_0x10FAF14A60A0DBE1();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

