#include "Soldier.h"
void Soldier::render(Texture2D image)
{
DrawTextureEx(image, { 100,100 }, 0, 2, WHITE);
}

void Soldier::update(float delta)
{
}
 