// To overcome a problem in another script. Steven Woodcock of Sopra Group wrote this function to pad a string with leading zeroes.
//
// This is handy when numbers such as bank accounts with fixed lengths are required in LoadRunner scripts and they need to be 
// reformatted before they can be used by a script. Excel commonly removes leading zeroes from test data and this can be used 
// to put them back! The function can be used to pad with any ASCII character.


Action()
{
//	For the PadToX function
	char * cShortValue = "123";


//	For the sprintf function
	char cPaddedValue[8] ="";
	int iShortValue = 123;
	int i;

	
	lr_output_message("Short value is %s", cShortValue);

//	The PadToX function, written by Steven Woodcock can be used to pad with zeroes
	PadToX(cShortValue,"pPaddedParameter",8,"0");
	lr_output_message("Padded value is %s", lr_eval_string("{pPaddedParameter}"));


//	The PadToX function can also be used to pad with other characters (e.g. x)
	PadToX(cShortValue,"pPaddedParameter",8,"x");
	lr_output_message("Padded value is %s", lr_eval_string("{pPaddedParameter}"));

 
	return 0;
}
