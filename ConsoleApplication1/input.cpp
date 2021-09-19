#include <iostream>
#include "input.h"

int get_int(int& a)
{
	std::cin >> a;
	if (!std::cin.good())
		return -1;
	return 1;
}

double get_double(double& a)
{
	std::cin >> a;
	if (!std::cin.good())
		return -1;
	return 1;
}