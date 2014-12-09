int i;

Action()
{

	lr_start_transaction("MTK_Web_010_OpenHomePage");

//	web_add_cookie("external_no_cache=1; DOMAIN=89.238.153.133");

	web_url("index.php", 
		"URL=http://89.238.153.133/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);

	lr_end_transaction("MTK_Web_010_OpenHomePage",LR_AUTO);
	
	lr_think_time(5);
	


	for (i=1;i<=5;i++)	
	{
			lr_save_string(lr_eval_string("{pSearchTerm}"), "sSearchTerm");
		
			web_reg_save_param_ex(
				"ParamName=cFirstLink",
				"LB=<li class=\"item first\">\n                <a href=\"http:\/\/89.238.153.133\/index.php\/",
				"RB=\"",
				"NotFound=warning",
				SEARCH_FILTERS,
				LAST);
			
			lr_start_transaction("MTK_Web_020_ProductSearch");
		
			web_url("result", 
				"URL=http://89.238.153.133/index.php/catalogsearch/result/?q={sSearchTerm}", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://89.238.153.133/index.php", 
				"Snapshot=t4.inf", 
				"Mode=HTML", 
				EXTRARES, 
				LAST);
		
			lr_end_transaction("MTK_Web_020_ProductSearch",LR_AUTO);

			lr_think_time(5);
			
			lr_start_transaction("MTK_Web_030_SelectItem");
		
			web_url("ItemSelection", 
				"URL=http://89.238.153.133/index.php/{cFirstLink}", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=http://89.238.153.133/index.php/catalogsearch/result/?q={sSearchTerm}", 
				"Snapshot=t5.inf", 
				"Mode=HTML", 
				EXTRARES, 
				LAST);
		
			lr_end_transaction("MTK_Web_030_SelectItem",LR_AUTO);
			
			lr_think_time(5);
	}

	web_reg_save_param_ex(
		"ParamName=cPageURLs",
		"LB=<a href=\"",
		"RB=\"",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		LAST);	
	
	lr_start_transaction("MTK_Web_040_ReturnHome");

	web_url("index.php_2", 
		"URL=http://89.238.153.133/index.php/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("MTK_Web_040_ReturnHome",LR_AUTO);

	lr_think_time(5);

	for (i=1;i<=10;i++)	
	{
			
				web_reg_save_param_ex(
					"ParamName=cPageURLs",
					"LB=<a href=\"",
					"RB=\"",
					"Ordinal=ALL",
					SEARCH_FILTERS,
					LAST);	
		
				lr_save_string(lr_paramarr_random( "cPageURLs" ),"cRandURL");
		
				lr_start_transaction("MTK_Web_050_SelectRandomLink");
			
				web_url("RandURL", 
					"URL={cRandURL}", 
					"Resource=0", 
					"RecContentType=text/html", 
					"Referer=http://89.238.153.133/index.php/", 
					"Snapshot=t21.inf", 
					"Mode=HTML", 
					EXTRARES, 
					LAST);
			
				lr_end_transaction("MTK_Web_050_SelectRandomLink",LR_AUTO);
				
				lr_think_time(5);
	}

	return 0;
}
