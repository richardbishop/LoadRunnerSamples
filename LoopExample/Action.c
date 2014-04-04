/*
*****************************************************************************
*																			*
* File name 		:LoopExample     										*
*																			*
* Descripton 		:Basic LOOP examples using FOR and WHILE 		  		*
*																			*
* Script Author 	:Richard Bishop, HBOS   								*
*																			*
* Code Source		:Richard Bishop, HBOS  									*
*																			*
* Date 				:April 2007												*
*																			*
* Data Required 	:None													*
*																			*
* Further Info	 	:											 			*
*																			*
* Change History	:														*
*																			*
* Date 				Name 				Reason								*
* 17/04/2007		Richard Bishop		Created script						*
* 12/09/2009		Richard Bishop		Added example of DO LOOP 			*
*****************************************************************************
*/


#include "as_web.h"

int i;

// Set whileloop = 1 for the while loop example to work
int whileloop = 1;

Action()
{
	//Example of a loop using a FOR loop
	for (i=1;i<=10;i++)
		{
		lr_output_message( "FOR Loop number %d", i);
		} 


	//Equivalent example but using a WHILE loop
	//This can be made more complicated by including other conditions e.g. && 
	i=1;
	while ((i <= 10) && (whileloop ==1)) 
		{
		lr_output_message( "WHILE Loop number %d", i);
		i++;
		}


	//Equivalent example but using a WHILE loop
	//This can also be made more complicated by including other conditions e.g. && 
	i=1;
	do {
        lr_output_message( "DO WHILE Loop number %d", i);
		i++;
		} 
	while (i <= 10) ;


return 0; 
}
