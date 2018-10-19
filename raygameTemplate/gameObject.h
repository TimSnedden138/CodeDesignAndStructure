#pragma once
#include <iostream>
#include "raylib.h"
template <typename T>
class gameObject
{
	bool enabled;
	T * object;

	void update(float delta)
{
	if (T.enabled = true) {

	}
	else if (T.enabled = false) {
		std::cout << "the object is not being rendered"<<std::endl;
	}
}

	void render()
	{
		if (T.enabled = true) {

		}
		else if (T.enabled = false) {
			std::cout<<"the object is not being rendered"<<std::endl;
		}
	}

};