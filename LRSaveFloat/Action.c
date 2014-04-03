Action()
{
	//Sample code taken from Kim at - http://ptfrontline.wordpress.com/2010/01/27/lr_save_float-function-for-loadrunner/
	//Kim's comments....
	//LoadRunner has lr_save_int() and lr_save_string() but the float saving function is missing so I just quickly
	//whipped up the following code. It’s by no means perfect when it comes to checking for errors, but it will 
	//work >90% of the times (as long as the scripter knows what he/she is doing).. Enjoy
	
	lr_save_float(123.456, "myVar", 2);
	lr_output_message("%s",lr_eval_string("{myVar}"));  //Rounds floating point number to two decimal places
	
	return 0;
}
