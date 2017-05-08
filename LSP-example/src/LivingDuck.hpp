#pragma once
#include "Duck.hpp"

class LivingDuck
	: public Duck
{
public:
	virtual void quack();
	virtual void fly();
	int getDistance();
private:
	int distanceFromHome;
};
