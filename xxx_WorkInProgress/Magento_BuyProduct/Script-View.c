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
	lr_start_transaction("MBP_TC_010_OpenHomePage");
	truclient_step("1", "Navigate to 'http://89.238.153.133/index.php'", "snapshot=Action_1.inf");
	lr_end_transaction("MBP_TC_010_OpenHomePage",0);
	truclient_step("2", "Wait 5 seconds", "snapshot=Action_2.inf");
	lr_start_transaction("MBP_TC_020_SelectProduct");
	truclient_step("5", "Click on Sony VAIO VGN TXN27N/B... link", "snapshot=Action_5.inf");
	lr_end_transaction("MBP_TC_020_SelectProduct",0);
	truclient_step("6", "Wait 5 seconds", "snapshot=Action_6.inf");
	truclient_step("9", "Type '1' in Qty textbox", "snapshot=Action_9.inf");
	lr_start_transaction("MBP_TC_030_AddToCart");
	truclient_step("10", "Click on Add to Cart button", "snapshot=Action_10.inf");
	lr_end_transaction("MBP_TC_030_AddToCart",0);
	truclient_step("11", "Wait 5 seconds", "snapshot=Action_11.inf");
	lr_start_transaction("MBP_TC_040_ProceedToCheckout");
	truclient_step("12", "Click on Proceed to Checkout button", "snapshot=Action_12.inf");
	lr_end_transaction("MBP_TC_040_ProceedToCheckout",0);
	truclient_step("13", "Wait 5 seconds", "snapshot=Action_13.inf");
	truclient_step("14", "Select 'Register' from Checkout as a Guest or... listbox", "snapshot=Action_14.inf");
	lr_start_transaction("MBP_TC_050_RegisterCustomer");
	truclient_step("15", "Click on Continue button", "snapshot=Action_15.inf");
	lr_end_transaction("MBP_TC_050_RegisterCustomer",0);
	truclient_step("17", "Wait 5 seconds", "snapshot=Action_17.inf");
	truclient_step("18", "Type 'John' in *First Name textbox", "snapshot=Action_18.inf");
	truclient_step("19", "Type 'Smith' in *Last Name textbox", "snapshot=Action_19.inf");
	truclient_step("20", "Type '' in Company textbox", "snapshot=Action_20.inf");
	truclient_step("21", "Type new Date().valueOf()+'@mail.com' in *Email Address textbox", "snapshot=Action_21.inf");
	truclient_step("22", "Type '1 High Street' in *Address textbox", "snapshot=Action_22.inf");
	truclient_step("23", "Type '' in Street Address 2 textbox", "snapshot=Action_23.inf");
	truclient_step("24", "Type 'Any City' in *City textbox", "snapshot=Action_24.inf");
	truclient_step("25", "Mouse up on Wide listitem", "snapshot=Action_25.inf");
	truclient_step("26", "Select 'United Kingdom' from *Country listbox", "snapshot=Action_26.inf");
	truclient_step("31", "Type 'M1 5AN' in *Zip/Postal Code textbox", "snapshot=Action_31.inf");
	truclient_step("32", "Select 'United Kingdom' from *Country listbox", "snapshot=Action_32.inf");
	truclient_step("33", "Type '01234567895412' in *Telephone textbox", "snapshot=Action_33.inf");
	truclient_step("35", "Type ***** in *Password passwordbox", "snapshot=Action_35.inf");
	truclient_step("37", "Type ***** in *Confirm Password passwordbox", "snapshot=Action_37.inf");
	truclient_step("38", "Click on Continue button", "snapshot=Action_38.inf");
	truclient_step("41", "Type ************ in *Password passwordbox", "snapshot=Action_41.inf");
	truclient_step("44", "Type ************ in *Confirm Password passwordbox", "snapshot=Action_44.inf");
	lr_start_transaction("MBP_TC_060_EnterCustomerDetails");
	truclient_step("45", "Click on Continue button", "snapshot=Action_45.inf");
	lr_end_transaction("MBP_TC_060_EnterCustomerDetails",0);
	truclient_step("46", "Wait 5 seconds", "snapshot=Action_46.inf");
	lr_start_transaction("MBP_TC_070_ConfirmDeliveryMethod");
	truclient_step("47", "Click on Continue button", "snapshot=Action_47.inf");
	lr_end_transaction("MBP_TC_070_ConfirmDeliveryMethod",0);
	truclient_step("48", "Wait 5 seconds", "snapshot=Action_48.inf");
	truclient_step("49", "Select 'Check / Money order' from checkmo Check / Money... radiogroup", "snapshot=Action_49.inf");
	lr_start_transaction("MBP_TC_080_ConfirmPaymentMethod");
	truclient_step("50", "Click on Continue button", "snapshot=Action_50.inf");
	lr_end_transaction("MBP_TC_080_ConfirmPaymentMethod",0);
	truclient_step("51", "Wait 5 seconds", "snapshot=Action_51.inf");
	lr_start_transaction("MBP_TC_090_PlaceOrder");
	truclient_step("52", "Click on Place Order button", "snapshot=Action_52.inf");
	lr_end_transaction("MBP_TC_090_PlaceOrder",0);
	truclient_step("53", "Wait 5 seconds", "snapshot=Action_53.inf");
}
