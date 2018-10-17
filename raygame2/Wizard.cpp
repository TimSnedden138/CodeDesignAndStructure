#include "Wizard.h"
#include "Barbarian.h"
#include<iostream>
Wizard::Wizard()
{
}

void Wizard::draw()
{
	DrawTextureEx(WizardIdle, {25,25},0,1, RED);

}