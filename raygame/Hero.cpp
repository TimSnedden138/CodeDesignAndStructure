#include "Hero.h"

MyHero::MyHero()
{
	
	
}
void MyHero::DrawHPOVERHEAL() {

	DrawTextureEx(OVERHEAL, { 350,570 }, 0, 1.50, WHITE);
}
void MyHero::DrawHP100() {
	
	DrawTextureEx(HP100, { 350,570 }, 0, 1.25, WHITE);
}
void MyHero::DrawHP75() {

	DrawTextureEx(HP75, { 350,570 }, 0, 1.25, WHITE);
}
void MyHero::DrawHP50() {

	DrawTextureEx(HP50, { 350,570 }, 0, 1.25, WHITE);
}
void MyHero::DrawHP25() {

	DrawTextureEx(HP25, { 350,570 }, 0, 1.25, WHITE);
}
void MyHero::DrawHP15() {
	DrawTextureEx(HP15, { 350,570 }, 0, 1.25, WHITE);
}
void MyHero::DrawHPDEAD() {
	DrawTextureEx(DEAD, { 350,572 }, 0, 1.25, WHITE);
}


Potion::Potion()
{
	
}
int Potion::IncreaseHealth(int HPModifier) {
	if (IsKeyPressed(KEY_L) or IsKeyPressed(KEY_H)) {
		HPModifier = 5;
		return HPModifier;
	}	
	
}
