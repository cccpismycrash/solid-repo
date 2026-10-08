#include <string>
#include <iostream>

class ILogger {
    public:
    virtual void Log(std::string logText) = 0;
}

class Logger: ILogger public {
    public:
    void Log(std::string logText) {
        std::cout << "Logger: " << logText;
    }
};

class DatabaseLogger: ILogger public {
    public:
    void Log(std::string logText) {
        std::cout << "DatabaseLogger: " << logText;
    }
};

class SmtpMailer {
    private:
    Logger* logger; public:
    SmtpMailer() {
        logger = new Logger();
    }
    
    void SendMessage(string message) {
        // отправка сообщения
    }
};

int main(int argc, char* argv[]) {

}