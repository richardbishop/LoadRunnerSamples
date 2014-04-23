LoadRunnerSamples
=================

Sample Loadrunner Scripts used by Richard Bishop, Trust IV Ltd
Many of these scripts include snippets of code from the "great and the good" 
in the performance testing world including, Wilson Mar, Stuart Moncrieff, 
Scott Moore, Mark Sibley, John Howley, Mark Dowd and Floris Kraak.

I keep them here to act as a repository for my own use and to benefit the
wider performance testing community.  

Script details
--------------

ChangeCase              - Case conversion for LoadRunner, converts captured string to UPPER CASE, lower case or Title Case.

ColumnSelector(2)       - Two sample scripts showing selection of data from column 1, column 2 etc during iteration 1, iteration 2 etc.

CheckStringInString     - Example script showing code which checks for one string of text in another, useful for error handling

DateJS 				    - Demonstrates use of an external JavaScript library / complex date functions

DateTime                - A selection of Date/Time functions for LoadRunner - see also Date JS

DNSQuery                - Sample script that demonstrates LoadRunner's ability to performance test DNS servers

ExtractStringFromString - Extract a string from another string using delimiters

LoopExample             - Examples of FOR, WHILE and DO loops in LoadRunner

LRSaveFloat             - Adds lr_save_float functionality to Loadrunner, allowing rounding to x decimal places

LuhnGenerator           - Sample script using Brad Conte's Luhn Credit Card Generator code to generate Luhn-valid CC numbers for testing

PostCodeChecker         - Sample script which checks a country code and postal / zip code against
                          http://api.zippopotam.us/ . Saves lat/long and place names in output.
                          Tested with US and UK post codes, many others supported. 

PadLeadingValues        - Pad a string with leading characters, e.g. pad with leading zeroes e.g. 123 becomes 00000123

QR_Generator			- Sample LoadRunner script which calls Google QR code generator and saves resulting QR code as a local image

RandInt                 - Creates a random number between iMin and iMax, iMax can be greater than 32K Windows limit

ReadWriteExternalFile   - Sample script which writes to and reads from an external file

ReturnCharacterXFromString - Return a single character from a a string

ReverseString           - Script which reverses a LoadRunner string e.g. ABCDEF becomes FEDCBA

SaveGravatar            - Create MD5 hash of parameterised value (email address), check hash value at gravatar.com.
                          If an image is stored for hash value save it as a local file.

SendMail                - Script which demonstrates using BLAT with LoadRunner to send email - used to notify test
                          completion

ShareCalculation        - Sample script showing mathematical calculations with strings rather than integers/floating point numbers

SplitString             - Allows a string to be split into two, creates left and right strings after x characters

SpliStringIntoPairs     - Demonstrates splitting string e.g. ABCDEF into pairs AB CD EF etc.

StringHandling          - Convert LoadRunner data types using C, Integers, Strings, Parameters, Floats etc.

TimeExclusion           - Sample script showing how a script can be deliberately paused to prevent execution at a particular time

XSTRCAT                 - More efficient string concatenation than standard strcat function. Originally from Brian Wilson (Tech South LLC)
