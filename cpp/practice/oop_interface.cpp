#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class LoggerI
{
public:
    virtual void writeLog(string* message) = 0;
};


class FileLogger: public LoggerI {
    public:
    void writeLog(string* message) override {
        cout << "Write log to file" << endl;
    }
};

class DatabaseLogger: public LoggerI
{
public:
    void writeLog(string* messages) override {
        cout << "Logged to database logger" << endl;
    }
};

class NetworkLogger: public LoggerI
{
public:
    void writeLog(string* messages) override {
        cout << "Logged to Network logger" << endl;
    }
};

class Logger {
    LoggerI* loggingStrategy;
public:
    Logger(LoggerI* strategy): loggingStrategy(strategy) {};
    
    void log(string message) {
        loggingStrategy->writeLog(&message);
    }

};

int main() {
    FileLogger fileLog;
    DatabaseLogger databaseLog;
    NetworkLogger networkLog;

    Logger fileLoggerClient(&fileLog);
    fileLoggerClient.log("Hello log to log file");

    Logger databaseLoggerClient(&databaseLog);
    databaseLoggerClient.log("Hello log to log database");

    Logger networkLoggerClient(&networkLog);
    networkLoggerClient.log("Hello log to log network");

    return 0;
}