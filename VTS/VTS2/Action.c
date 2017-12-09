int 	rc=0;
char 	*VtsServer_input = "localhost";
int		nPort_input = 8889;

PVCI2 	pvci_input = 0;

Action()
{
	lr_start_transaction("VTS2_0010_RetrieveInputData");
	
	pvci_input = lrvtc_connect(VtsServer_input,nPort_input,VTOPT_KEEP_ALIVE);
	lr_log_message("pvci=%d\n", pvci_input);
	
	//Read message from input VTS table
	rc = lrvtc_retrieve_row ();
	
	//Disconnect from input VTS table
	lrvtc_disconnect ();
	
	lr_end_transaction("VTS2_0010_RetrieveInputData",LR_AUTO);

	//Write sample variable as output message to demonstrate success
	lr_output_message("Row containing Customer [%s] removed from VTS table",lr_eval_string("{CustomerID}"));
	
	return 0;
}
