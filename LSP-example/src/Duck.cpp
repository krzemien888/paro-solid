#include <iostream>

#include <Duck.hpp>

using namespace std;

void Duck::quack()
{
	cout << "quack" << endl;
}
void Duck::fly()
{
	distanceFromHome += 100;
}
int Duck::getDistance()
{
	return distanceFromHome;
}
