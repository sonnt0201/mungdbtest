#include "sqlite3.h"

int main() {
    sqlite3 *db;
    int rc = sqlite3_open("mung.db", &db);


    const char *createTableSQL = "CREATE TABLE IF NOT EXISTS my_table ("
                                 "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                 "esp_id INTEGER NOT NULL,"
                                 "vol VARCHAR NOT NULL,"
                                 "time INTEGER NOT NULL);";

    rc = sqlite3_exec(db, createTableSQL, 0, 0, 0);
}