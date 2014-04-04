int Divider,Len,Fund,FundPence,i,Price1,Price2,Price3,Price,MaxShares,ShareCost,Remainder,RemainderPence;

void ShareCalculation()
{

	/* 	Declare variables
		Variable descriptions
		Fund 			= Amount in ShareSave fund (GBP)(pounds)
		FundPence		= Amount in ShareSave fund (pence)
		MaxShares 		= Number of shares this fund will purchase - this is passed back in URL
		Len				= Length of Decimal portion of share price
		Divider			= Divide Decimal portion of share price by this figure
		i				= Counter for loop transaction
		Price			= Share Price (Price1 + Price3) (pence)
		Price1			= Integer portion of SharePrice
		Price2			= Decimal portion of SharePrice (as an integer)
		Price3			= Decimal portion of SharePrice (as a decimal)
		ShareCost		= The total cost of the maximum number of shares that can be bought (pence)
		Remainder		= The amount left in customer account after share purchase (pence) - this is passed back in URL
		RemainderPence 	= The amount left in customer account (in pence)
	*/

	Divider =1;

	{
	Len = strlen(lr_eval_string("{OptionPriceDec}")) ;
	if (Len<9);
	else
		Len=9;
	Fund=atoi(lr_eval_string("{FundAmount}"));
	FundPence=(Fund*100);
	for (i = 0; i < Len; i++)
		{
		Divider=Divider*10;
		}
	Price1=atoi(lr_eval_string("{OptionPriceInt}"));
	Price2=atoi(lr_eval_string("{OptionPriceDec}"));
	Price3=Price2/Divider;
	Price=(Price1+Price3);
	MaxShares=(FundPence/Price);
	ShareCost=(MaxShares*Price);
	RemainderPence=(FundPence-ShareCost);
	Remainder=RemainderPence/100;
		}

	//Uncomment these if you need to check output
	lr_output_message("Len: %d ", Len);
	lr_output_message("Divider: %d ", Divider);
	lr_output_message("Fund: %d ", Fund);
	lr_output_message("FundPence: %d ", FundPence);
	lr_output_message("Price: %d ", Price);
	lr_output_message("Price1: %d ", Price1);
	lr_output_message("Price2: %d1 ", Price2);
	lr_output_message("Price3: %d ", Price3);
	lr_output_message("MaxShares: %d ", MaxShares);
	lr_output_message("ShareCost: %d ", ShareCost);
	lr_output_message("Remainder: %d ", Remainder);
	lr_output_message("RemainderPence: %d ", RemainderPence);

}



vuser_init()
{
	return 0;
}
