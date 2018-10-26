#include"raylib.h"
#include"tVector.h"
#include"tStack.h"
#include"tQueue.h"
#include<string>
#include<iostream>
int main() {
	tVector<int> ti;
	std::cout << ti.empty() << std::endl;
	ti.push_back(8);
	ti.push_back(7);
	ti.pop_back();
	std::cout << ti.empty() << std::endl;
	ti.push_back(5);
	ti.push_back(9);
	ti.push_back(11);
	ti.push_back(40);
	std::cout << ti.size() << std::endl;
	return 0;
}