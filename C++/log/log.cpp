#include <iostream>
#include <string>
#include <stdexcept>  // 用于 std::invalid_argument

/**
 * 日志类，用于记录不同级别的日志信息
 */
class Log {
private:
    int m_Loglevel = LogLevelInfo;  // 默认日志级别为 INFO

public:
    // 日志级别常量
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

    // 构造函数，初始化日志级别为 INFO
    Log() : m_Loglevel(LogLevelInfo) {}

    // 设置日志级别
    void SetLevel(int level) {
        m_Loglevel = level;
    }

    // 记录错误日志
    void Error(const std::string& message) {
        if (m_Loglevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    // 记录警告日志
    void Warn(const std::string& message) {
        if (m_Loglevel >= LogLevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    // 记录信息日志
    void Info(const std::string& message) {
        if (m_Loglevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

/**
 * 设置日志级别
 * 
 * @param log 日志对象
 * @param level 日志级别字符串
 */
void setLogLevel(Log& log, const std::string& level) {
    try {
        if (level == "ERROR") {
            log.SetLevel(log.LogLevelError);
        } else if (level == "WARNING") {
            log.SetLevel(log.LogLevelWarning);
        } else if (level == "INFO") {
            log.SetLevel(log.LogLevelInfo);
        } else {
            throw std::invalid_argument("输入有误，请重新输入！");
        }
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

/**
 * 主函数
 * 
 * @param argc 命令行参数数量
 * @param argv 命令行参数数组
 * @return 执行结果字符串
 */
std::string main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "用法: log 消息等级(0=ERROR, 1=WARNING, 2=INFO) \"消息\"" << std::endl;
        return "ERR_INPUT_ERROR";
    }

    std::string LogLevel = argv[1];
    std::string message = argv[2];

    Log log;  // 创建日志对象
    setLogLevel(log, LogLevel);  // 设置日志级别
    if (LogLevel != "ERROR" && LogLevel != "WARNING" && LogLevel != "INFO") {
        std::cout << "用法: log 消息等级(0=ERROR, 1=WARNING, 2=INFO) \"消息\"" << std::endl;
        return "ERR_INPUT_ERROR";
    }

    log.Warn(message);  // 输出警告信息
    log.Error(message);  // 输出错误信息
    log.Info(message);  // 输出普通信息

    return "SUCCESS";
}