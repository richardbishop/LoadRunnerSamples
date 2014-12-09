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
	lr_start_transaction("MTK_TC_010_OpenHomePage");
	truclient_step("1", "Navigate to 'http://89.238.153.133/index.php'", "snapshot=Action_1.inf");
	lr_end_transaction("MTK_TC_010_OpenHomePage",0);
	truclient_step("3", "Wait 5 seconds", "snapshot=Action_3.inf");
	truclient_step("4", "For ( var i = 0 ; i < 5 ; i++ )", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Type LR.getParam('pSearchTerm') in Search textbox", "snapshot=Action_4.1.inf");
		lr_start_transaction("MTK_TC_020_ProductSearch");
		truclient_step("4.2", "Press 'Enter' key on Search textbox", "snapshot=Action_4.2.inf");
		lr_end_transaction("MTK_TC_020_ProductSearch",0);
		truclient_step("4.3", "Wait 5 seconds", "snapshot=Action_4.3.inf");
		lr_start_transaction("MTK_TC_030_SelectItem");
		truclient_step("4.4", "Click on AT&T 8525 PDA link", "snapshot=Action_4.4.inf");
		lr_end_transaction("MTK_TC_030_SelectItem",0);
		truclient_step("4.5", "Wait 5 seconds", "snapshot=Action_4.5.inf");
	}
	lr_start_transaction("MTK_TC_040_ReturnHome");
	truclient_step("6", "Click on Magento Commerce image", "snapshot=Action_6.inf");
	lr_end_transaction("MTK_TC_040_ReturnHome",0);
	truclient_step("7", "Wait 5 seconds", "snapshot=Action_7.inf");
	truclient_step("8", "For ( var i = 0 ; i < 10 ; i++ )", "snapshot=Action_8.inf");
	{
		lr_start_transaction("MTK_TC_050_SelectRandomLink");
		truclient_step("8.1", "Select option #16 from Tags List listbox", "snapshot=Action_8.1.inf");
		lr_end_transaction("MTK_TC_050_SelectRandomLink",0);
		truclient_step("8.2", "Wait 5 seconds", "snapshot=Action_8.2.inf");
	}
}
