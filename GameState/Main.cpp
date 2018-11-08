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
	Texture2D player1 = LoadTexture("Resources/Players/P1.png");
	Texture2D player2 = LoadTexture("Resources/Players/P2.png");
	int timer1 = 0;
	int timer2 = 0;
	//--------------------------------------------------------------------------------------
	GameState::GetInstance().setState(0);
	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{

		if (IsKeyPressed(KEY_ONE)) {
			GameState::GetInstance().setState(0);
		}
		if (IsKeyPressed(KEY_TWO)) {
			GameState::GetInstance().setState(1);

		}
		if (IsKeyPressed(KEY_THREE)) {
			GameState::GetInstance().setState(2);
		}
		if (IsKeyPressed(KEY_FOUR)&& timer1 || timer2 == 20) {
			GameState::GetInstance().setState(3);
		}
		std::cout <<"Scene:"<< GameState::GetInstance().getState() + 1 << "\n" << "Corrdinates X:"<<GetMousePosition().x<<","<< "Y:" <<GetMousePosition().x << std::endl;
		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
		ClearBackground(WHITE);
		if (GameState::GetInstance().getState() == 0)
		{
			DrawText("START SCENE", 100, 100, 10, RED);
			DrawTextureEx(player1, { 100,250 }, 0, 1.5, WHITE);
			DrawTextureEx(player2, { 350,250 }, 0, 1.5, WHITE);
		}
		if (GameState::GetInstance().getState() == 1)
		{
			DrawText("Player 1 GAME SCENE", 100, 100, 10, RED);
			DrawTextureEx(player1, { 100,250 }, 0, 1.5, WHITE);
		}
		if (GameState::GetInstance().getState() == 2)
		{
			DrawText("Player 2 GAME SCENE", 100, 100, 10, RED);
			DrawTextureEx(player2, { 100,250 }, 0, 1.5, WHITE);
		}
		if (GameState::GetInstance().getState() == 3)
		{
			DrawText("END SCENE", 100, 100, 10, RED);

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