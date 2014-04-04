//Mark Sibley has written three functions to convert the case of a captured string.
//There are functions to convert a captured string into all upper case, all lower case or title case.

//Sample input        = rIchard BiSHop - PerfORMANCE tESter
//Upper case output = RICHARD BISHOP - PERFORMANCE TESTER
//Lower case output = richard bishop - performance tester
//Title case output  = Richard Bishop - Performance Tester

Action()
{
	lr_save_string("rIchard BiSHop - PerfORMANCE tESter","sName");

	// Take the original string and convert it to upper case
	ConvertToUpper(lr_eval_string("{sName}"),"sNameUPPER");
	lr_output_message(lr_eval_string("[{sNameUPPER}]"));

	// Take the original string and convert it to lower case
	ConvertToLower(lr_eval_string("{sName}"),"sNameLOWER");
	lr_output_message(lr_eval_string("[{sNameLOWER}]"));

	// Take the original string and convert it to title case
	ConvertToTitle(lr_eval_string("{sName}"),"sNameTITLE");
	lr_output_message(lr_eval_string("[{sNameTITLE}]"));

	return 0;
}

