/*
*****************************************************************************
*																			*
* File name 		:TimeExclusion     										*
*																			*
* Descripton 		:Prevents script from running between certain times    	*
*																			*
* Script Author 	:Richard Bishop - www.bish.co.uk    					*
*																			*
* Code Source		:Richard Bishop - www.bish.co.uk     					*
*																			*
* Date 				:September 2009 										*
*																			*
* Data Required 	:None													*
*																			*
* Further Info	 	:											 			*
*																			*
* Change History	:														*
*																			*
* Date 				Name 				Reason								*
* 12/09/2009		Richard Bishop		Created script						*
*****************************************************************************
*/

//Function - Prevent a script from running between two specified times. 

//Purpose - Some scripts cannot be run between certain times, this is often the 
//case when running long duration tests or data-seeding overnight. In these cases
//it may be useful to specify times when you don't want a script to run. This
//code helps to do this. 

//Use the CheckExclusionTime(); function in your script before the overall script transaction marker. 
//The script will pause (using think time) until the exclusion period ends, after which time it will start and run  normally.

//e.g. If you don't want the script to run between Tuesday at 14:00 and Wednesday at 16:00 use the code in the comments BOX
//Monday  = Day 1, Tuesday = Day 2, Wednesday = Day 3, Thursday = Day 4, Friday = Day 5, Saturday = Day 6, Sunday = Day 7
/*****************************************************************************************************************
iExcStaDay = 2;
iExcStaHou = 14;
iExcStaMin = 00;

iExcEndDay = 3;
iExcEndHou = 16;
iExcEndMin = 00;
******************************************************************************************************************/

//Exclusion Start (Day, Hour & Minute)
iExcStaDay = 5;
iExcStaHou = 13;
iExcStaMin = 30;

//Exclusion End (Day, Hour & Minute)
iExcEndDay = 5;
iExcEndHou = 13;
iExcEndMin = 35;

Action()
{
	CheckExclusionTime();

	//Put the rest of the script here.......

	return 0;
}
