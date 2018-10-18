#pragma once
#pragma once
#include "raylib.h"
#include <iostream>
class Sprite : public Vector2
{
public:
	Texture2D SpriteIdles[4];
	int IdleFrame;
	float timer;
	Sprite();
	Sprite(const std::string *filename, const  int cellCount = 1, const float _frameRate = 25.0);
	void draw();
	void update(float frameTime);
};