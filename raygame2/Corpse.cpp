#include "Corpse.h"
#include "Wizard.h"
#include "Barbarian.h"
void Corpse::draw()
{
	if (Te.health == 0) {
		DrawTextureEx(DEAD, pos, 0, 1, RED);
	}
}
