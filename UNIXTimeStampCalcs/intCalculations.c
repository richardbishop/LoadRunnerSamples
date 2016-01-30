intCalculations()
{
	unsigned long int iTimeStamp;
	char cBuffer[1024];

	web_save_timestamp_param("sLoadRunnerTimeStamp", LAST);
	lr_output_message( "Current UNIX time in milliseconds is #%s", lr_eval_string( "{sLoadRunnerTimeStamp}" ) ); 

	iTimeStamp = atoi(lr_eval_string("{sLoadRunnerTimeStamp}"));
	iTimeStamp = iTimeStamp-1000;
	sprintf(cBuffer, "%d", iTimeStamp);
	
	lr_save_string(cBuffer, "sCalculatedTimeStamp");
	lr_output_message( "Current UNIX time minus 1000 milliseconds is #%s (this is wrong)", lr_eval_string( "{sCalculatedTimeStamp}" ) ); 

return 0;
}