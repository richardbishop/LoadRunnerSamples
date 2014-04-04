
//*******************************************************
Action()
{
 lr_save_string("ABC123456","Param");
 Reverse(lr_eval_string("{Param}"),"NewParam");
 lr_output_message(lr_eval_string("Changed [{Param}] to [{NewParam}]"));

 lr_save_string("Peter Piper","Param");
 Reverse(lr_eval_string("{Param}"),"NewParam");
 lr_output_message(lr_eval_string("Changed [{Param}] to [{NewParam}]"));

 lr_save_string("Fiddlesticks","Param");
 Reverse(lr_eval_string("{Param}"),"NewParam");
 lr_output_message(lr_eval_string("Changed [{Param}] to [{NewParam}]"));
 return 0;
}
