// *******************************************************************************
//
// This script was created in LoadRunner 12.0
//
// ***********************************************************************************
//
// Application           :           https://en.gravatar.com/site/implement/images/ Gravatar image request
// Script                :           SaveGravatar
// BP provided by    	 :           Wilson Mar
// Comments              :           Script which demonstrates MD5 Hash calculation, 
//									 correlation, use of external parameters, writing data to 
//									 external file with relevant name. 
// Function				 :			 Save gravatar (if one exists for given email address)
// ***********************************************************************************
//
// Change History: -
//
// Date                   Name                     	Change
// ~~~~                   ~~~~~                     ~~~~~~
// 23/04/2014             Richard Bishop			Initial script creation   
//
// ***********************************************************************************

// Info on saving files taken from http://motevich.blogspot.co.uk/2007/10/loadrunner-save-download-file-server.html

//Declare variables
unsigned long ulGravatarLength;	//Gravatar file size in bytes
char *chBufferSize;				//Buffer to store Gravatars returned from website
char chMD5_digest[16] = {0}; 	//Char to hold 16 characters 2 char. at a time for 32.
int  i = 0; 					//Used in loops
char *chEmailAddress ;			//Email address as char value
char chDestFile [64];
int iHttpRetCode;				//HTTP return code

//WriteDataToFile function taken from http://motevich.blogspot.co.uk/2007/10/loadrunner-save-download-file-server.html
int WriteDataToFile(char *chFileName, const char *chBufferSize, int iLen)
{
    int iFile;
    iFile = fopen(chFileName,"wb");
    if (iFile == NULL)
    {
        lr_error_message("Could't create or open the file: %s", chFileName);
        return LR_FAIL;
    }

    fwrite(chBufferSize, iLen, 1, iFile);
    fclose(iFile);
 
    return LR_PASS;
}



Action()
{
	//Declare size of largest parameter to be captured, may need to be increased for very large gravatars
	//200px x 200px is approx 10K
	web_set_max_html_param_len("20000");
	
	//Add email address from parameter into char value for hashing
	chEmailAddress = lr_eval_string("{pEmailAddress}");
    
	//Generate MD5 hash for the email address
	lr_load_dll("libeay32_101_x32.dll");
	MD5(chEmailAddress,strlen(chEmailAddress),chMD5_digest);
	for(i = 0; i < 16; i++)
	{
	lr_param_sprintf("md5hash","%s%.02x", i == 0 ? "" : 
	lr_eval_string("{md5hash}"),chMD5_digest[i] & 0xFF);
	}
	
	//Output value of MD5 hash - can be commented out after debugging
	lr_output_message("MD5 hash of [%s] is [%s]",
	                  chEmailAddress,
	                  lr_eval_string("{md5hash}"));
	
	//Save hashed email address as sHashValue
	lr_save_string(lr_eval_string("{md5hash}"),"sHashValue");

	// Capture the returned image (comes in empty page) All HTML pages start with "\r\n\r\n"
	// Info taken from http://motevich.blogspot.co.uk/2007/10/loadrunner-save-download-file-server.html
	web_reg_save_param("cGravatar",
		"LB=\r\n\r\n",
		"RB=",
		"NotFound=WARNING",
		LAST);
		
	//Make call to Gravatar with hash value
	web_url("Gravatar API", 
		//"URL=http://www.gravatar.com/avatar/8fbefc8e2f5503d56d1c28b3eb4361cd", 
		"URL=http://www.gravatar.com/avatar/{sHashValue}.png?s=200&d=404",  //Captures 200px avatar, 404 if not found
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=", 
		LAST);

	//Did we get a 200 or a 404?
	iHttpRetCode = web_get_int_property(HTTP_INFO_RETURN_CODE);
	lr_output_message("HTTP return code was :[%d]", iHttpRetCode);
	
	if (iHttpRetCode != 200)
	    {
			//If Return code was not = 200, no image was found, simply log this fact
	    	lr_output_message("HTTP return code was %d, no gravatar found for %s", iHttpRetCode, lr_eval_string("{pEmailAddress}"));
	    	lr_log_message( "Gravatar not found for [%s]", lr_eval_string( "{pEmailAddress}" ) ); 
	    }
	
	else
		{
			//If HTTP return code was 200, save contents of cGravatar (the Gravatar image)
			//First, calculate length of buffer, info taken from http://motevich.blogspot.co.uk/2007/10/loadrunner-save-download-file-server.html			
			lr_eval_string_ext ("{cGravatar}", strlen("{cGravatar}") /* = 14*/, &chBufferSize, &ulGravatarLength, 0, 0,-1);
	
			//Write out parameter length for info
			lr_output_message("Parameter iLength = %i",ulGravatarLength);

			//Build file name to hold Gravatar
			sprintf(chDestFile,
			"C:\\temp\\%s.png",
			lr_eval_string("{pEmailAddress}"));
	
    		WriteDataToFile(chDestFile, chBufferSize, ulGravatarLength);
    		
    		//Write information to log
    		lr_log_message( "Gravatar found for [%s], Hash value was [%s] saved as %s", 
    		               lr_eval_string("{pEmailAddress}"), 
    		               lr_eval_string("{md5hash}"),
    		               chDestFile );
		}
	
	return 0;
}
