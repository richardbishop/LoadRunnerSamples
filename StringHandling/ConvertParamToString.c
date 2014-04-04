ConvertParamToString()
{
	char String[500]; 

	lr_save_string("This is a test","StringFromParam");
	
	//You then need to use the sprintf function to save your parameter to a string: 
	sprintf(String, "%s", lr_eval_string("{StringFromParam}")); 
	lr_output_message( "New string is [%s]", String ); 
	
	return 0;
}
