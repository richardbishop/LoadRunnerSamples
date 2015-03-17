Action()
{
	lr_save_datetime("%y%j", DATE_NOW, "JulianDate"); 
	lr_output_message("Today's Julian Date is %s",lr_eval_string("{JulianDate}"));
	
	return 0;
}
