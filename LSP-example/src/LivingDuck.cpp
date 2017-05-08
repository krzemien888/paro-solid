#include <iostream>

#include <Duck.hpp>

using namespace std;

void LivingDuck::quack()
{
	cout << "quack" << endl;
}
void LivingDuck::fly()
{
	distanceFromHome += 100;
}
int LivingDuck::getDistance()
{
	return distanceFromHome;
}
