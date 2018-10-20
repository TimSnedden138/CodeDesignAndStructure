#pragma once
#include "raylib.h"
template <typename T>
class gameObject
{
public:
	bool enabled;
	T * object;
	int timer;
	Texture2D image;
	
void update(float delta)
{
	timer = delta;  
}

void render(Texture2D image,T & object)
{
	object.render(image);
}
gameObject(T& _obj) {
	object = &_obj;
}
};
