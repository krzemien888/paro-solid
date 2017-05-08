#include <iostream>
#include "Duck.hpp"

using namespace std;

class RubberDuck: public Duck
{
	void quack(){cout << "squeeze" << endl;}
};
