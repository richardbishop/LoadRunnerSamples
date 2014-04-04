//*******************************************************
// Mark Sibley wrote this function and posted it to the LoadRunner Articles in www.bish.co.uk
// I've attached the sample script here for download.
// 
// This function uses LoadRunner C functions to reverse a string.
// For example "12345" would become "54321".
// Requires the user to supply the text string to be reversed and a name for the new reversed parameter.
//--------------------------------------------------
int Reverse (char* Param, char* PName)
{
 char n, Character[2000], Varname[2000];
 char FullString[2000];
 int i = strlen(Param);
 strcpy(FullString,"");
 strcpy(&n,"");
 while (i >= 0)
  {
  sscanf(Param+i, "%c", &n);
  sprintf (Character,"%c",n);
  strcat(FullString, Character);
  i--;
  }
 lr_save_string(FullString,PName);
}

vuser_init()
{
	return 0;
}
