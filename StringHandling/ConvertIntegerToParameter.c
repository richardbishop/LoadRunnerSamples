ConvertIntegerToParameter()
{
	//There is no direct way to do this
	//You need to follow the steps to convert an integer into a string first,
	//and then to convert that string to a parameter.
	
	char String[500]; 
	
	int integerVariable=23456789;
  
	sprintf(String, "%d", integerVariable); 
	lr_output_message( "New string is [%s]", String ); 	
	
	lr_save_string(String, "ParamFromString"); 
  	lr_output_message( "New parameter is [%s]", lr_eval_string( "{ParamFromString}" ) ); 
	
	return 0;
}
