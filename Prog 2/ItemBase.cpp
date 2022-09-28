#include <iostream>
#include "ItemBase.h"

ItemBase::ItemBase()
{
	this->Name = "empty";
	this->Description = "empty";
	this->Price = 0;
	this->Weight = 0;
	this->ItemType = -1;
}

ItemBase::ItemBase(int ItemType)
{
	this->ItemType = ItemType;
}

ItemBase::ItemBase(int ItemType, int Weight, int Price, string Description, string Name)
{
}

ItemBase::~ItemBase() 
{

}