//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("FloodWarningsPostCode_0010_OpenHomePage");
	truclient_step("1", "Navigate to 'https://flood-warning-i...service.gov.uk/'", "snapshot=Action_1.inf");
	lr_end_transaction("FloodWarningsPostCode_0010_OpenHomePage",0);
	truclient_step("2", "Click on Search warnings and river... textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type LR.getParam('pPostCode') in Search warnings and river... textbox", "snapshot=Action_3.inf");
	lr_start_transaction("FloodWarningsPostCode_0020_PostCodeSearch");
	truclient_step("4", "Click on Search button", "snapshot=Action_4.inf");
	lr_end_transaction("FloodWarningsPostCode_0020_PostCodeSearch",0);
	lr_start_transaction("FloodWarningsPostCode_0030_ViewFloodAlerts");
	truclient_step("5", "Click on Flood alert button", "snapshot=Action_5.inf");
	lr_end_transaction("FloodWarningsPostCode_0030_ViewFloodAlerts",0);
	lr_start_transaction("FloodWarningsPostCode_0040_ViewLocalAlert");
	truclient_step("6", "Click on First Local Flood Alert button", "snapshot=Action_6.inf");
	lr_end_transaction("FloodWarningsPostCode_0040_ViewLocalAlert",0);
	lr_start_transaction("FloodWarningsPostCode_0050_ViewLocalFloodMap");
	truclient_step("7", "Click on See a map of the area... link", "snapshot=Action_7.inf");
	lr_end_transaction("FloodWarningsPostCode_0050_ViewLocalFloodMap",0);
	lr_start_transaction("FloodWarningsPostCode_0060_ViewLatestRiverAlerts");
	truclient_step("8", "Click on latest river and sea... link", "snapshot=Action_8.inf");
	lr_end_transaction("FloodWarningsPostCode_0060_ViewLatestRiverAlerts",0);

	return 0;
}
