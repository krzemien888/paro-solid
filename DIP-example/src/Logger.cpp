#include "Logger.hpp"

Logger::Logger(Saving saver)
{
    dataSaver.reset(new Saving(saver));
}

void Logger::log(std::string log)
{
    dataSaver->saveData(log);
}


