#include <Breeder.hpp>
#include <Duck.hpp>
#include <RubberDuck.hpp>

#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    vector<Duck*> ducks = {new Duck(),new Duck(),new RubberDuck(),new Duck()};

    Breeder breeder(ducks);

    breeder.checkDistances();
    breeder.trainTheDucks();
    breeder.checkDistances();
}
