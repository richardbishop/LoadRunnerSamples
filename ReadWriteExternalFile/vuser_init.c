    long file_stream = 0;       
	char file_path[1024] = "";		//file_path (this is the location for temporary files)
    char cCommand[1024];			//cCommand (this is the DOS command to be executed)
	char cDOS[1024];				//cDOS (this is the DOS command to be executed - from user input)
	char cDOSPath[1024];			//cDOSPath (this is the path to the DOS executable - from user input)
	char cEpochTime[13];			//cEpochTime (the time in milliseconds since 00:00:00 on 1st January 1970 - used to create unique name for temporary file)
    char cLine[100];				//cLine (this is an array to contain the data read back to LoadRunner from the external file)
	char cExtData[100];				//cExtData (this is an array to contain the data read back to LoadRunner from the external file without the \n at the end)


	int WriteToFile(char *cDOSPath, char * cDOS)
	{
    //Save Epoch time to an array
	web_save_timestamp_param("sEpochMilliseconds", LAST);
    strcpy(cEpochTime, lr_eval_string("{sEpochMilliseconds}"));

	//Save the unique filename in the format C:\temp\x_yyyyyyyyyyyyy.txt where x is vUserID and yyyyyyyyyyyyy is Current EpochTime
    lr_save_string("C:\\temp\\", "FilePath");
	lr_save_string(".txt", "FileType");
	strcpy(file_path, lr_eval_string("{FilePath}"));
	strcat(file_path, lr_eval_string("{pVuser}"));
	strcat(file_path, "_");
	strcat(file_path, cEpochTime);
	strcat(file_path, lr_eval_string("{FileType}"));

//	Uncomment the following line for debugging - output current filepath
//	lr_output_message("File Path - %s", file_path);

	//This is the command thich will write data to the external file.
	//It starts by writing the DOS command into a string called "command"
	sprintf(cCommand, "%s%s > %s", cDOSPath, cDOS ,file_path); 

	lr_output_message("cCommand - %s", cCommand);
	lr_output_message("cDOS - %s", cDOS);
	lr_output_message("file_path - %s", file_path);


//	Uncomment the following line for debugging - output current command
	lr_output_message("command - %s", cCommand);

	//Execute the DOS command "command"
    system(cCommand); 
	}


	int ReadFromFile()
	{
    //The rest of the script is responsible for reading in data from the external file created above and then deleting that file.
	//This IF statement checks that the file_path is valid and that the file can be opened.
	if ((file_stream = fopen(file_path, "r")) == NULL ) 
		{ 
        lr_error_message("Cannot open %s", file_path); 
        return -1; 
        } 

		//This IF statement returns the string which has been read into LoadRunner and saves it as "line"
		//Unless the End Of File is reached or if a reading error occurred. 
		if (fgets(cLine, 100, file_stream) == NULL) 
    		lr_output_message("fgets error"); 
	
		else 
		//Uncomment the following line for debugging - output contents of "cLine" array including trailing \n
        //lr_output_message( "Data from the external file is [%s]", cLine); 

		//This function writes the data from the external file without the trailing \n into a new array called cExtData 
		strncat ( cExtData, cLine, (strlen(cLine)-1) );
        lr_output_message( "Data from the external file is [%s]", cExtData); 

		//This IF statement returns an error if LoadRunner cannot close the external file.
		if (fclose(file_stream)) 
        lr_error_message("Error closing file %s", file_path); 

	//This is the command thich will delete the external temporary file
	//It starts by writing the DOS command into a string called "command"
	sprintf(cCommand, "del %s", file_path); 

//	Uncomment the following line for debugging - output current command
//	lr_output_message("command - %s", cCommand);

	//Execute the DOS command "cCommand"
	system(cCommand); 

	}


vuser_init()
{
	return 0;
}
