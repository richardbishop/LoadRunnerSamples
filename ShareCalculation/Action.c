//
//*****************************************************************************
//*																			*
//* File name 		:ShareCalculation 										*
//*																			*
//* Descripton 		:Calculates the number of shares that can be purchased	*
//*					 with amount of money, suitable for sharedealing        *
//*					 scripts 												*
//*																			*
//*	Script Author 	:Richard Bishop, HBOS   								*
//*																			*
//* Code Source		:Richard Bishop, HBOS   								*
//*																			*
//* Date 			:April 2007												*
//*																			*
//* Data Required 	:None 													*
//*																			*
//* Further Info	 :														*
//*																			*
//* Change History	:														*
//*																			*
//* Date 				Name 				Reason							*
//* 17/04/2007		Richard Bishop		Created script						*
//*****************************************************************************
//*

Action()
{

//	SHARECALCULATION FUNCTION
//	~~~~~~~~~~~~~~~~~~~~~~~~~
//
//
// 	
//	Allows you to perform a calculation using a decimal number such as 484.05253284
//	where it is not possible to capture that number as a single value.
//	In this case 484 and 05253284 are captured by another function (the '.' is the delimiter !)
//
//	In the example below, the number of shares worth 484.05253284p that can be purchased with a fund of £1380 is returned.
//

	lr_save_string("1380", "FundAmount");
	lr_save_string("484", "OptionPriceInt");
	lr_save_string("05253284", "OptionPriceDec");
    
	ShareCalculation();

	return 0;
}
