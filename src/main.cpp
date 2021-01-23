#include<iostream>
#include <postgresql/libpq-fe.h>
#include <string>
int main(int argc, char *argv[]){
   PGconn          *conn;
   PGresult        *res;
   int             rec_count;
   int             row;
   int             col;
   // conn = PQconnectdb("dbname=dbhuge host=192.168.1.213 user=sinnud password=Jeffery45!@");
   conn = PQconnectdb("dbname=mydb host=192.168.1.213 user=sinnud password=password port=4512");
   if (PQstatus(conn) == CONNECTION_BAD) {
           puts("We were unable to connect to the database");
           exit(0);
   }
   res = PQexec(conn,
           "select count(*) from wdinfo.movie243");
   if (PQresultStatus(res) != PGRES_TUPLES_OK) {
           puts("We did not get any data!");
           exit(0);
   }
   rec_count = PQntuples(res);
   printf("We received %d records.\n", rec_count);
   puts("==========================");
   for (row=0; row<rec_count; row++) {
           for (col=0; col<1; col++) {
                   printf("%s\t", PQgetvalue(res, row, col));
           }
           puts("");
   }
   puts("==========================");
   PQclear(res);
   PQfinish(conn);
   return 0;
}
/**
 * A simple function that adds.
 *
 * @param a: The initial value
 * @param b: The value to add to `a`
 *
 * @returns The sum of `a` and `b`.
 *
 */
int my_adding_function(int a, int b) {
    return a + b;
    }