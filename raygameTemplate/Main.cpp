#include"MinMax.h"
#include<iostream>
#include"gameObject.h"
#include"Soldier.h"
#include"raylib.h"
#include<string>
int main() {
	int a = min<int>(15, 15);
	int b = max<int>(4, 27);
	float c = min<float>(24.2, 7.5);
	float d = max<float>(7.3,35.4);
	std::cout << "Min:" << a << std::endl;
	std::cout << "Max:" << b << std::endl;
	std::cout << "Min:" << c << std::endl;
	std::cout << "Max:" << d << std::endl;
	system("pause");
	return 0;
}