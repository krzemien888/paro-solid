#include <UniqueContainer.hpp>

using namespace std;

int main()
{
	UniqueContainer things;

	SomeElement someUnique1(1,2,"someUnique1"),
				someUnique2(3,4,"someUnique2"),
				notUnique(1,2,"someUnique1");
	AnotherElement anotherUnique1("key1","anotherUnique1"),
				   anotherUnique2("key2","antoherUnique2"),
				   anotherNotUnique("key1","anotherUnique1");

	things.add(someUnique1);
	things.add(someUnique2);
	things.add(notUnique);

	things.add(anotherUnique1);
	things.add(anotherUnique2);
	things.add(anotherNotUnique);

}
