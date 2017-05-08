#pragma once

#include <vector>
#include <Duck.hpp>
#include "LivingDuck.hpp"

using namespace std;

class Breeder
{
public:
	Breeder(vector<Duck*> givenDucks, vector<LivingDuck*> givenLivingDucks):ducks(givenDucks), livingDucks(givenLivingDucks){};
	void trainTheDucks();
	void checkDistances();
	void hearTheDucks();
private:
	vector<Duck*> ducks;
	vector<LivingDuck*> livingDucks;
};
