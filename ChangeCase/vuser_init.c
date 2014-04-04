#include "web_api.h"

//**************************************************
// A Mark Sibley function for converting test to all upper case
//--------------------------------------------------
int ConvertToUpper(char * sInput, char * sNew)
{
	sInput = (char *)strupr(sInput);
	lr_save_string(sInput,sNew);
}
//**************************************************


//**************************************************
// A Mark Sibley function for converting test to all lower case
//--------------------------------------------------
int ConvertToLower(char * sInput, char * sNew)
{
	sInput = (char *)strlwr(sInput);
	lr_save_string(sInput,sNew);
}
//**************************************************



//**************************************************
// A Mark Sibley function for converting test to all lower case
//--------------------------------------------------
int ConvertToTitle(char * sInput, char * sNew)
{
	int i = 0, s = 0, l = 0;
	char buf1[50];
	char buf2[2];
	char n;

	// Copy a single character into the address of [n]
	strncpy(&n,sInput+i,1);

	// Copy the single character into buf2
	sprintf(buf2,"%c",n);

	// Convert the contents of buf2 to uppercase
	strupr(buf2);

	// Overwrite the contents of buf1 with buf2
	strcpy(buf1,buf2);

	i++;
	while(i < strlen(sInput))
	{
		// Overwrite buf2 with one character
		strncpy(&n,sInput+i,1);
		sprintf(buf2,"%c",n);

		// If the previous character was a space then make the current character upper case
		if(s == 1){
			strupr(buf2);
			strcat(buf1,buf2);
			s = 0;
		}
		// Otherwise convert to lower case and concatenate the current character into the string buf1
		else{
			strlwr(buf2);
			strcat(buf1,buf2);
		}

		// If the current character is a space set the value of [s] to [1] so that the next character gets capitalised
		if(strcmp(" ",buf2)==0)
		{
			s = 1;
		}
		i++;
	}
	lr_save_string(buf1,sNew);
}
//**************************************************


vuser_init()
{
	return 0;
}
