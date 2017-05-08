#include <iostream>

class Duck;

using namespace std;

class RubberDuck: public Duck
{
	void fly(){}
	void quack(){cout << "squeeze" << endl;}
};
