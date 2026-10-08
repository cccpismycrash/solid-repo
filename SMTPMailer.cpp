#include <string>
#include <iostream>

class ILogger {
    public:
    virtual void Log(std::string logText) = 0;
};

class Logger: public ILogger {
    public:
    void Log(std::string logText) {
        std::cout << "Logger: " << logText;
    }
};

class DatabaseLogger: public ILogger {
    public:
    void Log(std::string logText) {
        std::cout << "DatabaseLogger: " << logText;
    }
};

class SmtpMailer {
    private:
    ILogger* _logger; 
    
    public:
    SmtpMailer(ILogger* logger) {
        _logger = logger;
    }
    
    void SendMessage(std::string message) {
        std::cout << "SmtpMailer: " << message << "\n";
        _logger->Log("Message was sent to reciever");
    }
};

int main() {
    int loggerType;
    std::string message;

    std::cout << "Enter message: ";
    std::getline(std::cin, message);

    std::cout <<
        "Choose logger:\n"
        "1 - File logger\n"
        "2 - Database logger\n"
        "> ";

    std::cin >> loggerType;

    if (loggerType == 1) {
        Logger logger;
        SmtpMailer mailer(&logger);
        mailer.SendMessage(message);
    }
    else if (loggerType == 2) {
        DatabaseLogger logger;
        SmtpMailer mailer(&logger);
        mailer.SendMessage(message);
    }
    else {
        std::cout << "Unknown logger\n";
    }
}