#include "BankClient.hpp"

#include <iostream>

void BankClient::use(BankAccountClientView* viewer)
{
    using namespace std;
    cout << "Hello Client! Your balance is: " << viewer->getBalance() << " gp!\n";
}
