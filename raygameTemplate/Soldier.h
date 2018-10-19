#pragma once
#include <iostream>
#include "raylib.h"
#include"gameObject.h"
template <typename T>
class Soldier{
	bool enabled;
	T * object;
	void update();
	void render();
};
