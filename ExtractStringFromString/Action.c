/*
*******************************************************************************
*																			  *
* File name 		:ExtractStringFromString 								  *
*																			  *
* Descripton 		:Extract a string from another string based on delimiters *
*																			  *
* Script Author 	:Richard Bishop          								  *
*																			  *
* Code Source		:Mark Sibley     										  *
*																			  *
* Date 				:April 2007												  *
*																			  *
* Data Required 	:None                  									  *
*																			  *
* Further Info	 	:														  *
*																			  *
* Change History	:														  *
*																			  *
* Date 				Name 				Reason								  *
* 17/04/2007		Richard Bishop		Created script						  *
*******************************************************************************
*/

// Notes
//
// When testing it is sometimes difficult to define suitable delimiters which allow you
// to correlate information for use later in a script. For example I once tested an application
// where code similar to that below was returned. 
// In this example I captured a large amount of returned data.
//
// Sample of data below...
//
//  <b>Current Account</b>
//   </span></td>
//   <td><span class="SubHeading">Richard Bishop</span></td>
//   <td><span class="SRLink">
//    <a href='javaScript:ShowDetailsPage("HEX6A31013657A217B4A2254993C29633893A920BAE3C9400DB", "HEX

// In this case the large hexadecimal number identified the account. 
// Due to the large number of quotation marks prior to the string that I was interested in and 
// the fact that multiple strings were returned by the web page, it was difficult to capture the string 
// directly. Instead I decided to capture the whole of the above text and then extract the 
// HEX6A31013657A217B4A2254993C29633893A920BAE3C9400DB string from the captured text.
//
// Using the C function strtok it is possible to extract data from a string based on delimiters. 
// In this case I needed the fifth value in the string that is separated from the rest of the returned data 
// by the ["] delimiter. I used a loop function to repeatedly search through the returned data until it 
// reached the fifth quotation mark.

Action()
{
long token;

// Declare the delimiter that you weant to use to chop up the large captured string (in this case we use the ["] quotation mark).
char separator[] = "\"";


char hdnAccountID[500];
int i;
//	Captures all account details
/*	web_reg_save_param("firstcurrentaccount",
		"LB=<b>Current Account</b>",
		"RB=\", \"HEX",
		"NotFound=EMPTY",
		LAST);
*/

//For this example, use lr_save_string to save {firstcurrentaccount} rather than the above web_reg_save_param function.

	lr_save_string("<b>Current Account</b></span></td><td><span class=\"SubHeading\">Richard Bishop</span></td><td><span class=\"SRLink\"><a href='javaScript:ShowDetailsPage(\"HEX6A31013657A217B4A2254993C29633893A920BAE3C9400DB\", \"HEX","firstcurrentaccount");

//	Example of returned HTML
/*
<b>Current Account</b>
			</span></td>
			<td><span class="SubHeading">Richard Bishop</span></td>
			<td><span class="SRLink">
				<a href='javaScript:ShowDetailsPage("HEX6A31013657A217B4A2254993C29633893A920BAE3C9400DB", "HEX
*/



//	Extract the Account number "HEX6A31013657A217B4A2254993C29633893A920BAE3C9400DB" from "firstcurrentaccount"
	token = strtok( lr_eval_string("{firstcurrentaccount}"), separator );

	if( !token )
	{
		lr_output_message( "No tokens found in source string!" );
		return( -1 );
	}

// 	We know that there are 5 ["] marks before the string that we're looking for in the returned data.
// 	We set the loop value i=5 to loop through the string up to the 5th quotation mark. 
	for(i=1;i<=5;i++)
	{
		token = strtok( NULL, separator );
	}

//	Output "token is HEX6A31013657A217B4A2254993C29633893A920BAE3C9400DB"
	lr_output_message( "token is %s", token );

//	Write "token" to hdnAccountID string
	sprintf	(hdnAccountID, "%s", token);

//	Convert hdnAccountID (Long Integer) to hdnAccountID (string)
	lr_save_string(hdnAccountID, "hdnAccountID");

//	Now hdnAccountID can be used as an "lr_eval_string" by LoadRunner
	lr_output_message( "HdnAccountID is %s", lr_eval_string("{hdnAccountID}"));

	return 0;
}
