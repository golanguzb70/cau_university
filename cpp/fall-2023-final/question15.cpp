#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Interface for logging
class ILogging {
public:
    virtual void logMessage(const string& message) = 0;
    virtual ~ILogging() {}
};

// Implementation for file logging
class FileLogger : public ILogging {
public:
    void logMessage(const string& message) override {
        ofstream file("log.txt");
        file << "Logging to File: " << message << endl;
        file.close(); // For simplicity, you can print to console instead
    }
};

// Implementation for database logging
class DatabaseLogger : public ILogging {
public:
    void logMessage(const string& message) override {
        // Implement database logging logic here
        cout << "Logging to Database: " << message << endl;
    }
};

// Implementation for network logging
class NetworkLogger : public ILogging {
public:
    void logMessage(const string& message) override {
        // Implement network logging logic here
        cout << "Logging to Network: " << message << endl;
    }
};

// Logger class now depends on the ILogging interface
class Logger {
    ILogging* loggingStrategy; // Dependency on interface, not concrete implementation
public:
    Logger(ILogging* strategy) : loggingStrategy(strategy) {}

    void log(const string& message) {
        loggingStrategy->logMessage(message);
    }
};

int main() {
    // Example of using the Logger with different logging methods
    FileLogger fileLogger;
    DatabaseLogger databaseLogger;
    NetworkLogger networkLogger;

    Logger fileLoggerClient(&fileLogger);
    fileLoggerClient.log("System started.");

    Logger databaseLoggerClient(&databaseLogger);
    databaseLoggerClient.log("System started.");

    Logger networkLoggerClient(&networkLogger);
    networkLoggerClient.log("System started.");

    return 0;
}
