#include "Player.h"
#include"raylib.h"
Player::Player()
{
}

Player::Player(const std::string & fileName)
{
	Texture2D Mage = LoadTexture(fileName.c_str());
	mySprite = Mage;
}

Player::~Player()
{
}

bool Player::moveTo(const Vector2 & dest)
{
	return false;
}

void Player::draw()
{
	DrawTextureEx(mySprite, { 150,150 }, 0, 2, WHITE);
}
