#pragma once
#include <iostream>
#include <string>

using namespace std;

class ItemBase
{
private :

	int Weight;
	int Price; 
	int ItemType;
	string Description;
	string Name;

public:

	ItemBase();

	ItemBase(int ItemType);

	ItemBase(
		int ItemType,
		int Weight,
		int Price,
		string Description,
		string Name
		);

	virtual ~ItemBase();
	virtual ItemBase* clone()const = 0;
};

