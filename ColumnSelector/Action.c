// 	A friend of mine on Twitter (@71notout) asked ....
//  "Anyone know how to retrieve data from variable columns in #LoadRunner based on iteration number? 
//	e.g. Iteration 1 - use col 1, 2 uses 2, etc"
//
//	I created this sample script to show how it was possible.
//	See also ColumnSelector2 script


Action()
{
    int iIteration; 			//iIteration used to hold the iteration number as an integer
	char cStringName[64];		//cStringName is a char value to hold the string name

	//Create an array of string names to represent an array of data (perhaps captured by a web_save_param with ORD=All)
	lr_save_string("One","sColumn_1");		
	lr_save_string("Two","sColumn_2");
	lr_save_string("Three","sColumn_3");
	lr_save_string("Four","sColumn_4");
	lr_save_string("Five","sColumn_5");
   	lr_save_string("Six","sColumn_6");

    iIteration = atoi (lr_eval_string( "{pIteration}" )); 	// Convert the parameter pIteration into an integer iIteration

    sprintf(cStringName, "{sColumn_%d}", iIteration);		// Create the string name based on a suffix with the iteration number as a prefix

	//Write out the iteration number and the name of the string for this iteration
	lr_output_message("Iteration is [%s], String used is %s", lr_eval_string( "{pIteration}" ),cStringName );

	//Write out the contents of the string for this iteration
    lr_output_message("Value of %s is [%s]",cStringName, lr_eval_string(cStringName));

	return 0;
}
