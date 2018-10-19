/*******************************************************************************************
*
*   raylib [core] example - basic window
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include"Player.h"
#include <iostream>
int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "Polymorph");
	Player PlayerIdle;
	PlayerIdle = {"Idle.png"};
	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		BeginDrawing();

		ClearBackground(BLACK);
		PlayerIdle.draw();
		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
						  //--------------------------------------------------------------------------------------

	return 0;
}