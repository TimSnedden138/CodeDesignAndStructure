#pragma once
#include <iostream>
#include "raylib.h"
class Soldier {
public:
	bool enabled;
	void update(float delta);
	void render(Texture2D image);
};