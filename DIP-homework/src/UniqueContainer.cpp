#include <iostream>
#include <string>
#include <sstream>
#include <UniqueContainer.hpp>
#include <algorithm>

using namespace std;

namespace
{
string intToString( const int n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}
}


void UniqueContainer::add(SomeElement const& elem)
{
	if (isUnique(elem))
	{
		container.push_back(intToString(elem.x)+intToString(elem.y)+elem.name);
		cout << "added some element \"" << elem.name << "\"" << endl;
	}
}

void UniqueContainer::add(AnotherElement const& elem)
{
	if (isUnique(elem))
	{
		container.push_back(elem.key+elem.name);
		cout << "added another element \"" << elem.name << "\"" << endl;
	}
}

bool UniqueContainer::isUnique(SomeElement const& elem)
{
	cout << "some element \"" << elem.name << "\"";
	if (find(container.begin(), container.end(), intToString(elem.x)+intToString(elem.y)+elem.name) == container.end())
	{
		cout << "is unique, so ";
		return true;
	}
	cout << "is not unique" << endl;
	return false;
}
bool UniqueContainer::isUnique(AnotherElement const& elem)
{
	cout << "some element \"" << elem.name << "\"";
	if (find(container.begin(), container.end(), elem.key+elem.name) == container.end())
	{
		cout << "is unique so ";
		return true;
	}
	cout << "is not unique" << endl;
	return false;
}
