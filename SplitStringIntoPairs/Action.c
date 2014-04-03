Action()
{
  // Originally developed by John Howley, Trust IV Ltd


  char *b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *c[200][2];
  int i;

  for (i=0;i<strlen(b)/2;i++) 
	  {
	  sprintf(c[i],"%c%c",b[i*2],b[i*2+1]);
	  lr_output_message("c%d = %s",i,c[i]);
	  }


	return 0;
}
