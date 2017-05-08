#pragma once
#include <string>
#include <memory>
#include "SqlDataSaver.hpp"
#include "Saving.hpp"


class Logger
{
public:
    Logger(Saving saver);
    void log(std::string log);
private:
    std::unique_ptr<Saving> dataSaver;
};



