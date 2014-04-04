ConvertIntegerToString()
{
	char String[500]; 
	
	int integerVariable=1234567;
  
	sprintf(String, "%d", integerVariable); 
	lr_output_message( "New string is [%s]", String ); 
	
	return 0;
}
