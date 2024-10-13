//10_写一个类
#include <iostream>
#include <string>
using namespace std;

class Log {
private:
    int m_Loglevel = LogLevelInfo;
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

    void SetLevel(int level) {
        m_Loglevel = level;
    }

    void Error(string message) {
        if (m_Loglevel >= LogLevelError)
            cout << "[ERROR]: " << message << endl;
    }
    void Warn(string message) {
        if (m_Loglevel >= LogLevelWarning)
            cout << "[WARNING]: " << message << endl;
    }
    void Info(string message) {
        if (m_Loglevel >= LogLevelInfo)
            cout << "[INFO]: " << message << endl;
    }
    
};

int main() {
    Log log;
    string LogLevel;
    do {
        cout << "请输入日志级别(ERROR/WARNING/INFO)：";
        cin >> LogLevel;
        if (LogLevel == "ERROR"){
            log.SetLevel(log.LogLevelError);
        } else if (LogLevel == "WARNING"){
            log.SetLevel(log.LogLevelWarning);
        } else if (LogLevel == "INFO"){
            log.SetLevel(log.LogLevelInfo);
        } else {
            cout << "输入有误，请重新输入！" << endl;
        }
    } while (LogLevel != "ERROR" && LogLevel != "WARNING" && LogLevel != "INFO");
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");

    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}