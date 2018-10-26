#include"tStack.h"
#include<iostream>
#include"raylib.h"
#include<string>
int main() {
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "Testing Lab V1");
	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		DrawText("TestingText", 200, 200, 25, RED);
		ClearBackground(BLACK);
		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
						  //--------------------------------------------------------------------------------------

	return 0;
}