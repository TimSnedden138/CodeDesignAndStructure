#pragma once
#include <iostream>
#include "raylib.h"
#include"gameObject.h"
class Soldier{
	bool enabled;
	Soldier();
	~Soldier();
	void update();
	void render();
};