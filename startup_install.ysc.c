void __EntryFunction__()
{
	unk_0xB57F88F0123F4C38();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		wait(0);
		unk_0x92DCE5C81176D2B4(sParam0);
	}
	start_new_script(sParam0, iParam1);
}

