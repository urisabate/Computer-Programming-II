#define BUILDING_H

#include <iostream>

class Building
{
protected:
	const char* name;

public:
	//constructor
	Building(const char* n);

	const char *getName() const;
};


