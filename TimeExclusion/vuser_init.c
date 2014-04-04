char *Day;
char *Hour;
char *Minute;
int  iHour;
int  iMinute;
int  iExcStaDay;
int  iExcStaMin;
int  iExcStaHou;
int  iExcEndDay;
int  iExcEndHou;
int  iExcEndMin;
int  iExcSta;
int  iExcEnd;
int  iPauseTime;
int  TotalMinutes=0;

void CheckExclusionTime()
{
	lr_save_datetime("%A", DATE_NOW, "Day"); 
	lr_save_datetime("%H", TIME_NOW, "Hour"); 
	lr_save_datetime("%M", TIME_NOW, "Minute"); 

	//lr_output_message ( "Today is %s", lr_eval_string ( "{Day}" ) ); 
	lr_output_message ( "The time is %s:%s", lr_eval_string ( "{Hour}" ),  lr_eval_string ( "{Minute}" ) ); 

	//Convert time to No of minutes since the start of the week.
	//Assume that week starts at 00:00 on Monday
	Day=lr_eval_string ("{Day}");
	Hour=lr_eval_string ("{Hour}");
	Minute=lr_eval_string ("{Minute}");

	if (strcmp(Day,"Monday")==0) 
		{lr_output_message ( "Day 1 of the week");
		TotalMinutes=TotalMinutes+0;}
		else
		if (strcmp(Day,"Tuesday")==0) 
			{lr_output_message ( "Day 2 of the week"); 
			TotalMinutes=TotalMinutes+1440;}
			else
			if (strcmp(Day,"Wednesday")==0) 
				{lr_output_message ( "Day 3 of the week"); 
				TotalMinutes=TotalMinutes+2880;}
				else
					if (strcmp(Day,"Thursday")==0) 
					{lr_output_message ( "Day 4 of the week"); 
					TotalMinutes=TotalMinutes+4320;}
						else
							if (strcmp(Day,"Friday")==0) 
							{lr_output_message ( "Day 5 of the week"); 
							TotalMinutes=TotalMinutes+5760;}
								else
									if (strcmp(Day,"Saturday")==0) 
									{lr_output_message ( "Day 6 of the week"); 
									TotalMinutes=TotalMinutes+7200;}
										else
											if (strcmp(Day,"Sunday")==0) 
											{lr_output_message ( "Day 7 of the week"); 
											TotalMinutes=TotalMinutes+8640;}

		//Convert Hour and Minute into iHour and iMinute (integers)
		//Convert Hours into Minutes
		iHour = atoi(Hour);
		iHour = iHour * 60;
		iMinute = atoi(Minute);
		iPauseTime = 0;

		//Calculate the number of minutes since 00:00 on Monday
		TotalMinutes=TotalMinutes+iHour+iMinute;
		lr_output_message ( "%d minutes have passed since 00:00 on Monday",TotalMinutes ); 

		iExcStaDay=iExcStaDay-1;
		iExcEndDay=iExcEndDay-1;

		iExcSta = (iExcStaDay*1440)+(iExcStaHou*60)+iExcStaMin;
		iExcEnd = (iExcEndDay*1440)+(iExcEndHou*60)+iExcEndMin;

		if(TotalMinutes>iExcSta)
			{	
			//Check if iExcEnd has passed
			if(TotalMinutes<iExcEnd)
			{
				iPauseTime=(iExcEnd-TotalMinutes);
				lr_output_message("Script needs to wait for %d minutes",iPauseTime);

				iPauseTime=iPauseTime*60;
				lr_output_message("Script paused for %d seconds",iPauseTime);

				lr_think_time(iPauseTime);
			}
				lr_output_message("No pause required - Script Running");
			}
}

vuser_init()
{
	return 0;
}
