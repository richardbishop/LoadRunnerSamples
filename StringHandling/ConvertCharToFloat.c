//Taken from a LinkedIn discussion started by Ron Turrentine
//Title: Vugen 12:01: Converting a char to a float


extern double atof();
float uc;
char *trimmed;

//Trims leading whitespace from char
char *trimdupstr(char *str)
{
size_t len, src,dst;
char *nc;

if (!str) return NULL;
len = strlen (str);
nc = (char *)malloc(len+1);

for (src=dst=0; str[src]; dst += len) {
len = strspn(str+src, "\t \r\n" );
src += len;
len = strcspn(str+src, "\t \r\n" );
memcpy (nc+dst, str+src, len);
src += len;
}
nc[dst] = 0;
return nc;
}

ConvertCharToFloat()
{
	//Saves a string including leading whitespace
	lr_save_string(" 92.75", "Input_variable");
	lr_output_message("Input_variable = [%s]", lr_eval_string( "{Input_variable}" ));

	//Trims the leading whitespace
	trimmed = trimdupstr(lr_eval_string("{Input_variable}"));
	lr_output_message("Trimmed Input_variable = [%s]", trimmed);

	//Converts the trimmed char value to a float
	uc = atof(trimmed);
	lr_output_message("Input_variable as a float = [%f]", uc);
	
	return 0;
}
