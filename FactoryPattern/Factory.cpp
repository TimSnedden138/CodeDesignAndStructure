#include "Factory.h"
IBox* Factory::Create(std::string type)
{
	if (type == "Red")
		return new RedBox();

	if (type == "Blue")
		return new BlueBox();

	return NULL;
}
int Factory::getState()
{
	return state;
}

int Factory::setState(int newState)
{
	state = newState;
	return 0;
}

Factory & Factory::GetInstance()
{
	static Factory* instance = new Factory();
	return *instance;

}