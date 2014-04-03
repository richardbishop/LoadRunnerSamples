Action()
{

	//Final version of WriteToFile function
	//This version uses a path statement (note the double-backslashes) and the name of an executable of function 
	
	 // Note dependency on external OpenSSL library
	 // C:\temp needs two files, one called EncryptThis.txt and one called SharedSecret.txt
	WriteToFile("C:\\OpenSSL-Win32\\bin\\openssl.exe"," dgst -sha1 -hmac C:\\temp\\EncryptThis.txt C:\\temp\\SharedSecret.txt");

	ReadFromFile();

	return 0;
}
