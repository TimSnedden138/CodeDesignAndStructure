#include "Wizard.h"
#include"raylib.h"
#include<iostream>
Wizard::Wizard()
{
	WizardIdle = LoadTexture("Resources/WizardIdle0.png");
}

void Wizard::draw()
{
	DrawTextureEx(WizardIdle, {25,25},0,1, RED);

}