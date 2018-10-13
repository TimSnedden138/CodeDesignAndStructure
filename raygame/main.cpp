#include "raylib.h"
#include "Hero.h"
#include "Armor.h"
#include<string>
#include<iostream>
int main()
{
	int screenWidth = 800;
	int screenHeight = 650;

	InitWindow(screenWidth, screenHeight, "Damage Testing Quaters");
	MyHero Doomguy;
	Armor Armor;
	int HP = Doomguy.HitPoints;
	int DEF = Armor.Dmg;
	int Striked = 1;
	int Shot = 0;
	Potion HealthUP;
	SetTargetFPS(60);
	// Main game loop
	while (!WindowShouldClose())
	{   // Lose Armor then life
		if (IsKeyPressed(KEY_L)) {
			if (DEF > 0)
			{
				Armor.Dmg = Armor.Dmg - HealthUP.IncreaseHealth(5);
				DEF = Armor.Dmg;
				Shot++;
			}
			if (DEF <= 0) {
				Doomguy.HitPoints = Doomguy.HitPoints - HealthUP.IncreaseHealth(5);
				HP = Doomguy.HitPoints;
				Striked++;
			}
		}
		// Heal Life
			if (IsKeyPressed(KEY_H)) {
				if (DEF == 0) {
					Doomguy.HitPoints = Doomguy.HitPoints + HealthUP.IncreaseHealth(5);
					HP = Doomguy.HitPoints;
					Striked--;
				}
			}
		
		//Drawing
		BeginDrawing();
		ClearBackground(BLACK);
		if (DEF == 0) {
			if (HP > 100) {
				DrawText("You Have Overhealed", 350, 340, 40, RED);
				Doomguy.DrawHPOVERHEAL();
			}
			if (HP <= 100) {
				Doomguy.DrawHP100();
			}
			if (HP <= 75) {
				Doomguy.DrawHP75();
			}
			if (HP <= 50) {
				Doomguy.DrawHP50();
			}
			if (HP <= 25) {
				Doomguy.DrawHP25();
			}
			if (HP <= 15) {
				Doomguy.DrawHP15();
			}
			if (HP == 0) {
				Doomguy.DrawHPDEAD();
		}
}
		if (DEF > 0) {
			if (DEF <= 100) {
				Armor.DrawAR100();
			}
			if (DEF <= 75) {
				Armor.DrawAR75();
			}
			if (DEF <= 50) {
				Armor.DrawAR50();
			}
			if (DEF <= 25) {
				Armor.DrawAR25();
			}
			if (DEF <= 15) {
				Armor.DrawAR15();
			}
			if (DEF == 0) {
				Armor.DrawARDestroyed();
			}
		}
		DrawText(std::to_string(HP).c_str(), 287, 603, 35, RED);
		DrawText("HP", 290, 630, 25, RED);
		DrawText(std::to_string(Shot).c_str(), 440, 603, 35, RED);
		DrawText(std::to_string(DEF).c_str(), 210, 603, 35, RED);
		DrawText("Strikes", 410, 630, 25, RED);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}