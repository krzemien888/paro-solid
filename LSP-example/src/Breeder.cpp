#include <iostream>

#include <Breeder.hpp>

using namespace std;

void Breeder::trainTheDucks()
{
	for (auto& duck: ducks)
	{
		duck->fly();
	}
}
void Breeder::checkDistances()
{
	for (auto duck: ducks)
	{
		cout << "this duck travelled " << duck->getDistance() << " meters. ";
		duck->quack();
	}
	cout << endl;
}
