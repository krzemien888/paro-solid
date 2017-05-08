#pragma once

class Duck
{
public:
	virtual void quack();
	virtual void fly();
	int getDistance();
private:
	int distanceFromHome;
};
