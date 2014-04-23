// *******************************************************************************
//
// This script was created in LoadRunner 12.0
//
// ***********************************************************************************
//
// Application           :           chart.googleapis.com QR code generator
// Script                :           QR_Generator
// BP provided by    	 :           Wilson Mar
// Comments              :           Script which demonstrates correlation, use of external 
//									 parameters, writing data to external file with relevant name. 
// Function				 :			 Generate and save QR code
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
unsigned long ulQRcodeLength;	//QR code file size in bytes
char *chBufferSize;				//Buffer to store Gravatars returned from website
char chMD5_digest[16] = {0}; 	//Char to hold 16 characters 2 char. at a time for 32.
int  i = 0; 					//Used in loops
char chDestFile [64];			//Name of destination file
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


//
	//https://developers.google.com/chart/infographics/docs/qr_codes
	//https://chart.googleapis.com/chart?cht=qr&chs=200x200&chl={pQRData}&choe=UTF-8


Action()
{
	//Declare size of largest parameter to be captured, may need to be increased for very large gravatars
	//200px x 200px is approx 10K
	web_set_max_html_param_len("20000");
	
	// Capture the returned image (comes in empty page) All HTML pages start with "\r\n\r\n"
	// Info taken from http://motevich.blogspot.co.uk/2007/10/loadrunner-save-download-file-server.html
	web_reg_save_param("cQRcode",
		"LB=\r\n\r\n",
		"RB=",
		"NotFound=WARNING",
		LAST);
		
	//Make call to Google API with data to convert to QR code
	web_url("Google QR code API", 
		"URL=https://chart.googleapis.com/chart?cht=qr&chs=200x200&chl={pQRData}&choe=UTF-8",  
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
	    	lr_output_message("HTTP return code was %d, no image returned", iHttpRetCode);
	    	lr_log_message( "Image not produced for for [%s]", lr_eval_string( "{pQRData}" ) ); 
	    }
	
	else
		{
			//If HTTP return code was 200, save contents of cQRcode (the Gravatar image)
			//First, calculate length of buffer, info taken from http://motevich.blogspot.co.uk/2007/10/loadrunner-save-download-file-server.html			
			lr_eval_string_ext ("{cQRcode}", strlen("{cQRcode}") /* = 14*/, &chBufferSize, &ulQRcodeLength, 0, 0,-1);
	
			//Write out parameter length for info
			lr_output_message("Parameter iLength = %i",ulQRcodeLength);

			//Build file name to hold Gravatar
			sprintf(chDestFile,
			"C:\\temp\\QR_code_%s.png",
			lr_eval_string("{pIterationNumber}"));
	
    		WriteDataToFile(chDestFile, chBufferSize, ulQRcodeLength);
    		
    		//Write information to log
    		lr_log_message( "QR code created for [%s], saved as %s", 
    		               lr_eval_string("{pQRData}"), 
    		               chDestFile );
		}
	
	return 0;
}


	
