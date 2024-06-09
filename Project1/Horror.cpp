#include "Horror.h"

int Horror::getAgeLimit() {
	return ageLimit;
}

void Horror::setAgeLimit(int age) {
	if (age >= 0)
	{
		ageLimit = age;
	}
}