#include<iostream>
#include <string>
#include"Libraries.h"

int main() {
	IBox* p = NULL;
	IFactory* f = NULL;
	f = new Factory();
	p = f->Create("Red");
	std::cout << "\nColor is: " << p->Color() << "\n";
	delete p;
	p = f->Create("Blue");
	std::cout << "\nColor is: " << p->Color() << "\n";
	delete f;
	return 1;
}
