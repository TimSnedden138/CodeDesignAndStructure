#include "Barbarian.h"
#include "Wizard.h"
#include<iostream>
Wizard Te;
Barbarian::Barbarian()
{
}
void Barbarian::update(float frameTime) {
	if (frameTime == 4) {
		frameTime = 0;
	}
}
void Barbarian::draw()
{
	DrawTextureEx(BarbarianIdle, pos, 0, 1, RED);
}