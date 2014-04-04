int CheckStringInString (char *cCapturedString, char * cTextToCheck)
{
	if ((char *)strstr(cCapturedString, cTextToCheck) != NULL)
   {
	// Success - cTextToCheck was found in cCapturedString
   	lr_output_message("[%s] does contain the text [%s]",cCapturedString,cTextToCheck); 
   }
   
   else
   {
   	// Failure - cTextToCheck not found in cCapturedString
   	lr_output_message("[%s] does not contain the text [%s]",cCapturedString,cTextToCheck);  
   }
}


vuser_init()
{
	return 0;
}
