Action()
{

//	web_add_cookie("external_no_cache=1; DOMAIN=89.238.153.133");

	lr_start_transaction("MBP_Web_010_OpenHomePage");

	web_url("index.php", 
		"URL=http://89.238.153.133/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);
		
	lr_end_transaction("MBP_Web_010_OpenHomePage", LR_AUTO);
	
	lr_think_time(5);


/*Correlation comment - Do not change!  Original value='250TaLL3Uu2cKWjj' Name ='CorrelationParameter' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=form_key/(.*?)/\"\\ method",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/sony-vaio-vgn-txn27n-b-11-1-notebook-pc.html*",
		LAST);

/*Correlation comment - Do not change!  Original value='aHR0cDovLzg5LjIzOC4xNTMuMTMzL2luZGV4LnBocC9zb255LXZhaW8tdmduLXR4bjI3bi1iLTExLTEtbm90ZWJvb2stcGMuaHRtbD9fX19TSUQ9VQ' Name ='CorrelationParameter_1' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=uenc/(.*?),,",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/sony-vaio-vgn-txn27n-b-11-1-notebook-pc.html*",
		LAST);

	lr_start_transaction("MBP_Web_020_SelectProduct");

	web_url("sony-vaio-vgn-txn27n-b-11-1-notebook-pc.html", 
		"URL=http://89.238.153.133/index.php/sony-vaio-vgn-txn27n-b-11-1-notebook-pc.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);
		
		lr_end_transaction("MBP_Web_020_SelectProduct", LR_AUTO);
		
		lr_think_time(5);

	/*6: Type "1" in Qty textbox*/
	/*7: Click on Add to Cart button*/
	
	lr_start_transaction("MBP_Web_030_AddToCart");

	web_submit_data("250TaLL3Uu2cKWjj",
		"Action=http://89.238.153.133/index.php/checkout/cart/add/uenc/{CorrelationParameter_1},,/product/27/form_key/{CorrelationParameter}/",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://89.238.153.133/index.php/sony-vaio-vgn-txn27n-b-11-1-notebook-pc.html",
		"Snapshot=t3.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=form_key", "Value={CorrelationParameter}", ENDITEM,
		"Name=product", "Value=27", ENDITEM,
		"Name=related_product", "Value=", ENDITEM,
		"Name=qty", "Value=1", ENDITEM,
		LAST);
	
	lr_end_transaction("MBP_Web_030_AddToCart", LR_AUTO);
	
	lr_think_time(5);


	/*8: Click on Proceed to Checkout button*/

	lr_start_transaction("MBP_Web_040_ProceedToCheckout");

	web_url("onepage", 
		"URL=http://89.238.153.133/index.php/checkout/onepage/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/cart/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/varien/accordion.js", ENDITEM, 
		"Url=/skin/frontend/base/default/js/opcheckout.js", ENDITEM, 
		LAST);
	
	lr_end_transaction("MBP_Web_040_ProceedToCheckout", LR_AUTO);
	
	lr_think_time(5);

	/*9: Select "Register" from Checkout as a Guest or... listbox*/

	/*10: Click on Continue button*/

	lr_start_transaction("MBP_Web_050_RegisterCustomer");
	
	
	web_submit_data("saveMethod", 
		"Action=http://89.238.153.133/index.php/checkout/onepage/saveMethod/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=method", "Value=register", ENDITEM, 
		LAST);
	
	web_url("progress", 
		"URL=http://89.238.153.133/index.php/checkout/onepage/progress/?prevStep=billing", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("MBP_Web_050_RegisterCustomer", LR_AUTO);	
	
	lr_think_time(5);
	
	lr_start_transaction("MBP_Web_060_EnterCustomerDetails");
	
	web_custom_request("saveBilling", 
		"URL=http://89.238.153.133/index.php/checkout/onepage/saveBilling/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=billing%5Baddress_id%5D=&billing%5Bfirstname%5D=John&billing%5Blastname%5D=Smith&billing%5Bcompany%5D=&billing%5Bemail%5D={pUniqueNumber}%40mail.com&billing%5Bstreet%5D%5B%5D=1%20High%20Street&billing%5Bstreet%5D%5B%5D=&billing%5Bcity%5D=Any%20City&billing%5Bregion_id%5D=&billing%5Bregion%5D=&billing%5Bpostcode%5D=M1%205AN&billing%5Bcountry_id%5D=GB&billing%5Btelephone%5D=01234567895412&billing%5Bfax%5D=&billing%5Bcustomer_password%5D=q2w3e4r5t6&billing%5Bconfirm_password%5D=q2w3e4r5t6&"
		"billing%5Bsave_in_address_book%5D=1&billing%5Buse_for_shipping%5D=1", 
		LAST);

	web_submit_data("getAdditional", 
		"Action=http://89.238.153.133/index.php/checkout/onepage/getAdditional/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_url("progress_2", 
		"URL=http://89.238.153.133/index.php/checkout/onepage/progress/?prevStep=billing", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("MBP_Web_060_EnterCustomerDetails", LR_AUTO);
	
	lr_think_time(5);


	web_url("progress_3", 
		"URL=http://89.238.153.133/index.php/checkout/onepage/progress/?prevStep=shipping", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	/*41: Select "Check / Money order" from checkmo Check / Money... radiogroup*/
	
	lr_start_transaction("MBP_Web_070_ConfirmDeliveryMethod");


	web_submit_data("saveShippingMethod", 
		"Action=http://89.238.153.133/index.php/checkout/onepage/saveShippingMethod/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=shipping_method", "Value=flatrate_flatrate", ENDITEM, 
		LAST);

	web_url("progress_4", 
		"URL=http://89.238.153.133/index.php/checkout/onepage/progress/?prevStep=shipping_method", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("MBP_Web_070_ConfirmDeliveryMethod", LR_AUTO);	
	
	lr_think_time(5);
	
	lr_start_transaction("MBP_Web_080_ConfirmPaymentMethod");
	
	web_url("progress_5", 
		"URL=http://89.238.153.133/index.php/checkout/onepage/progress/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	/*42: Click on Continue button*/

	web_submit_data("savePayment", 
		"Action=http://89.238.153.133/index.php/checkout/onepage/savePayment/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=payment[method]", "Value=checkmo", ENDITEM, 
		LAST);

	lr_end_transaction("MBP_Web_080_ConfirmPaymentMethod", LR_AUTO);	
	
	lr_think_time(5);
	
	/*43: Click on Place Order button*/

	lr_start_transaction("MBP_Web_090_PlaceOrder");
	
	web_url("progress_6", 
		"URL=http://89.238.153.133/index.php/checkout/onepage/progress/?prevStep=payment", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://89.238.153.133/index.php/checkout/onepage/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("MBP_Web_090_PlaceOrder", LR_AUTO);
	
	lr_think_time(5);
	

	return 0;
}
