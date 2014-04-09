/*
*****************************************************************************
*																			*
* File name 		:dns_query	     										*
*																			*
* Descripton 		:Sample script that performs a DNS query				*
*																			*
* Script Author 	:Richard Bishop, HBOS   								*
*																			*
* Code Source		:Mercury Support Site  									*
*																			*
* Date 				:April 2007												*
*																			*
* Data Required 	:None (embedded in sample script)						*
*																			*
* Further Info	 	:DNS = Domain Name Service					 			*
*					 This virtual user script is designed to test hostname 	*
*					 resolution against DNS servers. If a host address 		*
*					 resolves to multiple addresses, all addresses are 		*
*					 displayed in the output.								*
*																			*
* Change History	:														*
*																			*
* Date 				Name 				Reason								*
* 17/04/2007		Richard Bishop		Created script						*
*****************************************************************************
*/



#include "mic_socket.h"

Actions()
{
	char *results = NULL;
	int   rescnt  = 0;

	lr_save_string("8.8.8.8","DnsServer");	// Set DNS server IP Address - this is Google's DNS
	lr_save_string("www.trustiv.co.uk", "Hostname");	// Set hostname to resolve

	// Perform DNS Query
	// Usage Notes:
	// <DnsServer> - IP Address of a Domain Name Server
	// <Hostname>  - Name of host to resolve IP address for

	results = (char *) ms_dns_query("DnsQuery",
			"URL=dns://<DnsServer>",
			"QueryHost=<Hostname>",
		LAST);

	// List all the results... (if more than one)
	while (*results) {
		rescnt++;
		lr_log_message(
			lr_eval_string("(%d) IP address for <Hostname> is %s"),
			rescnt, 
			results);
		results = (char *) ms_dns_nextresult(results);
	}
	return 0;
}
