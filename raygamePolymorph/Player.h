#pragma once
#include "raylib.h"
#include <iostream>

class Player
{
public:
	Player();
	Player(const std::string &fileName);
	~Player();
	Vector2 position = { 100,100 };
	float speed = 0;
	Texture2D mySprite;
	bool moveTo(const Vector2 &dest);
	void draw();
};