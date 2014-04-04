//	See also ColumnSelecctor script

// 	After I posted the ColumnSelector script @71notout replied...
//	@Richardbishop Cool - now 2 add further complication, what if the 6 cols were in an attached data table? 
//	this is the bit I'm struggling with.
//	@Richardbishop Data table created from spreadsheet pre test exec
//	Data flows chronologically hence need to use col 1, then 2, then 3, etc.

//	After these tweets, I updated the script so that it used an external CSV file for the data. [ExternalData.csv]
//
//	The CSV file looked like this.....
//	Column_1,Column_2,Column_3,Column_4,Column_5,Column_6
//	One,Two,Three,Four,Five,Six

//	Instead of strings called sColumn_1, sColumn_2 etc, I used parameters called pColumn_1, pColumn_2 etc.


Action()
{
    int iIteration; 			//iIteration used to hold the iteration number as an integer
	char cStringName[64];		//cStringName is a char value to hold the string name

    iIteration = atoi (lr_eval_string( "{pIteration}" )); 	// Convert the parameter pIteration into an integer iIteration

    sprintf(cStringName, "{pColumn_%d}", iIteration);		// Create the string name based on a suffix with the iteration number as a prefix

	//Write out the iteration number and the name of the string for this iteration
	lr_output_message("Iteration is [%s], String used is %s", lr_eval_string( "{pIteration}" ),cStringName );

	//Write out the contents of the string for this iteration
    lr_output_message("Value of %s is [%s]",cStringName, lr_eval_string(cStringName));

	return 0;
}
