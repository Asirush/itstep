#include "ASet.h"
#include <iostream>

ASet::ASet(int a, int b)
{
	start = a; end = b;
}

ASet::ASet(int b)
{
	start = 0; end = b;
}

ASet::~ASet()
{
}

void ASet::incl(int number)
{
	if (!contain(number)) {
		if (number > end) end = number;
	}
}

bool ASet::contain(int number)
{
	bool contain;
	if (number < start || number > end) return false;
	else return true;
}

void ASet::print()
{
	for (int i = start; i <= end; i++) {
		std::cout << i << " ";
	}
}
