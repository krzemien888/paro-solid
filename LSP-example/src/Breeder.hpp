#pragma once

#include <vector>
#include <Duck.hpp>

using namespace std;

class Breeder
{
public:
	Breeder(vector<Duck*> givenDucks):ducks(givenDucks){}

	void trainTheDucks();
	void checkDistances();
private:
	vector<Duck*> ducks;
};
