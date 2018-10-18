#include "Sprite.h"
#include "Sprite.h"
#include "raylib.h"
#include<iostream>
Sprite::Sprite()
{
	IdleFrame = 0;
	timer = 0.0f;
	SpriteIdles[0] = LoadTexture("Resources/Idle0.png");
	SpriteIdles[1] = LoadTexture("Resources/Idle1.png");
	SpriteIdles[2] = LoadTexture("Resources/Idle2.png");
	SpriteIdles[3] = LoadTexture("Resources/Idle3.png");
}
Sprite::Sprite(const std::string * filename, const int cellCount, const float _frameRate)
{

}
void Sprite::draw() 
{
	DrawTextureEx(SpriteIdles[IdleFrame],{0,0},0,5,RED);
}

void Sprite::update(float frameTime)
{
	timer += frameTime;
	if (timer >= 0.1f) {
		timer = 0.0f;
		IdleFrame++;
		if (IdleFrame >= 4) {
			IdleFrame = 0;
		}
	}
}
