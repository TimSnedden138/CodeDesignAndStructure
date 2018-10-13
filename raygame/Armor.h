#pragma once
#include "raylib.h"
#include<iostream>
class Armor
{
public:
	int Dmg = 100;
	Armor();
	void DrawAR100();
	void DrawAR75();
	void DrawAR50();
	void DrawAR25();
	void DrawAR15();
	void DrawARDestroyed();
	Texture2D ARMOR100 = LoadTexture("Resources/ARMOR100.png");
	Texture2D ARMOR75 = LoadTexture("Resources/ARMOR75.png");
	Texture2D ARMOR50 = LoadTexture("Resources/ARMOR50.png");
	Texture2D ARMOR25 = LoadTexture("Resources/ARMOR25.png");
	Texture2D ARMOR15 = LoadTexture("Resources/ARMOR15.png");
	Texture2D DESTROYED = LoadTexture("Resources/DESTROYED.png");
};