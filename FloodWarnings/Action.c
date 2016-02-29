//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("FloodWarnings_0010_OpenHomePage");
	truclient_step("1", "Navigate to 'https://flood-warning-i...gov.uk/warnings'", "snapshot=Action_1.inf");
	lr_end_transaction("FloodWarnings_0010_OpenHomePage",0);
	truclient_step("2", "Get Visible Text from 3 Flood alerts flooding... button", "snapshot=Action_2.inf");
	truclient_step("3", "Evaluate JavaScript code window.alert(NumberFloodAlerts)", "snapshot=Action_3.inf");
	lr_start_transaction("FloodWarnings_0020_OpenFloodAlerts");
	truclient_step("4", "Click on Flood alerts button", "snapshot=Action_4.inf");
	lr_end_transaction("FloodWarnings_0020_OpenFloodAlerts",0);
	truclient_step("5", "Evaluate JavaScript code var randomButton = Math....rFloodAlerts)+1;", "snapshot=Action_5.inf");
	truclient_step("6", "Evaluate JavaScript code window.alert(randomButton)", "snapshot=Action_6.inf");
	lr_start_transaction("FloodWarnings_0030_OpenRandomFloodAlert");
	truclient_step("7", "Select option #Math.floor(Math....rFloodAlerts)+1; from ? Groundwater flooding... listbox", "snapshot=Action_7.inf");
	lr_end_transaction("FloodWarnings_0030_OpenRandomFloodAlert",0);
	lr_start_transaction("FloodWarnings_0040_ViewFloodAlertMap");
	truclient_step("8", "Click on See a map of the area... link", "snapshot=Action_8.inf");
	lr_end_transaction("FloodWarnings_0040_ViewFloodAlertMap",0);

	return 0;
}
