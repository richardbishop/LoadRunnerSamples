ConvertStringToParam()
{
	// Converting a string to a parameter 
	// Declare your string at the beginning of your script: 
 	char String [500] = "Value to be saved"; 

	//Use the lr_save_string function to save this value to a parameter: 
  	lr_save_string(String, "ParamFromString"); 

	//Using this function you could also simply type in the string using speech marks i.e. 
  	lr_save_string("Value to be saved", "ParamFromString"); 
  	lr_output_message( "New parameter is [%s]", lr_eval_string( "{ParamFromString}" ) ); 
	
	return 0;
}
