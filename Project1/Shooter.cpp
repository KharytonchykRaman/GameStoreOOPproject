#include "Shooter.h"

int Shooter::getAmountMap() {
	return amountMap;
}

void Shooter::setAmountMap(int amountMap) {
	if (amountMap > 0)
	{
		this->amountMap = amountMap;
	}
}