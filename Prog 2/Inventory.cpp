#include "Inventory.h"
#include "ItemBase.h"
#include <iostream>

Inventory::Inventory()
{
	this->cap = 10;
	this->nrOfItems = 0;
	this->itemArr = new ItemBase * [cap];
	this->initialize();
}
void Inventory::initialize(const int from)
{
}

Inventory::~Inventory()
{
	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		delete this->itemArr[i];
	}
	delete[] this->itemArr;
}

Inventory::Inventory(const Inventory& obj)
{
}

void Inventory::expand()
{
	this->cap *= 2;

	ItemBase** tempArr = new ItemBase * [this->cap];

	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		tempArr[i] = this->itemArr[i];
	}

	delete[] this->itemArr;

	this->itemArr = tempArr;

	this->initialize(this->nrOfItems);
}




//void Inventory::Create(int slots)
//{
//
//}

void Inventory::Add(const ItemBase& item)
{
	if (this->nrOfItems >= this->cap)
	{
		expand();
	}

	this->itemArr[this->nrOfItems++] = item.clone();
}

void Inventory::Remove(int index)
{
	delete this->itemArr[index];
	this->itemArr[index] = this->itemArr[this->nrOfItems - 1];
	this->itemArr[--this->nrOfItems] = nullptr;
}

void Inventory::Equip()
{

}

void Inventory::SortByWeight()
{

}

void Inventory::SortByValue()
{

}
