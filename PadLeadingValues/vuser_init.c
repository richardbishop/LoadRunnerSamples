/*
Function to pad a string to x characters adding the required character at the start of the string
(Note string length limited by length of the array)

Author: Steven Woodcock, Sopra Group

Inputs:
strCharToPad - The String that requires to be padded out i.e. "123456"
cParamName - The name of the parameter you want the end value to be saved to
iValLength - The length you want the string to be padded out to i.e. 9
cValueToAdd - The character you want to pad the string out with, must be a single character i.e. "0"

Outputs:
Creates a LoadRunner parameter of a name specified in the input 'cParamName'

*/
int PadToX(char* cCharToPad, char* cParamName, int iValLength, char* cValueToAdd){
	char cTemp[1024] = "";
	int iLoop = 0;
	int iMainLoop = 0;
	int iSubLoop = 0;

	for(iMainLoop = 0; iMainLoop < iValLength; iMainLoop++){
		if (iMainLoop == strlen(cCharToPad)) {
			iLoop = iValLength - iMainLoop;
			for (iSubLoop = 0; iSubLoop < iLoop; iSubLoop++) {
				strcat(cTemp, cValueToAdd);
			}
		}
		
	}

	strcat(cTemp, cCharToPad);
	lr_save_string(cTemp, cParamName);
}


vuser_init()
{
	return 0;
}
