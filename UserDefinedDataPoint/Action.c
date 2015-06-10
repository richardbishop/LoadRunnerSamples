Action()
{

	float fSharePrice;
	char sTemp [24];
	double atof( const char *string); 

	// Save parameter cSharePrice
	web_reg_save_param_ex(
		"ParamName=cSharePrice",
		//"LB/RE=<span id=\"ref_\d+_.\">",
		"LB=<span id=\"ref_14323395_l\">",
		"RB=</span>",
		SEARCH_FILTERS,
		LAST);
	
	//Call Google Finance Page containing RBS share price
	web_url("finance", 
		"URL=http://www.google.co.uk/finance?cid=14323395", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);
	
	//Test of large share price (this works)
	//lr_save_string("123456789012345.12","cSharePrice");

	//Output the share price for info
	lr_output_message("Current RBS Share Price (char) is %sp", lr_eval_string("{cSharePrice}"));
	
	strcpy(sTemp,lr_eval_string("{cSharePrice}"));
	fSharePrice = atof(sTemp);
	
	lr_output_message("Current RBS Share Price (float) is %fp", fSharePrice);
	lr_user_data_point ("RBS Share Price",  fSharePrice);
		
	return 0;
}