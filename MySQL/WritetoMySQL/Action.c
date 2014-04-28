Action()
{

	char chQuery[128];

	MYSQL *Mconn; 
    
	lr_load_dll("libmysql.dll"); 

	Mconn = lr_mysql_connect(MYSQLSERVER, MYSQLUSERNAME, MYSQLPASSWORD, MYSQLDB, atoi(MYSQLPORT));

	lr_save_string(lr_eval_string("{pTransactionName}"),"sTransactionName");
	lr_save_string(lr_eval_string("{pResult}"),"sResult");
	lr_save_string(lr_eval_string("{pRandom}"),"sResponseTime");

	lr_save_datetime("%H:%M:%S", TIME_NOW, "sTime"); 

	sprintf(chQuery, "insert into test.sample_writes (sqTransactionName, sqResult, sqResponseTime, sqTime) values ('%s','%s','%s','%s');",
				lr_eval_string("{sTransactionName}"),
				lr_eval_string("{sResult}"),
				lr_eval_string("{sResponseTime}"),
				lr_eval_string("{sTime}"));

	lr_mysql_query(Mconn, chQuery);

	lr_mysql_disconnect(Mconn);


	return 0;
}
