#pragma once
#include <iostream>
#include "ItemBase.h"

class Inventory
{
private :

	int cap;
	int nrOfItems;
	void expand();
	void initialize(const int from = 0);
	ItemBase** itemArr;

public : 
	
	unique_ptr<ItemBase> Items;
	unique_ptr<ItemBase> Equipment;

	Inventory();
	~Inventory();
	Inventory(const Inventory& obj);

	inline int size()const { return this->nrOfItems; };
	
	void Create(int slots);
	void Add(const ItemBase& item);
	void Remove(int index);
	void Equip();
	void SortByWeight();
	void SortByValue();
	
};