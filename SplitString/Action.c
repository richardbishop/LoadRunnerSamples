Action()
{
	//Saves the string (normally this would be a correlated value hence the "c" prefix - cParameterToSplit
	lr_save_string("1234567890abcdefghijklmnopqrstuvwxyz","cParameterToSplit");

	//Splits the saved string into two parts, first x characters as declared in "iLeftSplit" and remainder
	SplitString(lr_eval_string("{cParameterToSplit}"),10);
	
	return 0;
}
