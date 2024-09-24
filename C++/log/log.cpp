#include <iostream>
#include <string>
#include <stdexcept>

class Log {
private:
    int m_Loglevel = LogLevelInfo;  // Ĭ����־����Ϊ INFO

public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

    Log() : m_Loglevel(LogLevelInfo) {}

    // ������־����
    void SetLevel(int level) {
        m_Loglevel = level;
    }

    // ��¼������־
    void Error(const std::string& message) {
        if (m_Loglevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    // ��¼������־
    void Warn(const std::string& message) {
        if (m_Loglevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    // ��¼��Ϣ��־
    void Info(const std::string& message) {
        if (m_Loglevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

void setLogLevel(Log& log, const std::string& level) {
    try {
        if (level == "ERROR") {
            log.SetLevel(log.LogLevelError);
        } else if (level == "WARNING") {
            log.SetLevel(log.LogLevelWarning);
        } else if (level == "INFO") {
            log.SetLevel(log.LogLevelInfo);
        } else {
            throw std::invalid_argument("�����������������룡");
        }
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

std::string main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "�÷�: log ��Ϣ�ȼ�(0=ERROR, 1=WARNING, 2=INFO) \"��Ϣ\"" << std::endl;
        return "ERR_INPUT_ERROR";
    }

    std::string LogLevel = argv[1];
    std::string message = argv[2];

    Log log;  // ������־����
    setLogLevel(log, LogLevel);  // ������־����
    if (LogLevel != "ERROR" && LogLevel != "WARNING" && LogLevel != "INFO") {
        std::cout << "�÷�: log ��Ϣ�ȼ�(0=ERROR, 1=WARNING, 2=INFO) \"��Ϣ\"" << std::endl;
        return "ERR_INPUT_ERROR";
    }

    log.Warn(message);  // ���������Ϣ
    log.Error(message);  // ���������Ϣ
    log.Info(message);  // �����ͨ��Ϣ

    return "SUCCESS";
}