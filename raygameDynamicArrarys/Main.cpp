#include"raylib.h"
#include"tVector.h"
#include"tStack.h"
#include"tQueue.h"
#include<string>
#include<iostream>
int main() {
	tVector<int> ti;
	ti.reserve(10);
	ti.push_back(7);
	ti.push_back(6);
	ti.push_back(5);
	ti.push_back(4);
	std::cout << ti.size() << std::endl;

	return 0;
}