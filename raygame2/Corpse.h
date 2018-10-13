#pragma once
#include<iostream>
#include"raylib.h"
class Corpse
{
public:
	Texture2D DEAD = LoadTexture("Resources/Corpse.png");
	Vector2 pos;
	void draw();
};