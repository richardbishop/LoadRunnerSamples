   /**********************************************************************************************
   **                                                                                           **
   **                   	             PLEASE NOTE										    **
   **                   	             ===========										    **
   **                                                                                           **
   **      The Script-View you see here is a READ-ONLY representation of the actual script.     **
   **                                                                                           **
   **      For creating, viewing, modifying, running and/or debugging a script, please press    **
   **                                                                                           **
   **      the "Develop Script" button. This will start Firefox,  with the TruClient sidebar    **
   **                                                                                           **
   **      at the left.  Starting Firefox may take a while. Alternatively, you can run          **
   **                                                                                           **
   **      the current script as-is, without starting Firefox, by pressing the "Run" button.    **
   **                                                                                           **
   **********************************************************************************************/


Script_View_Action()
{
	truclient_step("1", "Navigate to 'http://www.doogal.co.uk...omAddresses.php'", "snapshot=Action_1.inf");
	truclient_step("2", "Double click on 100 textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type '1' in 100 textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Select 'Address components' from Sometimes it's useful... radiogroup", "snapshot=Action_4.inf");
	truclient_step("5", "For ( var i = 0 ; i < 10000 ; i++ )", "snapshot=Action_5.inf");
	{
		truclient_step("5.1", "Click on Create random addresses button", "snapshot=Action_5.1.inf");
		truclient_step("5.2", "Get 'All Text' from AddressBox textbox", "snapshot=Action_5.2.inf");
		truclient_step("5.3", "Wait 1 seconds", "snapshot=Action_5.3.inf");
	}
}
