#pragma once
#include"raylib.h"
#include<iostream>
class Wizard
{
public:
	Texture2D WizardIdle;
	int health = 25;
	int mana = 50;
	int gold;
	Vector2 pos;
	Wizard();
	void draw();

};
