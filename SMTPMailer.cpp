class Logger {
    public:
    void Log(string logText) {
        // сохранить лог в файле
    }
};

class DatabaseLogger {
    public:
    void Log(string logText) {
         // сохранить лог в базе данных
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