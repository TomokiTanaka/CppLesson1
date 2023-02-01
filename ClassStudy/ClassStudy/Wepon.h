#pragma once
#include "Item.h"

class Wepon : Item
{
public:

	Wepon();

private:

	int attackPower;
	float maxDurability;
	float durability;
};

