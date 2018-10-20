#pragma once
#include "raylib.h"
#include <math.h>
static float currentAngle;
class DialFace
{
public:
	static Vector2 position;
	static float radius;
	static void DrawFace();
	void Tick();
	DialFace();
	~DialFace();
};
