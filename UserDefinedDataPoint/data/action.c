Action()
{

	web_add_cookie("_ga=GA1.3-2.1754593039.1433931260; DOMAIN=www.google.co.uk");

	web_add_cookie("NID=68=NgCRxVW7ubbILtfGOYfZeQSOiZBppXdRe21pBPWvsNoikPBHuHTe7gsdt-cfVY-DQKQ9C9_4Be78Vwi9e2AmT2YHPJLfszI8vqqkhO5ypqdUCUU5xGER9dTpqmYVQY8Y; DOMAIN=www.google.co.uk");

	web_add_cookie("PREF=ID=5d6cae63f12b910d:TM=1433931259:LM=1433931259:S=ypsw6hdlNVBZbwtY; DOMAIN=www.google.co.uk");

	web_add_cookie("OGPC=4061130-1:; DOMAIN=www.google.co.uk");

	web_add_cookie("_ga=GA1.3-2.559159154.1433931292; DOMAIN=www.google.co.uk");

	web_url("finance", 
		"URL=http://www.google.co.uk/finance?cid=14323395", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://www.gstatic.com/og/_/js/k=og.og.en_US.5XnTNMJwhLQ.O/rt=j/t=zcms/m=ld,sy37,sy38,sy39,sy40,d,sy59,gl,is,id,nb,nw,sb,sd,st,sy45,awd,sy48,sy49,sy51,p,vd,lod,eld,ip,dp,cpd/rs=AItRSTPns-kwBB5t5qS9y-IJNDgNRVnHfA", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		"Url=http://www.google-analytics.com/analytics.js", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		"Url=/finance/images/sp11.png", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		"Url=http://ssl.gstatic.com/gb/images/v1_ab71ffe9.png", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		"Url=/finance/s/aEc4Twn89CE/chart9.swf?hl=en&gl=gb", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		"Url=http://ssl.gstatic.com/ui/v1/disclosure/light-grey-disclosure-arrow-down.png", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		"Url=/finance/qs/test?VER=8&MODE=init&zx=4mcstgxajm2p&t=1", "Referer=http://www.google.co.uk/finance/_/js/a/b/rt=h/ver=rZztopK9dfE.en_GB./am=!vutE9fCSVdws1JA_/d=0", ENDITEM, 
		"Url=/finance/qs/test?VER=8&TYPE=xmlhttp&zx=guv7jmria73o&t=1", "Referer=http://www.google.co.uk/finance/_/js/a/b/rt=h/ver=rZztopK9dfE.en_GB./am=!vutE9fCSVdws1JA_/d=0", ENDITEM, 
		"Url=/finance/qs/channel?VER=8&RID=rpc&SID=8634503B339E9EFA&CI=1&AID=0&TYPE=xmlhttp&zx=xgdsy2so1wp6&t=1", "Referer=http://www.google.co.uk/finance/_/js/a/b/rt=h/ver=rZztopK9dfE.en_GB./am=!vutE9fCSVdws1JA_/d=0", ENDITEM, 
		LAST);

	web_add_cookie("OGPC=4061130-2:; DOMAIN=www.google.co.uk");

	web_submit_data("prefs", 
		"Action=http://www.google.co.uk/finance/prefs?action=set&prefsgroup=global&prefskey=RV&prefsval=14323395&hash&xsrf=iL78HDl_JbAXE7xbh4grJjCO7-g%3A1433931289627&ei=GQ54VcHhHsWH8wOvhYG4Bg", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://www.google.co.uk/finance/_/js/a/b/rt=h/ver=rZztopK9dfE.en_GB./am=!vutE9fCSVdws1JA_/d=0", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_submit_data("channel", 
		"Action=http://www.google.co.uk/finance/qs/channel?VER=8&RID=90605&CVER=1&zx=vvnyasx70qh0&t=1", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=http://www.google.co.uk/finance/_/js/a/b/rt=h/ver=rZztopK9dfE.en_GB./am=!vutE9fCSVdws1JA_/d=0", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=count", "Value=0", ENDITEM, 
		LAST);

	web_custom_request("channel_2", 
		"URL=http://www.google.co.uk/finance/qs/channel?VER=8&SID=8634503B339E9EFA&RID=90606&AID=0&zx=tunaial2amyg&t=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www.google.co.uk/finance/_/js/a/b/rt=h/ver=rZztopK9dfE.en_GB./am=!vutE9fCSVdws1JA_/d=0", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"Body=count=1&ofs=0&req0_LON:RBS=&req0_LON:BKIE=&req0_LON:RAT=&req0_LON:BARC=&req0_LON:LLOY=&req0_LON:HSBA=&req0_LON:STAN=&req0_LON:LBS=&req0_LON:BNC=&req0_LON:OML=&req0_LON:AV=", 
		EXTRARES, 
		"Url=../images/cleardot.gif", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		"Url=../images/zippy_right.gif", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		"Url=../chart?cht=s&cid=14323395,7995352,6281494,11248216,8873270,5978765,6060617,730354,11544020,940632,15922947&p=1d&ei=GQ54VcHhHsWH8wOvhYG4Bg", "Referer=http://www.google.co.uk/finance?cid=14323395", ENDITEM, 
		LAST);

	web_add_cookie("id=224dd6830c020093||t=1432035374|et=730|cs=002213fd48fc870a6c146002f9; DOMAIN=ad-g.doubleclick.net");

	web_url("financials;fe=lon;ft=rbs;fm=large;dcopt=ist;myd=ad;sz=300x250;tile=1;dc_ref=http%3A%2F%2Ffinance.google.com%2Ffinance%3Fq%3DLON%3ARBS;domain=www.google.co.uk;ord=778343206", 
		"URL=http://ad-g.doubleclick.net/adi/com.gf.company/financials;fe=lon;ft=rbs;fm=large;dcopt=ist;myd=ad;sz=300x250;tile=1;dc_ref=http%3A%2F%2Ffinance.google.com%2Ffinance%3Fq%3DLON%3ARBS;domain=www.google.co.uk;ord=778343206?", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.google.co.uk/finance?cid=14323395", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://pagead2.googlesyndication.com/pagead/images/x_button_blue2.png", "Referer=http://ad-g.doubleclick.net/adi/com.gf.company/financials;fe=lon;ft=rbs;fm=large;dcopt=ist;myd=ad;sz=300x250;tile=1;dc_ref=http%3A%2F%2Ffinance.google.com%2Ffinance%3Fq%3DLON%3ARBS;domain=www.google.co.uk;ord=778343206?", ENDITEM, 
		LAST);

	web_url("financials;fe=lon;ft=rbs;fm=large;dcopt=ist;myd=ad2;sz=33x33;tile=2;dc_ref=http%3A%2F%2Ffinance.google.com%2Ffinance%3Fq%3DLON%3ARBS;domain=www.google.co.uk;ord=778343206", 
		"URL=http://ad-g.doubleclick.net/adi/com.gf.company/financials;fe=lon;ft=rbs;fm=large;dcopt=ist;myd=ad2;sz=33x33;tile=2;dc_ref=http%3A%2F%2Ffinance.google.com%2Ffinance%3Fq%3DLON%3ARBS;domain=www.google.co.uk;ord=778343206?", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.google.co.uk/finance?cid=14323395", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}