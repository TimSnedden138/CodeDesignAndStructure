#pragma once
#pragma once
#include "raylib.h"
#include<iostream>
class Barbarian
{
public:
	Texture2D BarbarianIdle = LoadTexture("Resources/BarbarianIdle1.png");
	int health = 5;
	int rage = 20;
	int gold;
	Vector2 pos;
	int BarbarianDmg;
	int Barbidle = 0;
	bool loaded;
	Barbarian();
	void draw();
	void update(float frameTime);
};