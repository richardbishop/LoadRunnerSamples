//LoadRunner stores date/time parameters locally on the LoadRunner PC. 
//This means that opening a script on another users PC, where the date/time parameter 
//is not stored, can cause corruption to the date/time parameters in a script. 
//You know that this has happened when a date/time parameter in this format 
//[%Y%m%d%H%M%S] is sent to the server rather than the format that you intended.

//Due to this problem, I recommend that the lr_save_datetime function is used to save date
//or time values to a string. The string can then be used in the script and the script is 
//portable between PCs because we are no longer relying on the locally stored parameters.

//See also DateJS script which uses the date.js JavaScript library for date handling


Action()
{
	lr_save_datetime("%d/%m/%y", DATE_NOW, "DDMMYY"); 
	lr_output_message("Today's Date is %s",lr_eval_string("{DDMMYY}"));

	lr_save_datetime("%d/%m/%Y", DATE_NOW, "DDMMYYYY"); 
	lr_output_message("Today's Date is %s",lr_eval_string("{DDMMYYYY}"));

	lr_save_datetime("%B %d %Y", DATE_NOW, "Today");
	lr_output_message("Today is %s",lr_eval_string("{Today}"));

	lr_save_datetime("%B %d %Y", DATE_NOW + ONE_DAY, "Tomorrow");
	lr_output_message("Tomorrow is %s",lr_eval_string("{Tomorrow}"));

	lr_save_datetime("%A", DATE_NOW - ONE_DAY, "Yesterday");
	lr_output_message("Yesterday was %s",lr_eval_string("{Yesterday}"));

	lr_save_datetime("%A", DATE_NOW, "Today");
	lr_output_message("Today is %s",lr_eval_string("{Today}"));

	lr_save_datetime("%A", DATE_NOW + ONE_DAY, "Tomorrow");
	lr_output_message("Tomorrow is %s",lr_eval_string("{Tomorrow}"));

	lr_save_datetime("%X", TIME_NOW , "Time");
	lr_output_message("The time is %s (in this locale's date format)",lr_eval_string("{Time}"));

	lr_save_datetime("%X", TIME_NOW + ONE_HOUR , "Time");
	lr_output_message("In one hour it will be %s",lr_eval_string("{Time}"));
	
	lr_save_datetime("%A", DATE_NOW + ONE_DAY, "Tomorrow");
	lr_output_message("Tomorrow is %s",lr_eval_string("{Tomorrow}"));

	lr_save_datetime("%j", DATE_NOW, "Today");
	lr_output_message("Today is day %s in the year",lr_eval_string("{Today}"));

	lr_save_datetime("%Z", DATE_NOW, "TimeZone");
	lr_output_message("This machine is in the '%s' time zone",lr_eval_string("{TimeZone}"));

	lr_save_datetime("%p", DATE_NOW, "AMPM");
    if (strcmp (lr_eval_string("{AMPM}"),"PM")!=0)
        {
        lr_output_message("Good Morning");
        }
	else
		lr_output_message("Good Afternoon");
	
	lr_save_datetime("%Y-%m-%d %H:%M:%S", DATE_NOW, "UTCFormat");
	lr_output_message("The time is '%s' in UTC format",lr_eval_string("{UTCFormat}"));

	web_convert_param("UTCFormat", 
	                  "SourceEncoding=PLAIN",
	                  "TargetEncoding=URL", 
	                  LAST);	
	
	lr_output_message("The time is '%s' in (URL encoded) UTC format",lr_eval_string("{UTCFormat}"));
	
	return 0;
}
