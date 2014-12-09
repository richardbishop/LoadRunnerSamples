long outstream = 0; 
char OutputFile[1024] = "";		

Action()
{
	lr_save_datetime("%y%m%d", DATE_NOW, "FileDate"); 
	lr_save_datetime("%y/%m/%d", DATE_NOW, "Date"); 
	lr_save_datetime("%H:%M", TIME_NOW, "Time"); 
	
	sprintf(OutputFile,"C:\\Temp\\Write_To_File_Demo_%s.txt",
	lr_eval_string("{FileDate}"));
	
	outstream = fopen (OutputFile,"a+");
	
	if (outstream == NULL)
	lr_output_message ("Could not open output file %s",OutputFile);
	
	else 
	{
	fprintf (outstream, "This line written during Iteration %s, at %s on %s. \r\n",
	lr_eval_string("{Iteration}"),
	lr_eval_string("{Time}"),
	lr_eval_string("{Date}"));
	fclose (outstream);
	}
	
	return 0;
}
