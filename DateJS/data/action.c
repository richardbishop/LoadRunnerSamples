Action()
{

	web_custom_request("challenge", 
		"URL=http://localhost:3000/challenge", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	return 0;
}