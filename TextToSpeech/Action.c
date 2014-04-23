// *******************************************************************************
//
// This script was created in LoadRunner 12.0
//
// ***********************************************************************************
//
// Application           :           Google TTS engine
// Script                :           TextToSpeech
// BP provided by    	 :           Wilson Mar
// Comments              :           Script which demonstrates correlation, use of external 
//									 parameters, web_convert_param function and
//									 writing data to external file with relevant name.
// Function				 :			 TTS conversion, saves speech as MP3 file
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
unsigned long ulMP3FileLength;	//MP3 file size in bytes
char *chBufferSize;				//Buffer to store MP3 files returned from website
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


Action()
{
	//Declare size of largest parameter to be captured, may need to be increased for very large sound files
	web_set_max_html_param_len("200000");
	
	// Capture the returned image (comes in empty page) All HTML pages start with "\r\n\r\n"
	// Info taken from http://motevich.blogspot.co.uk/2007/10/loadrunner-save-download-file-server.html
	web_reg_save_param("cSpeechFile",
		"LB=\r\n\r\n",
		"RB=",
		"NotFound=WARNING",
		LAST);
	
	//Needs to be URL encoded
	web_convert_param("pTextToSpeechData", 
	                  "SourceEncoding=PLAIN",
	                  "TargetEncoding=URL", 
	                  LAST);
	
	lr_output_message("%s", lr_eval_string("{pTextToSpeechData}"));
	
	//Make call to Google API with data to convert to speech
	web_url("Google TTS API", 
		"URL=http://translate.google.com/translate_tts?tl=en&q={pTextToSpeechData}",  
		"Resource=1", 
		"RecContentType=audio/mpeg", 
		"Referer=", 
		LAST);

	//Did we get a 200 or a 404?
	iHttpRetCode = web_get_int_property(HTTP_INFO_RETURN_CODE);
	lr_output_message("HTTP return code was :[%d]", iHttpRetCode);
	
	if (iHttpRetCode != 200)
	    {
			//If Return code was not = 200, no sound file was returned, simply log this fact
	    	lr_output_message("HTTP return code was %d, no image returned", iHttpRetCode);
	    	
	    	web_convert_param("pTextToSpeechData", 
	                  "SourceEncoding=URL",
	                  "TargetEncoding=PLAIN", 
	                  LAST);
	    	
	    	lr_log_message( "Sound file not produced for for [%s]", lr_eval_string( "{pTextToSpeechData}" ) ); 
	    }
	
	else
		{
			//If HTTP return code was 200, save contents of MP3 file
			//First, calculate length of buffer, info taken from http://motevich.blogspot.co.uk/2007/10/loadrunner-save-download-file-server.html			
			lr_eval_string_ext ("{cSpeechFile}", strlen("{cSpeechFile}") /* = 14*/, &chBufferSize, &ulMP3FileLength, 0, 0,-1);
	
			//Write out parameter length for info
			lr_output_message("Parameter iLength = %i",ulMP3FileLength);

			//Build file name to hold MP3
			sprintf(chDestFile,
			"C:\\temp\\MP3_%s.mp3",
			lr_eval_string("{pTextToSpeechData}"));
	
    		WriteDataToFile(chDestFile, chBufferSize, ulMP3FileLength);
    		
    		//Write information to log
    		lr_log_message( "MP3 file created for [%s], saved as %s", 
    		               lr_eval_string("{pTextToSpeechData}"), 
    		               chDestFile );
		}
	
	return 0;
}


	
