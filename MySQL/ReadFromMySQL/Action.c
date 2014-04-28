Action()
{
	char chQuery[128];
	MYSQL *Mconn;

	lr_load_dll("libmysql.dll"); 

	Mconn = lr_mysql_connect(MYSQLSERVER, MYSQLUSERNAME, MYSQLPASSWORD, MYSQLDB, atoi(MYSQLPORT));

	sprintf(chQuery, "select sqForename, sqSurname, sqJobDesc from sample_reads");

	lr_mysql_query(Mconn, chQuery);

	lr_save_string(row[0][0].cell, "sForename");
	lr_save_string(row[1][0].cell, "sSurname");
	lr_save_string(row[2][0].cell, "sJobDesc");	

	lr_output_message(lr_eval_string("Forename: {sForename}; Surname: {sSurname}; Job Description:{sJobDesc}"));

	lr_save_string(row[0][1].cell, "sForename");
	lr_save_string(row[1][1].cell, "sSurname");
	lr_save_string(row[2][1].cell, "sJobDesc");	

	lr_output_message(lr_eval_string("Forename: {sForename}; Surname: {sSurname}; Job Description:{sJobDesc}"));

	lr_mysql_disconnect(Mconn);

	return 0;
}
