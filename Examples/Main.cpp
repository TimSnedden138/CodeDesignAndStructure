#include <iostream>
#include "TestSingleton.h"

int main()
{
	std::cout << TestSingleton::GetInstance().addInts(5, 2) << std::endl;
	return 0;
}