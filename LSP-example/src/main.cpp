#include <Breeder.hpp>
#include <Duck.hpp>
#include <RubberDuck.hpp>
#include <LivingDuck.hpp>

#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    vector<LivingDuck*> ducks = {new LivingDuck(),new LivingDuck(),new LivingDuck()};
    vector<Duck*> nonLivingDucks = {new RubberDuck(), new RubberDuck()};

    Breeder breeder(nonLivingDucks, ducks);

    breeder.checkDistances();
    breeder.trainTheDucks();
    breeder.checkDistances();
}
