int 	rc=0;
char 	*VtsServer_input = "localhost";
char 	*VtsServer_output = "localhost";
int		nPort_input = 8888;
int		nPort_output = 8889;

PVCI2 	pvci_input = 0;
PVCI2 	pvci_output = 0;


Action()
{

	lr_start_transaction("VTS1_0010_RetrieveInputData");
	
	pvci_input = lrvtc_connect(VtsServer_input,nPort_input,VTOPT_KEEP_ALIVE);
	lr_log_message("pvci=%d\n", pvci_input);
	
	//Read message from input VTS table
	rc = lrvtc_retrieve_row ();

	//Write sample variable as output message to demonstrate success
	lr_output_message("Row containing Customer [%s] removed from VTS table 1",lr_eval_string("{CustomerID}"));
	
	//Disconnect from input VTS table
	lrvtc_disconnect ();

	lr_end_transaction("VTS1_0010_RetrieveInputData",LR_AUTO);
	
	lr_start_transaction("VTS1_0020_WriteOutputData");	

	//Save current date and time as a timestamp for the output table
	lr_save_datetime("%m/%d/%Y %H:%M", DATE_NOW, "Time");
	lr_output_message(lr_eval_string("{Time}"));
	
	//Connect to output VTS table
	pvci_output = lrvtc_connect(VtsServer_output,nPort_output,VTOPT_KEEP_ALIVE);
	lr_log_message("pvci=%d\n", pvci_output);
	
	//Write output from this script to second VTS instance
	//USe VTSEND_SAME_ROW to ensure all data goes to the same row, rather than using the "stacked" or "unique" options.
	rc = lrvtc_send_row1(
			"CustomerID;CompanyName;ContactName;ContactTitle;Address;City;Region;PostalCode;Country;Phone;Fax;Time",
			"{CustomerID};{CompanyName};{ContactName};{ContactTitle};{Address};{City};{Region};{PostalCode};{Country};{Phone};{Fax};{Time}", ";", 
			VTSEND_SAME_ROW);
	lr_log_message("send_row1 rc=%d\n", rc);
	
	//Disconnect from output VTS table
	lrvtc_disconnect ();
	
	lr_end_transaction("VTS1_0020_WriteOutputData",LR_AUTO);	
	
	//Write sample variable as output message to demonstrate success
	lr_output_message("Row containing Customer [%s] written to VTS table 2",lr_eval_string("{CustomerID}"));
	
	return 0;
}
