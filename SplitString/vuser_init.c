//**************************************************
// created by Mark Sibley
// modified by Richard Bishop
// Saves left and right parts of a string into two separate strings
// Similar to Excel LEFT() and RIGHT() functions
//--------------------------------------------------
int SplitString(char * StringToSplit, int iLeftSplit)
{
   int iSLenA, iSLenB, iLoopLen;
   int iLooper = 0;
   char sStringB[200], sFullString[200], sParam[2000], n, sCharacter[200];

   //--------------------------------------------------
   // This saves the left hand x characters of the account number string
    strncpy(sStringB, StringToSplit, iLeftSplit);
   lr_save_string(lr_eval_string(sStringB),"sLeftString");
   //--------------------------------------------------
   // this calculates the string lengths
   iSLenA = strlen(lr_eval_string(StringToSplit));
   iSLenB = strlen(lr_eval_string("{sLeftString}"));
   iLoopLen = iSLenA - iSLenB;
   //--------------------------------------------------
   // this saves the right hand characters of the account string
   sprintf(sParam,"%s",lr_eval_string(StringToSplit));
   for (iLooper = iSLenB; iLooper < iSLenA; iLooper++)
   {
      sscanf(sParam+iLooper, "%c", &n);
      sprintf(sCharacter,"%c",n);
      strcat(sFullString, sCharacter);
   }
   lr_save_string(lr_eval_string(sFullString),"sRightString");
   //--------------------------------------------------
   // used when debugging this function
   
   lr_output_message("Original string:[%s]",lr_eval_string(StringToSplit));
   lr_output_message("Left hand split:[%s]",lr_eval_string("{sLeftString}"));
   lr_output_message("Right hand split:[%s]",lr_eval_string("{sRightString}"));
      
   //--------------------------------------------------
}
//**************************************************




vuser_init()
{
	return 0;
}
