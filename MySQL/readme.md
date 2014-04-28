My SQL Sample scripts
=====================

Sample LoadRunner Scripts used by Richard Bishop, Trust IV Ltd to demonstrate 
the use of MySQL as an external data source or destination for LoadRunner scripts.

MySQL has numerous advantages over, for example VTS, including the ability
to perform complex queries of test data extremely quickly.

Tests have shown that over 2,000 writes/sec can be made into MySQL showing
that is can be readily used for detailed logging during performance tests.

Instructions to which describe the creation of s suitable MySQL database on the 
localhost for test purposes are in https://github.com/richardbishop/LoadRunnerLibraries/MySQL 


Script details
--------------

ReadFromMySQL           - Script which demonstrates the use of MySQL as a source of data.

WritetoMySQL            - Script which demonstrates the use of MySQL as a destination for data.

