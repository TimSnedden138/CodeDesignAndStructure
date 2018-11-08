#include"raylib.h"
#include"GameState.h"
#include<iostream>
using namespace std;
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
	Texture2D death = LoadTexture("Resources/Players/DEATH.png");
	float timer1 = 60;
	float timer2 = 60;
	int lives = 3;
	//--------------------------------------------------------------------------------------
	GameState::GetInstance().setState(0);
	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		if (IsKeyPressed(KEY_ONE)) {
			GameState::GetInstance().setState(0);
			timer1 = 60;
			timer2 = 60;
		}
		if (IsKeyPressed(KEY_TWO)) {
			GameState::GetInstance().setState(1);
			
		}
		if (GameState::GetInstance().getState() == 1) {
			timer1 = timer1 - GetFrameTime();
			cout << timer1 << endl;
		}
		if (IsKeyPressed(KEY_THREE)) {
			GameState::GetInstance().setState(2);
		}
		if (GameState::GetInstance().getState() ==2) {
			timer2 = timer2 - GetFrameTime();
		}
		if (IsKeyPressed(KEY_FOUR)&& timer1 <= 0 || timer2 <= 0) {
			if (lives != 0) {
				GameState::GetInstance().setState(1);
			}
			if (lives == 0) {
				GameState::GetInstance().setState(3);
			}
		}
		cout << "Scene:" << GameState::GetInstance().getState() + 1 << "\n" << "Corrdinate X:" << GetMousePosition().x << "\n" << "Corrdinate Y:" << GetMousePosition().y <<endl;
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
			DrawTextureEx(death, { 100,250 }, 0, 1.5, WHITE);

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