SplitStringCalculations()
{
	int iValue;
	char cBuffer[1024]="";
	char cConcatenatedOutput[1024]="";
	
	web_save_timestamp_param("sLoadRunnerTimeStamp", LAST);
	lr_output_message( "Current UNIX time in milliseconds is #%s", lr_eval_string( "{sLoadRunnerTimeStamp}" ) ); 

	//Splits the saved string {sLoadRunnerTimeStamp} into two parts, first 7 and remainder
	//fSplitString function is declared in  vuser_init
	fSplitString(lr_eval_string("{sLoadRunnerTimeStamp}"),7);
	
   	//Convert {sRightString} to integer iValue to perform calculation
   	//In this case subtract 1000 milliseconds to get timestamp from one second ago
	iValue = atoi(lr_eval_string("{sRightString}"));
	iValue = iValue-1000;
	sprintf(cBuffer, "%d", iValue);
	
	//Save Right part of the string
	lr_save_string(cBuffer, "sCalculatedRightString");
	
	//Copy {sLeftString} into cConcatenatedOutput, then concatenate (append) {sCalculatedRightString} 
	strcpy(cConcatenatedOutput, lr_eval_string("{sLeftString}"));
	strcat(cConcatenatedOutput, lr_eval_string("{sCalculatedRightString}"));
	
	lr_output_message("Epoch time minus 1000 milliseconds is:[%s]",cConcatenatedOutput);
	
	return 0;
}
