/*********************************
 * @log.h file is the header     *
 * file contain the definitation *
 * of the required methods and   *
 * fileds of the log class which *
 * involve about the creating of *
 * a log function and recording  *
 * mechanizme and process of log.*
 * ******************************/

#ifndef _LOG_H_
#define _LOG_H_

// ! include of the required sytem hearders files
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

// ! defeniation of the ANIS code for colors
#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define RESET_COLOR "\033[0m"
#define GREEN "\033[1;32m"

//! the enumaration of the log severity
enum LogLevel
{
  TRACE,
  DEBUG,
  INFO,
  WARNING,
  ERROR,
  CRITICAL,
  EMERGENCY,
  FATAL
};

//! Define the log severity short names
#define TRACE LogLevel::TRACE
#define DEBUG LogLevel::DEBUG
#define INFO LogLevel::INFO
#define WARNING LogLevel::WARNING
#define ERROR LogLevel::ERROR
#define CRITICAL LogLevel::CRITICAL
#define EMERGENCY LogLevel::EMERGENCY
#define FATAL LogLevel::FATAL

//! Define a GMIVLS namespace
namespace GMIVLS
{

  //! Define the logger class object
  class Logger
  {
   public:
    //! Define logger class default constructor
    Logger();
    //! Define logger class default destructor
    ~Logger();
    //! Define a method to set the log level
    void setLogLevel(LogLevel);
    //! Define the log method, that accept log level and string message
    void log(LogLevel, const std::string&);

//! this file include the required definitation of the operators overloads
#include "operator.tpp"

   private:
    std::ofstream outputFile;  //! define output file stream filed
    LogLevel logLevel;         //! define the log level filed
    std::ostringstream oss;    //! define output string stream file
    //! this method is private used to open the log.txt file for logging record.
    void open_file();
    //! this method is private used to close the log.txt file.
    void close_file();
    //! this method is used to write the log message to file and console
    void writeToLog(const std::string&);
    //! this method used to simple get the log level
    std::string getLogLevelString(LogLevel);
  };

}  // namespace GMIVLS
#endif  // _LOG_H_
