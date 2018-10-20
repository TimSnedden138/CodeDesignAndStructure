#include"raylib.h"
#include"Clock.h"
#include<string>
#include<iostream>
int main() {
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "Testing Lab V1");
	DialFace clock;
	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		float mouseXaxis = GetMouseX();
		float mouseYaxis = GetMouseX();
		std::cout <<"X Axis:"<< mouseXaxis << " " << "Y Axis:" << mouseYaxis << std::endl;
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		ClearBackground(BLACK);
		clock.DrawFace();
		clock.DrawFace();
		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
						  //--------------------------------------------------------------------------------------

	return 0;
}