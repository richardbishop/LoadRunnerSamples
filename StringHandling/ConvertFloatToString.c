ConvertFloatToString()
{
	
	char String[500]; 
	
	float FloatVariable =1234.5678;

 	sprintf(String, "%f", FloatVariable); 
  
 	lr_output_message( "New string is [%s]", String ); 
 	
	return 0;
}
