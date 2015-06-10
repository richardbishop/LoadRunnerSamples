void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
//		lr_output_message("WebSocket ID = %s connected", connectionID);
//		lr_save_param_regexp (AccumulatedHeadersStr,
//							  AccumulatedHeadersLen,
//							  "RegExp=Sec-WebSocket-Accept: (.+)\\r\\n",
//							  "ResultParam=Accept",
//							  LAST );
//		lr_output_message("Sec-WebSocket-Accept = [%s]",
//						  lr_eval_string("{Accept}"));

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
//		if (isbinary) {
//			lr_output_message("WebSocket ID = %s. [%d] bytes binary message received.", connectionID, length);
//		}
//		else {
//			lr_output_message("WebSocket ID = %s. [%d] bytes text message received.", connectionID, length);
//		}
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
//		lr_output_message("WebSocket ID = %s error occured. Error message = %s", connectionID, message);
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
//		lr_output_message("WebSocket ID = %s closed. CloseCode= %d, CloseReason=%s", connectionID, code, reason);
}

