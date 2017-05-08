#include <iostream>

#include <Breeder.hpp>

using namespace std;

void Breeder::trainTheDucks()
{
	for (auto& duck: livingDucks)
	{
		duck->fly();
	}
}
void Breeder::checkDistances()
{
	for (auto duck: livingDucks)
	{
		cout << "this duck travelled " << duck->getDistance() << " meters. ";
		duck->quack();
	}
	cout << endl;
}

void Breeder::hearTheDucks()
{
	for(auto& duck: ducks)
		duck->quack();

	for(auto& duck: livingDucks)
		duck->quack();
}
