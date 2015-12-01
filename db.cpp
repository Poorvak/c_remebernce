#include <iostream>
#include <stdlib.h>

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;

int main() {
  cout << endl;
  cout << "mysql select" << endl;
  try {
    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;
    
    driver = get_driver_instance();
    con = driver -> connect("franklyreadprod.ce1zyhcvu8o4.ap-southeast-1.rds.amazonaws.com:3306", "apiuser", "agent47@frankly.me");
    con->setSchema("frankly");
    
    stmt = con->createStatement();
    res = stmt->executeQuery("SELECT id FROM users LIMIT 1");
    while (res->next()) {
      cout << res->getString("id") << endl;
      cout << res->getString(1) << endl;
    }
    delete res;
    delete stmt;
    delete con;
  } catch (sql::SQLException &e) {
    cout << "SQL Exception in" << __File__;
    cout << "(" << __FUNCTION__ << ") on line " »
     << __LINE__ << endl;
    cout << "# ERR: " << e.what();
    cout << " (MySQL error code: " << e.getErrorCode();
    cout << ", SQLState: " << e.getSQLState() << " )" << endl;
  }
  cout << endl;
  return EXIT_SUCCESS;
}
