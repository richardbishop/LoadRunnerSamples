void lr_save_float(const float value, const char *param, const int decimals)
// ----------------------------------------------------------------------------
// Saves a float into a lr variable, much like lr_save_int() saves an integer
//
// Parameters:
//   value       Float value to store
//   param       Loadrunner variable name
//   decimals    Number of decimals in the result string
//
// Returns:
//   N/A
//
// Example:
//   lr_save_float(123.456, "myVar", 2);  // myVar = 123.46 (includes rounding)
//
// ----------------------------------------------------------------------------
{
  char buf[64];                              // if more>63 digits -> your problem <span class="wp-smiley emoji emoji-smile" title=":)">:)</span>
  char formatbuf[16];                        // 16 chars should be adequate
 
  sprintf( formatbuf, "%%.%df", decimals);   // Build the "%?.f" format string
  sprintf( buf, formatbuf, value);           // sprintf the value
  lr_save_string( buf, param);               // store in variable
}


vuser_init()
{
	return 0;
}
