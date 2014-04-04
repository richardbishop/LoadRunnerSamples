Action()
{

	char cCommand[1024];	// char variable to hold the contents of DOS commands 

	sprintf(cCommand, "blat.exe Test.txt -subject \"Test Complete\" -to name@mail.com -server mailserver.domain.com -f username@mailserver.domain.com -iu username -ipw password");

	system(cCommand);

	return 0;
}
