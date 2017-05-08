#pragma once

#include "BalanceDecrementer.hpp"

class OutgoingPayment
{
public:
    OutgoingPayment(unsigned int value): value(value) { }
    void apply(BalanceDecrementer*) const;

private:
    int value;
};
