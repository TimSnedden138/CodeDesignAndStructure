#pragma once
class TestSingleton
{

	// since the only constructors are private, only this class can create it
private:
	TestSingleton();
	TestSingleton(TestSingleton const&);  // Prevents use
	void operator=(TestSingleton const&); // Prevents use

public:
	// other parts of your code have to use this function to get an instance of TestSingleton
	static TestSingleton& GetInstance();
	~TestSingleton();

	int addInts(const int a, const int b);
};