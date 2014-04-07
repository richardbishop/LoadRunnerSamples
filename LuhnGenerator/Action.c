Action()
{
	// Uses JavaScript code from https://gist.github.com/B-Con/4988902 07-Apr-2014
	// Sampe LoadRunner script which generates random credit card numbers capable
	// of passing the simple Luhn checksum often used to validate credit cards.
	
	// N.B. These are not valid credit card numbers
	// N.B. Though these may be suitable for performance testing, no responsibility can be taken
	//      by the author (Richard Bishop) for inappropriate use of this script.
	
	web_js_run(
        "Code=CC_gen_Visa16()",  
		"ResultParam=jVisaNumber16",
		SOURCES,
		"File=CreditCardGenerator.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("16-digit Visa Number = [%s]", lr_eval_string("{jVisaNumber16}"));
	
	web_js_run(
        "Code=CC_gen_Visa13()",  
		"ResultParam=jVisaNumber13",
		SOURCES,
		"File=CreditCardGenerator.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("13-digit Visa Number = [%s]", lr_eval_string("{jVisaNumber13}"));	

	web_js_run(
        "Code=CC_gen_MasterCard()",  
		"ResultParam=jMasterCardNumber",
		SOURCES,
		"File=CreditCardGenerator.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("16-digit MasterCard Number = [%s]", lr_eval_string("{jMasterCardNumber}"));	
	
	web_js_run(
        "Code=CC_gen_Discover()",  
		"ResultParam=jDiscoverNumber",
		SOURCES,
		"File=CreditCardGenerator.js",
		ENDITEM,
		LAST);
	
	lr_output_message ("16-digit Discover Number = [%s]", lr_eval_string("{jDiscoverNumber}"));		
	
	return 0;
}
