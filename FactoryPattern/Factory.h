#pragma once
#include <iostream>
#include "IBox.h"
#include "RedBox.h"
#include "BlueBox.h"
#include "IFactory.h"

class Factory : public IFactory
{
public:
	IBox * Create(std::string type);
	int getState();
	int setState(int newState);
	static Factory& GetInstance();
	int state;
};