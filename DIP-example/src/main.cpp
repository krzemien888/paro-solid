#include "Logger.hpp"

int main()
{
    SqlAdress adress("127.0.0.1");
    SqlDataSaver sqlSaver(adress);
    Logger logger(sqlSaver);
    logger.log("ciekawy log 1");
    logger.log("ciekawy log 2");
    logger.log("ciekawy log 3");
 }
