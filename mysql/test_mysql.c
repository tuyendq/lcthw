/**
* Reference: https://www.acmesystems.it/mysqlclient
* Compile: cc -o test_mysql test_mysql.c `mysql_config --cflags --libs` 
* Usage: ./test_mysql server username password dbname
*/

#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	MYSQL *conn;
	MYSQL_RES *result;
	MYSQL_ROW row;
	long int mysql_port = 3306;
	int num_fields;
	int i;
	long int port;
	char *ptr;

	printf("Number of arguments: %d\n", argc);

	if ((argc < 5) || (argc > 6)) {
		printf("\nUsage: %s server user password dbname port\n", argv[0]);
		printf("[port] is optional if other than default 3306.");
		exit(EXIT_FAILURE);
	}

	if (argv[5]) {
		if ((port = strtol(argv[5], &ptr, 10)) != 0) {
			if ((port > 0) && (port < 65536)) {
				mysql_port = port;
				printf("Connect to port number: %ld\n", mysql_port);
			}
		}
	}

	if ((conn = mysql_init(NULL)) == NULL) {
		fprintf(stderr, "Failed on mysql_init()\n");
		exit(EXIT_FAILURE);
	}

	if (mysql_real_connect(conn, argv[1], argv[2], argv[3], argv[4], mysql_port, NULL, 0) == NULL) {
		fprintf(stderr, "Failed to connect to database: Error: %s\n", mysql_error(conn));
		exit(EXIT_FAILURE);
	}

	if (mysql_query(conn, "SELECT VERSION()") != 0) {
		fprintf(stderr, "Failed on SQL Query: %s\n", mysql_error(conn));
		exit(EXIT_FAILURE);
	}

	result = mysql_store_result(conn);

	num_fields = mysql_num_fields(result);

	while ( (row = mysql_fetch_row(result)) ) {
		for(i = 0; i < num_fields; i++) {
			printf("%s ", row[i] ? row[i] : "NULL");
		}
		printf("\n");
	}

	mysql_free_result(result);
	mysql_close(conn);
	exit(EXIT_SUCCESS);

}
