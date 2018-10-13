#pragma once
#include "raylib.h"
#include<iostream>
class MyHero
{
public:
	int HitPoints = 100;
	MyHero();
	void DrawHPOVERHEAL();
	void DrawHP100();
	void DrawHP75();
	void DrawHP50();
	void DrawHP25();
	void DrawHP15();
	void DrawHPDEAD();
	Texture2D OVERHEAL = LoadTexture("Resources/OVERHEAL.png");
	Texture2D HP100 = LoadTexture("Resources/HP100.png");
	Texture2D HP75 = LoadTexture("Resources/HP75.png");
	Texture2D HP50 = LoadTexture("Resources/HP50.png");
	Texture2D HP25 = LoadTexture("Resources/HP25.png");
	Texture2D HP15 = LoadTexture("Resources/HP15.png");
	Texture2D DEAD = LoadTexture("Resources/DEAD.png");

};
class Potion
{
public:
	int HPModifier;
	Potion();
	int IncreaseHealth(int HPModifier);
};