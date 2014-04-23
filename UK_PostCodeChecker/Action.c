	int 	iPlaceCount; 
	int 	iLoopCount;
	
	char	sPlaceName[20];
	char	sLatitude[20];
	char	sLongitude[20];
	char	sState[20];

Action()
{
	web_reg_save_param_ex(
    	"ParamName=cCountry", 
		"LB=\"country\": \"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);	

		web_reg_save_param_ex(
    	"ParamName=cCountryAbbreviation", 
		"LB=\"country abbreviation\": \"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);		
	
	web_reg_save_param_ex(
    	"ParamName=cPlaceName", 
		"LB=\"place name\": \"",
		"RB=\"",
		"Ordinal=all",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);
	

		web_reg_save_param_ex(
    	"ParamName=cState", 
		"LB=\"state\": \"",
		"RB=\"",
		"Ordinal=all",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);		

		web_reg_save_param_ex(
    	"ParamName=cStateAbbreviation", 
		"LB=\"state abbreviation\": \"",
		"RB=\"",
		"Ordinal=all",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);	

		web_reg_save_param_ex(
    	"ParamName=cLatitude", 
		"LB=\"latitude\": \"",
		"RB=\"",
		"Ordinal=all",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);

		web_reg_save_param_ex(
    	"ParamName=cLongitude", 
		"LB=\"longitude\": \"",
		"RB=\"",
		"Ordinal=all",
		SEARCH_FILTERS,
		"Scope=body",
		LAST);		

	lr_start_transaction("0010_GetPostCodeData");
	
	web_url("API.ZIPPOPOTAM.US", 
		"URL=http://api.zippopotam.us/{pCountryCode}/{pPostCode}", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);
		
	lr_end_transaction("0010_GetPostCodeData", LR_AUTO);
	
	lr_output_message("The PostCode, %s, with Country Code, %s, relates to %s places in %s",
	                  lr_eval_string("{pPostCode}"),
	                  lr_eval_string("{pCountryCode}"),
	                  lr_eval_string("{cPlaceName_count}"),
	                  lr_eval_string("{cCountry}"));
	
	lr_output_message("Those places are:	");   
    lr_output_message("PlaceName,Latitude,Longitude,State");
	lr_output_message("---------,--------,---------,-----");
	                                    

 	// Use the atoi function to convert the parameters into integers. 
 	iPlaceCount = atoi (lr_eval_string("{cPlaceName_count}")); 
	
 		for (iLoopCount=1;iLoopCount<=iPlaceCount;iLoopCount++)
		{
  		sprintf	(sPlaceName,"{cPlaceName_%d}",iLoopCount);
		sprintf	(sLatitude,"{cLatitude_%d}",iLoopCount);
		sprintf	(sLongitude,"{cLongitude_%d}",iLoopCount);
		sprintf	(sState,"{cState_%d}",iLoopCount);
		
		lr_save_string(lr_eval_string( sPlaceName ), "sPlaceName");
		lr_save_string(lr_eval_string( sLatitude ), "sLatitude");
		lr_save_string(lr_eval_string( sLongitude ), "sLongitude");
		lr_save_string(lr_eval_string( sState ), "sState");
  		
		lr_output_message("%s,%s,%s,%s",
	                  lr_eval_string("{sPlaceName}"),
	                  lr_eval_string("{sLatitude}"),
	                  lr_eval_string("{sLongitude}"),
	                  lr_eval_string("{sState}"));
		} 
	
                                   
	return 0;
}