#include"raylib.h"
#include"GameState.h"
#include<iostream>
int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "Barbarian vs Wizard");
	SetTargetFPS(60);
	Texture2D player1 = LoadTexture("Resources/Player/P1.png");
	Texture2D player2 = LoadTexture("Resources/Player/P2.png");
	//--------------------------------------------------------------------------------------
	GameState::GetInstance().setState(0);
	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{

		if (GetKeyPressed() && IsKeyPressed(KEY_ZERO)) {
			GameState::GetInstance().setState(0);
		}
		if (GetKeyPressed() && IsKeyPressed(KEY_ONE)) {
			GameState::GetInstance().setState(1);
		}
		std::cout << GameState::GetInstance().getState() << std::endl;
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		ClearBackground(WHITE);
		if (GameState::GetInstance().getState() == 0)
		{
			DrawText("REDT", 100, 100, 10, RED);
			DrawTextureEx(player1, { 100,250 },0,5,WHITE);
		}
		if (GameState::GetInstance().getState() == 1)
		{
			DrawText("RETD", 100, 100, 10, RED);

		}
		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
						  //--------------------------------------------------------------------------------------

	return 0;
}