#include "FallingFactory.h"

void FallingFactory::init()
{
	//Load in the various sprites
	spriteCount = 4;
	spriteMasters = new SimpleSprite[spriteCount];
	spriteMasters[0] = *(new SimpleSprite("Sprites/spaceMeteors_001.png", "rock", .1f));
	spriteMasters[1] = *(new SimpleSprite("Sprites/spaceMeteors_002.png", "rock", .1f));
	spriteMasters[2] = *(new SimpleSprite("Sprites/spaceMeteors_003.png", "rock", .1f));
	spriteMasters[3] = *(new SimpleSprite("Sprites/spaceMeteors_004.png", "rock", .1f));
}
SimpleSprite * FallingFactory::getRandom()
{
	return nullptr;
}

SimpleSprite * FallingFactory::getFromType(const std::string & _sprType)
{
	return nullptr;
}

FallingFactory::FallingFactory()
{
}

FallingFactory::~FallingFactory()
{
}
