int fRandInt( int iMIN, int iMAX )
{
	return (iMIN + (int) ((iMAX-iMIN+1) * (((float)rand())/(float)32768)));
}

//The Loadrunner rand() function cannot return a random number greater than 32768.  
//This is due to a limitation of the windows operating system.
//This function returns a random number with a scope of iMin to iMax rather than windows standard maximum of 32767.
//Original code by Mark Dowd, optimisation my John Howley who obtained a 25% performance improvement.

Action()
{

	int iMIN, iMAX, i, iRand;

	for (i=0;i<10;i++)
	{
		iRand = fRandInt (1,1000);
		lr_output_message("Random number is : %d",iRand); 
	}

	return 0;
}
