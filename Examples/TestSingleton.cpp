#include "TestSingleton.h"

TestSingleton::TestSingleton() {}
TestSingleton::~TestSingleton() {}

void TestSingleton::operator=(TestSingleton const &) {}

TestSingleton & TestSingleton::GetInstance()
{
	static TestSingleton instance;
	return instance;
}

int TestSingleton::addInts(const int a, const int b)
{
	return a + b;
}