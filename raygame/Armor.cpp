#include "Armor.h"
#include"raylib.h"
Armor::Armor()
{
}
void Armor::DrawAR100() {
	DrawTextureEx(ARMOR100, { 210,566 }, 0, .75, WHITE);
}
void Armor::DrawAR75() {
	DrawTextureEx(ARMOR75, { 210,566 }, 0, .75, WHITE);
}
void Armor::DrawAR50() {
	DrawTextureEx(ARMOR50, { 210,566 }, 0, .75, WHITE);
}
void Armor::DrawAR25() {
	DrawTextureEx(ARMOR25, { 210,566 }, 0, .75, WHITE);
}
void Armor::DrawAR15() {
	DrawTextureEx(ARMOR15, { 210,575  }, 0, .75, WHITE);
}
void Armor::DrawARDestroyed() {
	DrawTextureEx(DESTROYED, { 210,572 }, 0, .75, WHITE);
}

