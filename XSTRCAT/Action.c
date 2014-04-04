// I took this from the LoadTester.com website.
// Originally written by Brian Wilson - TechSouth LLC (not the Brian Wilson from the Beach Boys - I think... Wink).

// Apparently its more efficient that the standard strcat function.

// I'm not 100% sure why this is more efficient; perhaps it's something to do with the fact that the strcat function 
// appends a "copy" of the source string to the destination string. The terminating null character in destination is then 
// overwritten by the first character of the source string, and a new null-character is appended at the end of the new string 
// formed by the concatenation of both in destination. i.e. a copy, an append and then writing a new character (3 steps).

// This function seems to do all it's work "up front" before writing a single new string.


Action()
{

	char str[80]; 
	strcpy (str,"strings "); 
	xstrcat (str,"have been "); 
	xstrcat (str,"concatenated."); 

	lr_output_message("result: %s",str); 


	return 0;
}
