vuser_end()
{

	web_submit_data("250TaLL3Uu2cKWjj_2",
		"Action=http://89.238.153.133/index.php/checkout/onepage/saveOrder/form_key/{CorrelationParameter}/",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://89.238.153.133/index.php/checkout/onepage/",
		"Snapshot=t16.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=payment[method]", "Value=checkmo", ENDITEM,
		LAST);

	return 0;
}