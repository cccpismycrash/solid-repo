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

int main(int argc, char* argv[]) {

}