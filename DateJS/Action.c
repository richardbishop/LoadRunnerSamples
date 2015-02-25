Action()
{
	// date.js is originally from http://www.datejs.com
	// N.B. documentation on site refers to newer version than is available from datejs.com
	// I recommend downloading latest version from http://www.datejs.com/build/date.js 
	// Lots of support and discussion is available at https://groups.google.com/forum/#!forum/datejs
	// API documentation for date.js is here https://code.google.com/p/datejs/wiki/APIDocumentation

	web_js_run(
        "Code=Date.today()",
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js", 
		ENDITEM,
		LAST);
	
	// This returns a JavaScript object, so "jDateJS_response = (new Date(1396332000000))".
	// Default response for Date.today is time at midnight for the start of "today" UTC
	// Validate Epoch date on http://www.epochconverter.com/
	
	lr_output_message ("Epoch time at start of today was [%s]", lr_eval_string("{jDateJS_response}"));
	// Be very careful with the above calculation. It returns the start of the current day in UTC (not adjusted for daylight saving time)
	
	web_save_timestamp_param("tStamp", LAST ); 
	lr_output_message ("Epoch time now is [%s]", lr_eval_string("{tStamp}"));
	// The above LoadRunner function returns current epoch time (milliseconds since 1st January 1970 UTC)
	
	web_js_run(
        "Code=Date.today().toString('yyyy-MM-dd HH:mm:ssZ')",
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js", 
		ENDITEM,
		LAST);
	
	lr_output_message ("Time at start of day was [%s]", lr_eval_string("{jDateJS_response}"));	
	
	web_js_run(
        "Code=Date.today().setTimeToNow().toString('yyyy-MM-dd HH:mm:ssZ')",
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js", 
		//"File=time.js", 
		ENDITEM,
		LAST);
	
	lr_output_message ("Time now is [%s]", lr_eval_string("{jDateJS_response}"));	//NB still 00:00:00	
	
	web_js_run(
        "Code=Date.today().toString('dd-MM-yyyy')",
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js", 
		ENDITEM,
		LAST);
	
	lr_output_message ("Date is [%s]", lr_eval_string("{jDateJS_response}"));
	
	web_js_run(
        "Code=Date.parse('t + 5 d').toString('dd-MM-yyyy')",
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("The date in 5 days is [%s]", lr_eval_string("{jDateJS_response}"));	
	
	web_js_run(
        "Code=Date.today().add(5).days().toString('dd-MM-yyyy')",
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("Alternative to the date in 5 days is [%s]", lr_eval_string("{jDateJS_response}"));		
	
	web_js_run(
        "Code=Date.parse('July 1 1971').toString('yyyy-MM-dd HH:mm:ssZ')",  //yyyy-MM-dd HH:mm:ssZ
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("'July 1 1971' in universalSortableDateTime format was [%s]", lr_eval_string("{jDateJS_response}"));	//NB 00:00:00

	web_js_run(
        "Code=Date.parse('July 1 1971').toString('dddd')",  //yyyy-MM-dd HH:mm:ssZ
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("'July 1 1971' was a [%s]", lr_eval_string("{jDateJS_response}"));	
		
	web_js_run(
        "Code=Date.today().next().friday().toString('dddd d MMMM yyyy')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("Next Friday is [%s]", lr_eval_string("{jDateJS_response}"));		
	
	web_js_run(
        "Code=Date.today().last().monday().toString('dddd d MMMM yyyy')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("Last Monday was [%s]", lr_eval_string("{jDateJS_response}"));	

	web_js_run(
        "Code=Date.today().setTimeToNow().addHours(4).toString('yyyy-MM-dd HH:mm:ssZ')",
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		//"File=time.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("4 hours from now is [%s]", lr_eval_string("{jDateJS_response}"));	
	
		web_js_run(
        "Code=Date.today().setTimeToNow().addHours(-4).toString('yyyy-MM-dd HH:mm:ssZ')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		//"File=time.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("4 hours ago was [%s]", lr_eval_string("{jDateJS_response}"));

		web_js_run(
        "Code=Date.today().setTimeToNow().addMinutes(15).toString('yyyy-MM-dd HH:mm:ssZ')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		//"File=time.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("In 15 minutes it will be [%s]", lr_eval_string("{jDateJS_response}"));		
	
		web_js_run(
        "Code=Date.today().setTimeToNow().addHours(-25).toString('yyyy-MM-dd HH:mm:ssZ')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("1 day and 1 hour ago it was [%s]", lr_eval_string("{jDateJS_response}"));	

		web_js_run(
        "Code=Date.dec().final().sun().toString('dddd dS MMMM yyyy')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("The last Sunday this year is [%s]", lr_eval_string("{jDateJS_response}"));

		web_js_run(
        "Code=Date.feb().first().tue().toString('dddd dS MMMM yyyy')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("The first Tuesday in February this year was [%s]", lr_eval_string("{jDateJS_response}"));
	
		web_js_run(
        "Code=Date.today().getOrdinalNumber().toString()",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("Today is day [%s] of the year", lr_eval_string("{jDateJS_response}"));
	
		web_js_run(
        "Code=Date.today().setWeek(9).toString('dddd dS MMMM yyyy')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("The 9th week of this year started on [%s]", lr_eval_string("{jDateJS_response}"));	
	
	
		web_js_run(
        "Code=Date.today().isDaylightSavingTime().toString()",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("Daylight Saving time currently being observed = [%s]", lr_eval_string("{jDateJS_response}"));	
	
		web_js_run(
        "Code=Date.today().moveToNthOccurrence(0, 3).toString('dddd dS MMMM yyyy')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("The third Sunday this month will be [%s]", lr_eval_string("{jDateJS_response}"));		
	
		web_js_run(
        "Code=Date.parse('December 1 2015').getOrdinalNumber().toString()-Date.today().getOrdinalNumber().toString()",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	
	lr_output_message ("[%s] days until HP Discover in London", lr_eval_string("{jDateJS_response}"));
	
	lr_save_string("December 1 2015","pInputDate");
	
		web_js_run(
        "Code=Date.parse(LR.getParam('pInputDate')).toString('dddd dS MMMM yyyy')",  
		"ResultParam=jDateJS_response",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	
	lr_output_message ("[%s] (entered as a parameter) is converted to [%s] by this function", lr_eval_string("{pInputDate}"), lr_eval_string("{jDateJS_response}"));
		
	//http://www.longpelaexpertise.com/toolsJulian.php

	web_js_run(
        "Code=Date.today().toString('yy')",  
		"ResultParam=jDateJS_response1",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);	
	
	web_js_run(
        //"Code='00' + Date.today().getOrdinalNumber().toString().slice(-3)",  
        "Code=Date.today().getOrdinalNumber().toString()",  
		"ResultParam=jDateJS_response2",
		SOURCES,
		"File=date.js",
		ENDITEM,
		LAST);
	
	//Need to make sure that today's date is padded with a leading zero
	
	web_js_run(
        "Code=padDigits(LR.getParam('jDateJS_response2'), 3)",  
		"ResultParam=jDateJS_response3",
		SOURCES,
		"File=ExtraFunctions.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("Today's date in Julian format is [%s%s]", lr_eval_string("{jDateJS_response1}"), lr_eval_string("{jDateJS_response3}"));
	
	return 0;
}