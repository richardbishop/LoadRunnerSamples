ConvertCharToDouble()
{

	float fBigNumber;
	char sTemp [24];
	double atof( const char *string); 

	lr_save_string("123456789012345.12","cBigNumber");

	//Output the big number for info
	lr_output_message("Big number (char) is %sp", lr_eval_string("{cBigNumber}"));
	
	strcpy(sTemp,lr_eval_string("{cBigNumber}"));
	fBigNumber = atof(sTemp);
	
	lr_output_message("Big number (float/double) is %fp", fBigNumber);
		
	return 0;
}
