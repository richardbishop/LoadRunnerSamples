Action()
{
   	// Use this if you want to check whether something you captured contained a piece of text
   	// This is handy if the same word appears in more than one type of error or warning message but doesnt always have the same boundaries.
   
   	// This lr_save_string takes the place of the web_reg_save_param which captures information returned from a web server
   	lr_save_string("The quick brown fox jumps over the lazy dogs","cCapturedString");
   
   	//Examples using LoadRunner strings, simulating captured text
   	CheckStringInString(lr_eval_string("{cCapturedString}"),"lazy");
	CheckStringInString(lr_eval_string("{cCapturedString}"),"work-shy");	 

	//Examples using simple strings
	CheckStringInString("abcdefghijklmnopqrstuvwxyz","abc");
	CheckStringInString("abcdefghijklmnopqrstuvwxyz","abd");
	
	return 0;
}
