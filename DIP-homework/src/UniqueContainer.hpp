#include <vector>

#include <SomeElement.hpp>
#include <AnotherElement.hpp>

class UniqueContainer
{
public:
    void add(SomeElement const&);
    void add(AnotherElement const&);
    bool isUnique(SomeElement const&);
    bool isUnique(AnotherElement const&);

    vector<string> container;
};
