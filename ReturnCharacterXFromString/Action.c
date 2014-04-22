// This script uses pointers to return character X from a string.
// It is broadbly similay from the SplitStringIntoPairs function but 
// returns one character at a time.


Action()
{
	char *chTemp = "StringToSplit";
	char *chX[100][1];
    int iX;

    // Set some data
	lr_output_message("String: %s", chTemp);

	for (iX=0; iX<strlen(chTemp); iX++) 
	{
		sprintf(chX,"%c",chTemp[iX]);
		lr_output_message("Char at %d = %s", iX, chX);   
	}
	
	return 0;
}
