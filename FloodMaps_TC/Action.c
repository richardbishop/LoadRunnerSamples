//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("0010_OpenHomePage");
	truclient_step("1", "Navigate to 'http://maps.environment...ics&lang=_e'", "snapshot=Action_1.inf");
	lr_end_transaction("0010_OpenHomePage",0);
	truclient_step("2", "Wait 3 seconds", "snapshot=Action_2.inf");
	lr_start_transaction("0020_OpenFloodMapsPage");
	truclient_step("3", "Click on Flood Map for Planning... link", "snapshot=Action_3.inf");
	lr_end_transaction("0020_OpenFloodMapsPage",0);
	truclient_step("5", "Wait 3 seconds", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Enter a postcode or place... textbox", "snapshot=Action_6.inf");
	truclient_step("7", "Type LR.getParam('pPostCode') in Enter a postcode or place... textbox", "snapshot=Action_7.inf");
	lr_start_transaction("0030_OpenLocalFloodMap");
	truclient_step("8", "Press Enter key on Enter a postcode or place... textbox", "snapshot=Action_8.inf");
	lr_end_transaction("0030_OpenLocalFloodMap",0);
	truclient_step("9", "Wait 3 seconds", "snapshot=Action_9.inf");

	return 0;
}
