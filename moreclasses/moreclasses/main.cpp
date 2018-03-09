#include "Building.h"

using namespace std;

Building::Building(const char*n) 
	: name(n) 
{

}

const char*Building::getName() const 
{
	return name;
}