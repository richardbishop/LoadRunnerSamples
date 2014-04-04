ConvertParamToInteger()
{
	// Declare an integer at the start of the script. 
	// Note that in order for this to work the value in the parameter must be a complete whole number 
	// with no extra characters or decimal places.
 	int Number; 
 	
 	lr_save_string("1234","NumericParameter");
 	lr_output_message( "[%s]", lr_eval_string("{NumericParameter}") ); 

	// Use the atoi function to convert the parameter into an integer. 
 	Number = atoi (lr_eval_string("{NumericParameter}")); 

  	lr_output_message( "New integer is [%i]", Number ); 
	
	return 0;
}
