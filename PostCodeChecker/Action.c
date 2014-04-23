// *******************************************************************************
//
// This script was created in LoadRunner 12.0
//
// ***********************************************************************************
//
// Application           :           http://api.zippopotam.us/ Zip/Post Code Checker
// Script                :           PostCodeChecker
// BP provided by    	 :           Wilson Mar
// Comments              :           Script which demonstrates string handling, 
//									 correlation and parameterisation.
//                                   Makes call to zippopotsm.us with country code and 
//									 post code, retrieves place name, latitude & longitude
// ***********************************************************************************
//
// Change History: -
//
// Date                   Name                     	Change
// ~~~~                   ~~~~~                     ~~~~~~
// 23/04/2014             Richard Bishop			Initial script creation   
//
// ***********************************************************************************

//Declare integers used in loop
int 	iPlaceCount;
int 	iLoopCount;

//Declare char strings used for place names and information	
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
	
	//Make call to API with country code and postcode from parameter file
	web_url("API.ZIPPOPOTAM.US", 
		"URL=http://api.zippopotam.us/{pCountryCode}/{pPostCode}", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);
		
	lr_end_transaction("0010_GetPostCodeData", LR_AUTO);
	
	//start to write output for this location, write summary then header info before loop
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
	
 		//Loop through the place names and write them out
 		for (iLoopCount=1;iLoopCount<=iPlaceCount;iLoopCount++)
		{
 		//First convert strings to char values to allow incrementing
  		sprintf	(sPlaceName,"{cPlaceName_%d}",iLoopCount);
		sprintf	(sLatitude,"{cLatitude_%d}",iLoopCount);
		sprintf	(sLongitude,"{cLongitude_%d}",iLoopCount);
		sprintf	(sState,"{cState_%d}",iLoopCount);
		
		//Write captured placenames to parameters to allow output
		lr_save_string(lr_eval_string( sPlaceName ), "sPlaceName");
		lr_save_string(lr_eval_string( sLatitude ), "sLatitude");
		lr_save_string(lr_eval_string( sLongitude ), "sLongitude");
		lr_save_string(lr_eval_string( sState ), "sState");
  		
		//Output the place name, lat/long and state
		lr_output_message("%s,%s,%s,%s",
	                  lr_eval_string("{sPlaceName}"),
	                  lr_eval_string("{sLatitude}"),
	                  lr_eval_string("{sLongitude}"),
	                  lr_eval_string("{sState}"));
		} 
	
                                   
	return 0;
}