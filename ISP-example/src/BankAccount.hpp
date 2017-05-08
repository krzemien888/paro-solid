#pragma once

#include "BankAccountClientView.hpp"
#include "BalanceDecrementer.hpp"
#include "BalanceIncrementer.hpp"



class BankAccount
	: public BankAccountClientView
	, public BalanceDecrementer
	, public BalanceIncrementer
{
public:
    void decrementBalance(unsigned int);
    void incrementBalance(unsigned int);
    int getBalance() const;

private:
    int balance{};
};
