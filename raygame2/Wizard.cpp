#include "Wizard.h"
#include "Barbarian.h"
#include<iostream>
Wizard::Wizard()
{
}

void Wizard::draw()
{
	if (health > 0) {
		DrawTextureEx(WizardIdle , pos, 0, 1, BLUE);
	}

}